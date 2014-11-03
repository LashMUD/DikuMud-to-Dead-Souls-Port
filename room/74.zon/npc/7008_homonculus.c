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

static void create(){
    sentient::create();
    
    SetKeyName("homonculus");
    SetId(({"homonculuc", "homo"}));
    SetAdjectives(({"", ""}));
    SetShort("the creature homonculus");
    SetLong("The creature homonculus is here, looking at you with an evil look.");
    SetCanBite(0); //Default is no biting; Set to '1' if can bite
    SetRace("goblin"); //need new race 'homonculuc'
    SetLevel(11);
    SetMelee(1);  // added to classes that aren't "fighters"
    SetGender("neuter");
    SetMorality(-1950);
    AddCurrency("gold" , 500);
    SetWander(5);  //if mob is NOT a SENTINEL
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : homonculus homo [R-Number124], In room [7400] V-Number [7008]
Short description: the creature homonculus
Title: None
Long description: The creature homonculus is here, looking at you with an evil
look.
Monster Class: Normal   Level [11] Alignment[-780]
Birth : [1313965304]secs, Logon[1313965304]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [15] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[100/100+11]  Hit p.:[142/142+11]  Move p.:[50/50+11]
AC:[10/10], Coins: [500], Exp: [11500], Hitroll: [10], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [9] [9] [9] [9] [9]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/

