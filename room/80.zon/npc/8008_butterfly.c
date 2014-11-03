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
#include <position.h>

inherit LIB_SENTIENT;

static void create(){
    sentient::create();

    SetKeyName("butterfly");
    SetId(({"butterfly", "fly", "butter"}));
    SetAdjectives(({"", ""}));
    SetShort("the butterfly");
    SetLong("A beautiful, butterfly-like thing is fluttering around here.");
    SetRace("insect"); //possible new 'butterfly' race
    SetMelee(1);
    SetCanBite(1);
    SetGender("neuter");
    SetMorality(2500);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
    SetPosition(POSITION_FLYING);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : butterfly fly [R-Number147], In room [3001] V-Number [8008]
Short description: the butterfly
Title: None
Long description: A beautiful, butterfly-like thing is fluttering around here.
Monster Class: Normal   Level [1] Alignment[1000]
Birth : [1313968612]secs, Logon[1313968612]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+1]  Hit p.:[10/10+1]  Move p.:[50/50+1]
AC:[190/10], Coins: [0], Exp: [1], Hitroll: [0], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC NICE-THIEF STAY-ZONE, Timer [0] 
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
