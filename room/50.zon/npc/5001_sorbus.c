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

    SetKeyName("sorbus");
    SetId(({"hermit", "sorbus"}));
    SetAdjectives(({"", ""}));
    SetShort("Sorbus the Hermit");
    SetLong("Sorbus the Hermit is sitting here, roasting a rabbit.");
    SetCanBite(0);
    SetInventory( ([" " : " "] ));
    SetRace("human"); 
    SetClass("fighter");
    SetLevel(4);
    SetMorality(0);
    AddCurrency("gold" , 1);
    SetGender("male");
    SetPosition(POSITION_SITTING);
    SetInventory( ([
        "/domains/diku-alfa/room/50.zon/meals/5003_blood_jar" :1,
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
MALE MOB - Name : hermit sorbus [R-Number88], In room [5031] V-Number [5001]
Short description: Sorbus the Hermit
Title: None
Long description: Sorbus the Hermit is sitting here, roasting a rabbit.
Monster Class: Normal   Level [4] Alignment[0]
Birth : [1313888743]secs, Logon[1313888743]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+4]  Hit p.:[58/58+4]  Move p.:[50/50+4]
AC:[60/10], Coins: [1], Exp: [400], Hitroll: [4], Damroll: [2]
Position: Sitting, Fighting: Nobody
Default position: Sitting, NPC flags: SENTINEL ISNPC, Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d9.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [16] [16] [16] [16] [16]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/


