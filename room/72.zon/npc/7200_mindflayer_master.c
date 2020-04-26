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

    SetKeyName("the master mindflayer");
    SetId(({"master", "mind", "mindflayer"}));
    SetAdjectives(({"", ""}));
    SetShort("the Master Mindflayer");
    SetLong("The master mindflayer is here, looking at you with an evil look.");
    SetRace("troll"); //need new 'mindflayer' race
    SetClass("fighter");
    SetLevel(18);
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/weap/7200_rod_devil" : "wield rod",
        "/domains/diku-alfa/room/72.zon/armor/7203_cloak_purple" : "wear cloak",
        "/domains/diku-alfa/room/72.zon/obj/key_7205" : 1,
        ] ));
    SetGender("neuter");
    SetMorality(-2000);
    SetWander(5);
    SetEncounter( (:CheckNPC:) );
    SetAction(10, ( :Scavenge: ));
    //need Mindflayer functions
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
NEUTRAL-SEX MOB - Name : master mind mindflayer [R-Number137], In room [3001] V-Number [7200]
Short description: The master mindflayer
Title: None
Long description: The master mindflayer is here, looking at you with an evil
look.
Monster Class: Normal   Level [14] Alignment[-800]
Birth : [1313932047]secs, Logon[1313932047]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+14]  Hit p.:[176/176+14]  Move p.:[50/50+14]
AC:[0/10], Coins: [0], Exp: [18000], Hitroll: [13], Damroll: [4]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC AGGRESSIVE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 3d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [6] [6] [6] [6] [6]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/
