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

    SetKeyName("fox");
    SetId(({"fox", "brown"}));
    SetAdjectives(({"", ""}));
    SetShort("the Brown Fox");
    SetLong("A brown fox is here, looking for some rabbits to chew up.");
    SetRace("dog"); 
    SetClass("npc_melee");
    SetLevel(5);
    SetMorality(125);
    SetGender("neuter");
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : fox [R-Number102], In room [3001] V-Number [6005]
Short description: the brown fox
Title: None
Long description: A brown fox is here, looking for some rabbits to chew up.
Monster Class: Normal   Level [2] Alignment[-50]
Birth : [1313903191]secs, Logon[1313903191]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+2]  Hit p.:[21/21+2]  Move p.:[50/50+2]
AC:[60/10], Coins: [0], Exp: [200], Hitroll: [2], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [18] [18] [18] [18] [18]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/

