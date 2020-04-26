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

    SetKeyName("scaled basilisk");
    SetId(({"basilisk", "scaled"}));
    SetAdjectives(({"", ""}));
    SetShort("The Scaled Basilisk");
    SetLong("The scaled Basilisk crawls towards you slowly.");
    SetRace("snake"); //possible new race 'basilisk'
    SetClass("npc_melee");
    SetLevel(73);
    SetGender("neuter");
    AddCurrency("gold" , 350);
    SetMorality(-625);
    SetWander(5);
    SetEncounter( (:CheckNPC:) );
    SetAction(10, ( :Scavenge: ));
    //need basilisk functions
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
NEUTRAL-SEX MOB - Name : scaled basilisk [R-Number133], In room [7438] V-Number [7043]
Short description: The scaled basilisk
Title: None
Long description: The scaled Basilisk crawls towards you slowly.
Monster Class: Normal   Level [13] Alignment[-250]
Birth : [1313965304]secs, Logon[1313965304]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [1] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[23/100+13]  Hit p.:[172/172+13]  Move p.:[50/50+13]
AC:[0/10], Coins: [350], Exp: [16000], Hitroll: [9], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC AGGRESSIVE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d7.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [7] [7] [7] [7] [7]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/
