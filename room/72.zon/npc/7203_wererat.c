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

void CheckNPC();
void Scavenge();

static void create(){
    sentient::create();

    SetKeyName("sewer wererat");
    SetId(({"rat", "wererat", "were"}));
    SetAdjectives(({"", ""}));
    SetShort("the Ugly Wererat");
    SetLong("An ugly wererat is here, looking at you with a strange flick in his\n"+
        "eyes.");
    SetRace("rodent"); //need new 'wererat' race to wield weapons
    SetClass("fighter");
    SetLevel(16);
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/weap/7211_sword_short" : "wield sword",
        ] ));
    SetGender("neuter");
    SetMorality(-1750);
    AddCurrency("gold" , 50);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
    SetEncounter( (:CheckNPC:) );
    SetAction(10, ( :Scavenge: ));
    //spread wererat disease
}

void init(){
    ::init();
}

/*Do not attack other NPC's*/
void CheckNPC(object ob){
 
 object env=environment(this_object());
 if(ob && !inherits(LIB_NPC, ob)){
         eventForce("kill " +ob->GetKeyName());
 }
}

void Scavenge(){

    object env = environment(this_object());
    object *item, *cost;
    int s;
    
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
NEUTRAL-SEX MOB - Name : wererat rat were [R-Number140], In room [3001] V-Number [7203]
Short description: The ugly wererat
Title: None
Long description: An ugly wererat is here, looking at you with a strange flick
in his eyes.
Monster Class: Normal   Level [6] Alignment[-700]
Birth : [1313932713]secs, Logon[1313932713]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+6]  Hit p.:[81/81+6]  Move p.:[50/50+6]
AC:[30/10], Coins: [50], Exp: [1500], Hitroll: [5], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SCAVENGER ISNPC AGGRESSIVE STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [14] [14] [14] [14] [14]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
