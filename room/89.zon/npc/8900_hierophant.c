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

    SetKeyName("the Hierophant");
    SetId(({"hierophant"}));
    SetAdjectives(({"", ""}));
    SetShort("The Hierophant");
    SetLong("The old Hierophant of the holy grove is here, gathering hollies.");
    SetRace("human");
    SetClass("fighter");
    SetLevel(30);
    SetCanBite(0); 
    SetWimpy(30);
    SetGender("male");
    AddCurrency("gold" , 50);
    SetMorality(2500);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
MALE MOB - Name : hierophant [R-Number149], In room [5031] V-Number [8900]
Short description: The Hierophant
Title: None
Long description: The old Hierophant of the holy grove is here, gathering
hollies.
Monster Class: Normal   Level [20] Alignment[1000]
Birth : [1313914186]secs, Logon[1313914186]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+20]  Hit p.:[371/371+20]  Move p.:[50/50+20]
AC:[50/10], Coins: [50], Exp: [40000], Hitroll: [20], Damroll: [3]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC STAY-ZONE WIMPY, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE SANCTUARY 
*/
