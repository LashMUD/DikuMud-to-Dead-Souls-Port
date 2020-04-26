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

static void create(){
    sentient::create();

    SetKeyName("red dragon");
    SetId(({"red", "dragon", "red dragon"}));
    SetAdjectives(({"", ""}));
    SetShort("The Red Dragon");
    SetLong("The Red, fierce-looking, Dragon stares at you angrily.");
    SetRace("dragon");
    SetClass("npc_melee");
    SetLevel(100);
    SetGender("neuter");
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/armor/7304_plate_torso" : 1,
        "/domains/diku-alfa/room/74.zon/armor/7305_plate_tassets" : 1,
        "/domains/diku-alfa/room/74.zon/armor/7306_gauntlets" : 1,
        "/domains/diku-alfa/room/74.zon/armor/7307_helmet" : 1,
        "/domains/diku-alfa/room/74.zon/armor/7308_shield" : 1,
        "/domains/diku-alfa/room/74.zon/armor/7309_greaves" : 1,
        "/domains/diku-alfa/room/74.zon/armor/7310_arm_guards" : 1,
        "/domains/diku-alfa/room/74.zon/weap/7216_sword_two_handed" : 1,
        ] ));
    AddCurrency("gold" , 10000);
    SetMorality(-2500);
    SetEncounter( (:CheckNPC:) );  //mob is AGGRESSIVE
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

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : red dragon [R-Number130], In room [3001] V-Number [7040]
Short description: The red dragon
Title: None
Long description: The Red fierce-looking dragon stares at you angrily
Monster Class: Normal   Level [19] Alignment[-1000]
Birth : [1313933561]secs, Logon[1313933561]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+19]  Hit p.:[247/247+19]  Move p.:[50/50+19]
AC:[0/10], Coins: [10000], Exp: [35100], Hitroll: [18], Damroll: [3]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC SENTINEL ISNPC AGGRESSIVE, Timer [0] 
Mobile Special procedure : Exists
NPC Bare Hand Damage 3d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/
