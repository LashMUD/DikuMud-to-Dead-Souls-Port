// Based on Diku MUD Alfa.  Program and Concept created by
// Sebastian Hammer, Michael Seifert, Hans Henrik Staerfeldt,
// Tom Madsen, and Katja Nyboe.
// http://www.dikumud.com
//
// Modified by Lash (Christopher Coker) for use with:
//
// The Dead Souls Mud Library version 2
// developed by Cratylus
// http://www.dead-souls.net

#include <lib.h>

inherit LIB_SENTIENT;
//inherit "/domains/diku-alfa/etc/sentient.c";

void NpcSteal();
void Scavenge();

/* Used in checking SetActionsMap() map functionality*/
int count();
int ntimes = 0;
int stimes = 0;
int tot = 0;
int hb = 0;


static void create() {
    
    sentient::create();

    SetKeyName("the thief");
    SetId( ({"thief"}) );
    SetAdjectives(({"non-player", "evil", "tricky"}));
    SetShort("A thief, all dressed in black");
    SetLong("Well, COUNT your money..!");
    SetRace("human");
    SetClass("thief");
    SetLevel(8);
    SetMelee(1);
    SetCanBite(0);
    SetGender("male");
    SetMorality(-250); 
    AddCurrency("gold", 100);
    SetActionsMap( ([ 
                     ( :Scavenge: ) : 10,
                     ( :NpcSteal: ) : 5,
                     ( :count: ) : 100,
                 ]) );
    /*SetAction(100, ( :Scavenge:));
    SetAction(5, ( :NpcSteal:));
    SetAction(100, ( :count:));*/
    SetWanderSpeed(5);
    SetInventory( ([
         "/domains/diku-alfa/room/41.zon/meals/4103_slime" :1,
         "/domains/diku-alfa/room/41.zon/meals/4104_slime_poison" :1,
       ]) );
    SetProperty("STAY_ZONE", 1);
       
}

void init(){
    ::init();
}

/*Used to count every heartbeat*/
int count(){
    hb++;

    tell_room(environment(this_object()), "Heart Beats: "+hb+"\n"+
                                          "Total calls to NpcSteal() and Scavenge(): "+tot+"\n"+
                                          "NpcSteal() calls: "+ntimes+"\n"+
                                          "Scavenge() calls: "+stimes+"\n");
    return hb;
}


void NpcSteal(){

    object env = environment(this_object());
    object *potvictims; 
    int n1, n2, gold, level;
    level = this_object()->GetLevel();
   
    
    tot++;
    ntimes++;
    
    
    potvictims = filter(get_livings(env), ( :living($1) && $1 != this_object() && playerp($1):) ); 
    
    foreach(object target in potvictims){
        if(playerp(target)){
            n1 = random(level);
            if(n1 ==0){
                tell_object(target, "You notice " + capitalize(this_object()->GetKeyName()) + " trying to steal from you!");
                break;
            }
            if(n1 > 0){
                n2 = random(level)+1;
                gold = target->GetCurrency("gold") * n2 /100;
                this_object()->AddCurrency("gold", gold);
                target->AddCurrency("gold", -gold);
            }
        }
    }
}

void Scavenge(){

    object env = environment(this_object());
    object *item, *cost;
    int s;
    
    
    tot++;
    stimes++;
    

    item = filter(all_inventory(env), (: !living($1) && (inherits(LIB_ITEM, $1) || inherits(LIB_ARMOR, $1)):) );
    cost = sort_array(item->GetBaseCost(), -1);
    s = sizeof(cost);
    if(s>0){
        foreach(object thing in item){
            if(thing->GetBaseCost() == cost[0]){
                eventForce("get "+thing->GetKeyName());
                break;
            }
        }
    }
}

/* Extra Information Original Diku Output 
MALE MOB - Name : thief [R-Number71], In room [3001] V-Number [4103]
Short description: the Thief
Title: None
Long description: A thief, all dressed in black.
Monster Class: Normal   Level [8] Alignment[100]
Birth : [1316471825]secs, Logon[1316471825]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+8]  Hit p.:[106/106+8]  Move p.:[50/50+8]
AC:[30/10], Coins: [100], Exp: [4000], Hitroll: [7], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SPEC SCAVENGER ISNPC STAY-ZONE ,Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 2d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [12] [12] [12] [12] [12]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
