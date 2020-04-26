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

    SetKeyName("Shudde-M'ell");
    SetId(({"worm", "Shudde-M'ell", "creature", "blob"}));
    SetAdjectives(({"", ""}));
    SetShort("Shudde-M'ell");
    SetLong("Shudde-M'ell the Giant worm of G'harne is guarding his treasure.");
    SetRace("blob"); //check for appropriate race
    SetClass("fighter");
    SetLevel(24);
    SetMorality(-2500);
    AddCurrency("gold" , 13666);
    SetGender("neuter");
    SetEncounter( (:CheckNPC:) ); // aggressive mob
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
NEUTRAL-SEX MOB - Name : worm Shudde-M'ell [R-Number92], In room [5031] V-Number [5005]
Short description: Shudde-M'ell
Title: None
Long description: Shudde-M'ell the Giant worm of G'harne is guarding his
treasure.
Monster Class: Normal   Level [24] Alignment[-1000]
Birth : [1313888199]secs, Logon[1313888199]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+24]  Hit p.:[493/493+24]  Move p.:[50/50+24]
AC:[0/10], Coins: [13666], Exp: [75000], Hitroll: [20], Damroll: [4]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL ISNPC AGGRESSIVE, Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 3d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/


