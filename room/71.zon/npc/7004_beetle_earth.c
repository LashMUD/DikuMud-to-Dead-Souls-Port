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

    SetKeyName("sewer beetle");
    SetId(({"beetle"}));
    SetAdjectives(({"", ""}));
    SetShort("The Giant Earth Beetle");
    SetLong("The Giant Mean-looking Earth Beetle.");
    SetRace("insect");
    SetClass("npc_melee");
    SetLevel(12);
    SetGender("male");
    AddCurrency("gold" , 1000);
    SetMorality(-300);
    SetWander(5);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
MALE MOB - Name : beetle [R-Number120], In room [3001] V-Number [7004]
Short description: The giant earth beetle
Title: None
Long description: The Giant Mean-looking Earth Beetle
Monster Class: Normal   Level [8] Alignment[-300]
Birth : [1313917361]secs, Logon[1313917361]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+8]  Hit p.:[115/115+8]  Move p.:[50/50+8]
AC:[30/10], Coins: [1000], Exp: [5000], Hitroll: [7], Damroll: [1]
Position: Sleeping, Fighting: Nobody
Default position: Sleeping, NPC flags: ISNPC, Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 2d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [12] [12] [12] [12] [12]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/

