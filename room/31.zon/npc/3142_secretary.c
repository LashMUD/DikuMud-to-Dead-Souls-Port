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

    SetKeyName("secretary");
    SetId( ({"secretary", "honey"}) );
    SetAdjectives(({""}));
    SetShort("a Secretary");
    SetLong("She looks very busy, sitting at the desk and typing away on the keyboard.\n\n"+
        "The Secretary says 'Sorry, but the Mayor is extremely busy today.'\n"+
        "The Secretary says 'Please sit down and have a seat in the meantime.'\n");
    SetRace("human");
    SetClass("fighter");
    SetLevel(12);
    SetPosition(POSITION_SITTING);
    SetAutoStand(0);
    SetCanBite(0);
    AddCurrency("gold", 100);
    SetGender("female");
    SetMorality(2250);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
FEMALE MOB - Name : secretary [R-Number48], In room [3001]
V-Number [3142]
Short description: the Secretary
Title: None
Long description: A secretary is sitting at the desk, typing away on the
typewriter.
Monster Class: Normal   Level [12] Alignment[900]
Birth : [1316445072]secs, Logon[1316445072]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+12]  Hit p.:[150/150+12]  Move p.:[50/50+12]
AC:[20/10], Coins: [100], Exp: [13000], Hitroll: [11], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SENTINEL ISNPC ,Timer [0] 
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
