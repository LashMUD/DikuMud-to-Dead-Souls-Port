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

    SetKeyName("bug");
    SetId(({"bug", "computer bug"}));
    SetAdjectives(({"", ""}));
    SetShort("the bug");
    SetLong("A bug scuttles towards you, running in small circles\n"+ 
        "around your feet.");
    SetRace("insect"); //check for appropriate race
    SetLevel(1);
    SetCanBite(1); //Default is no biting; Set to '1' if can bite
    SetMelee(1);  // added to classes that aren't "fighters"
    SetGender("neuter");
    AddCurrency("gold" , 2);
    SetMorality(0);
    SetWander(5);  //if mob is NOT a SENTINEL
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : bug [R-Number143], In room [3001] V-Number [8001]
Short description: the bug
Title: None
Long description: A bug scuttles towards you, running in small circles around
your feet.
Monster Class: Normal   Level [1] Alignment[0]
Birth : [1313966863]secs, Logon[1313966863]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+1]  Hit p.:[15/15+1]  Move p.:[50/50+1]
AC:[50/10], Coins: [2], Exp: [150], Hitroll: [0], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d3.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [19] [19] [19] [19] [19]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
