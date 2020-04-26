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

    SetKeyName("guardian naga");
    SetId(({"guardian", "naga"}));
    SetAdjectives(({"", ""}));
    SetShort("The Guardian Naga");
    SetLong("The Guardian Naga looks kindly at you.");
    SetRace("snake"); //possible new race 'naga'
    SetClass("npc_melee");
    SetLevel(62);
    SetGender("female");
    AddCurrency("gold" , 100);
    SetMorality(1750);
    //need naga functions
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
FEMALE MOB - Name : guardian naga [R-Number132], In room [3001] V-Number [7042]
Short description: The guardian naga
Title: None
Long description: The Guardian Naga looks kindly at you.
Monster Class: Normal   Level [12] Alignment[700]
Birth : [1313933961]secs, Logon[1313933961]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+12]  Hit p.:[158/158+12]  Move p.:[50/50+12]
AC:[20/10], Coins: [100], Exp: [13500], Hitroll: [11], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing ,NPC flags: SENTINEL ISNPC, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d7.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [8] [8] [8] [8] [8]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
