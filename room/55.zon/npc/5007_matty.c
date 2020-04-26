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

    SetKeyName("matty");
    SetId(({"daughter", "Matty", "receptionist"}));
    SetAdjectives(({"", ""}));
    SetShort("Matty");
    SetLong("Matty the daughter of Luxan is here, looking after the stored items.\n"+
        "Matty is eager to serve you.");
    SetCanBite(0); 
    SetRace("human");
    SetClass("fighter");
    SetLevel(22);
    SetMorality(2000);
    AddCurrency("gold" , 0);
    SetGender("female");    
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
FEMALE MOB - Name : daughter matty [R-Number94], In room [5555] V-Number [5007]
Short description: Matty
Title: None
Long description: Matty the daughter of Luxan is here, looking after the stored
items.
Matty is eager to serve you.
Monster Class: Normal   Level [22] Alignment[800]
Birth : [1313889686]secs, Logon[1313889686]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+22]  Hit p.:[29000/29000+22]  Move p.:[50/50+22]
AC:[0/10], Coins: [0], Exp: [80000], Hitroll: [20], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC SENTINEL ISNPC, Timer [0] 
Mobile Special procedure : Exists
NPC Bare Hand Damage 2d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/

