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

    SetKeyName("computer bug");
    SetId(({"bug", "computer", "$%#@$#"}));
    SetAdjectives(({"", ""}));
    SetShort("the Computer Bug");
    SetLong("A little, hairy computer bug is here, trying to mess things up.");
    SetRace("insect"); //check for appropriate race
    SetClass("npc_melee");
    SetLevel(1);
    SetGender("neuter");
    SetMorality(-125);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
    
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : bug [R-Number113], In room [5031] V-Number [6900]
Short description: the computer bug
Title: None
Long description: A little, hairy computer bug is here, trying to mess things
up.
Monster Class: Normal   Level [1] Alignment[-50]
Birth : [1313913650]secs, Logon[1313913650]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+1]  Hit p.:[2/2+1]  Move p.:[50/50+1]
AC:[0/10], Coins: [0], Exp: [200], Hitroll: [10], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d2.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [19] [19] [19] [19] [19]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
