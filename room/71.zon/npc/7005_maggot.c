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
    
    SetKeyName("sewer maggot");
    SetId(({"maggot"}));
    SetAdjectives(({"", ""}));
    SetShort("the Maggot");
    SetLong("The Giant Maggot.");
    SetRace("insect");
    SetClass("npc_melee");
    SetLevel(9);
    SetGender("male");
    AddCurrency("gold" , 2);
    SetMorality(750);
    SetWander(5);}


void init(){
    ::init();
}

/* Extra Information Original Diku Output 
MALE MOB - Name : maggot [R-Number121], In room [3001] V-Number [7005]
Short description: The maggot
Title: None
Long description: The Giant Maggot
Monster Class: Normal   Level [3] Alignment[300]
Birth : [1313917504]secs, Logon[1313917504]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+3]  Hit p.:[41/41+3]  Move p.:[50/50+3]
AC:[90/10], Coins: [2], Exp: [350], Hitroll: [3], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d7.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [17] [17] [17] [17] [17]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
