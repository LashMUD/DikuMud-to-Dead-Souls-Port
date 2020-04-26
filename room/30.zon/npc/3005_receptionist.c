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

static void create() {
    sentient::create();

    SetKeyName("the Receptionist");
    SetId( ({"receptionist"}) );
    SetAdjectives(({"non-player", "non player"}));
    SetShort("the Receptionist");
    SetLong("A receptionist stands in front of you, looking at you like you were the\n"+
            "center of the universe. You notice a tired look in her face.");
    SetInventory( ([
         "/domains/diku-alfa/room/30.zon/weap/3021_smallsword" : "wield sword",
         ]) );
    SetRace("human");
    SetLevel(23);
    SetGender("female");
    SetCanBite(0);
    SetMorality(2250);
    SetMelee(1);
    AddCurrency("gold", 10);
    SetAutoStand(0);
    SetPosition(POSITION_SITTING);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
FEMALE MOB - Name : receptionist [R-Number6], In room [3001]
V-Number [3005]
Short description: the Receptionist
Title: None
Long description: A receptionist stands in front of you, looking at you like you
were the
center of the universe.

Monster Class: Normal   Level [23] Alignment[900]
Birth : [1313912421]secs, Logon[1313912421]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+23]  Hit p.:[30001/30001+23]  Move p.:[50/50+23]
AC:[20/10], Coins: [2000], Exp: [80000], Hitroll: [18], Damroll: [12]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SENTINEL ISNPC ,Timer [0] 

Mobile Special procedure : Exists
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/

