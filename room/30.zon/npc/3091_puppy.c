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

void Scavenge();

static void create() {
    sentient::create();
    
    SetKeyName("the Puppy");
    SetId( ({"puppy", "dog", "pet"}) );
    SetAdjectives(({"non-player", "non player"}));
    SetShort("A small loyal Puppy");
    SetLong("The Puppy looks like a cute, little, fierce fighter.");
    SetRace("dog");
    SetCanBite(1);
    SetLevel(1);
    SetMelee(1);
    SetGender("neuter");
    SetMorality(1000);
    SetAutoStand(0);
    SetAction(10, ( :Scavenge: ));
}

void init(){
    ::init();
    add_action("order", "order");
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
                thing->eventMove(this_object());
                tell_room(env, this_object()->GetShort()+" gets "+thing->GetShort(), ({this_object()}));
                break;
            }
        }
    }
}

int order(string str){

    object ob = this_player();
    string petid, cmd, noun, doit;
    string *stringarray;
               
    if(!stringp(str)) return notify_fail("Usage: order <pet> do something.");
        
    if(!str || !ob || !ob->GetProperty(this_object())) return 0;
    stringarray=explode(str, " ");
    if(sizeof(stringarray)<2) return notify_fail("Usage: order <pet> do something.");   
    if(sizeof(stringarray) <3){
        cmd = stringarray[1];
    }
    
    /* The following has to be added if using unmodified /lib/lib/lead.c or player may evade pet.
       With following code player re-establishes master/pet relationship:

    //if(ob && ob->GetProperty(this_object()) && ob != this_object()->GetLeader()) eventForce("follow "+ob->GetKeyName());
    */

    if(ob && ob->GetProperty(this_object())){
        sscanf(str, "%s %s %s", petid, cmd, noun);
        doit=cmd+" "+noun;
            if(!stringp(cmd) || !str || member_array(petid, this_object()->GetId()) == -1 /*|| member_array(cmd, get_cmds() == -1*/){
                tell_player(ob, "The large, trained wolf has an indifferent look.");
                return 1;
            }
    }
    if(noun != 0){
        command(doit);
    }
    else{
        command(cmd);
    }
    return 1;
}

/* Extra Information Original Diku Output
NEUTRAL-SEX MOB - Name : puppy [R-Number36], In room [3031] V-Number [3091]
Short description: the Puppy
Title: None
Long description: A small loyal Puppy is here.
Monster Class: Normal   Level [1] Alignment[400]
Birth : [1314973242]secs, Logon[1314973242]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+1]  Hit p.:[16/16+1]  Move p.:[50/50+1]
AC:[90/10], Coins: [0], Exp: [0], Hitroll: [0], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL SCAVENGER ISNPC, Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d4.
Carried weight: 1000   Carried items: 100
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [19] [19] [19] [19] [19]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'Lash'
Followers are:
Affected by: CHARM
*/
