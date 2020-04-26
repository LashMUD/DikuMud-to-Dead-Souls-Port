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

    SetKeyName("sea hag");
    SetId(({"hag", "sea"}));
    SetAdjectives(({"", ""}));
    SetShort("The Sea Hag");
    SetLong("The Sea Hag is swimming around here");
    SetRace("dryad"); //possible new race 'hag'
    SetClass("npc_melee");
    SetLevel(54);
    SetGender("female");
    SetMorality(-2000);
    SetWander(5);
    SetEncounter( (:CheckNPC:) );
    //need sea hag functions
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
FEMALE MOB - Name : sea hag [R-Number131], In room [3001] V-Number [7041]
Short description: The sea hag
Title: None
Long description: The Sea Hag is swimming around here
Monster Class: Normal   Level [14] Alignment[-800]
Birth : [1316486021]secs, Logon[1316486021]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+14]  Hit p.:[180/180+14]  Move p.:[50/50+14]
AC:[10/10], Coins: [0], Exp: [18000], Hitroll: [13], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC AGGRESSIVE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [6] [6] [6] [6] [6]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
