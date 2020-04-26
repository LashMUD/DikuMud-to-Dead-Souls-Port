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
 
    SetKeyName("bear");
    SetId(({"brown", "bear"}));
    SetAdjectives(({"", ""}));
    SetShort("the Brown Bear");
    SetLong("A big, brown, angry-looking bear is here.");
    SetRace("bear");
    SetClass("npc_melee"); 
    SetLevel(8);
    SetMorality(-125);
    SetGender("neuter");
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
    SetEncounter( (:CheckNPC: ) ); // aggressive mob
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
NEUTRAL-SEX MOB - Name : bear [R-Number99], In room [3001] V-Number [6002]
Short description: the brown bear
Title: None
Long description: A big, brown, angry-looking bear is here.
Monster Class: Normal   Level [8] Alignment[-50]
Birth : [1313902575]secs, Logon[1313902575]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+8]  Hit p.:[109/109+8]  Move p.:[50/50+8]
AC:[30/10], Coins: [0], Exp: [4000], Hitroll: [7], Damroll: [2]
Position: Sleeping, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC AGGRESSIVE STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [12] [12] [12] [12] [12]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/

