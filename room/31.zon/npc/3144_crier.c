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

static void create() {
    sentient::create();

    SetKeyName("town_crier");
    SetId( ({"crier", "town crier", "town"}) );
    SetAdjectives(({""}));
    SetShort("the Town Crier");
    SetLong("He is very good at his job - completely dissolved in tears.");
    SetRace("human");
    SetClass("fighter");
    SetLevel(3);
    SetGender("male");
    SetCanBite(0);
    AddCurrency("gold", 34);
    SetMorality(2250);
    SetWimpy(30);
    SetWander(5);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
MALE MOB - Name : crier [R-Number50], In room [3001] V-Number [3144]
Short description: the Town Crier
Title: None
Long description: The Town Crier is here, weeping quietly.
Monster Class: Normal   Level [1] Alignment[900]
Birth : [1316445362]secs, Logon[1316445362]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+1]  Hit p.:[20/20+1]  Move p.:[50/50+1]
AC:[90/10], Coins: [34], Exp: [100], Hitroll: [0], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC WIMPY, Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [19] [19] [19] [19] [19]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
