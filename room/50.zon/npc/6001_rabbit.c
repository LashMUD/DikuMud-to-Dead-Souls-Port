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

    SetKeyName("ofcal rabbit");
    SetId(({"cute", "rabbit"}));
    SetAdjectives(({"", ""}));
    SetShort("the Cute Rabbit");
    SetLong("A cute rabbit is here.");
    SetRace("rodent");
    SetClass("npc_melee");
    SetLevel(1);
    SetMorality(0);
    SetGender("neuter");
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : rabbit [R-Number98], In room [5031] V-Number [6001]
Short description: the cute rabbit
Title: None
Long description: A cute rabbit is here.
Monster Class: Normal   Level [1] Alignment[0]
Birth : [1313887711]secs, Logon[1313887711]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+1]  Hit p.:[4/4+1]  Move p.:[50/50+1]
AC:[60/10], Coins: [0], Exp: [50], Hitroll: [0], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [19] [19] [19] [19] [19]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
