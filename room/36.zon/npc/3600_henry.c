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
    SetKeyName("henry");
    SetId( ({"henry"}) );
    SetAdjectives(({"non-player", "non player", "gardener"}));
    SetShort("Henry the Gardener");
    SetLong("He is a tall but bulky man in his late fifties.  His features are worn with\n"+
      "decades of hard work and his somewhat crouched expression is one of deep\n"+
      "sorrow and depression.  He is haunted by a memory of a lost paradise. He looks\n"+
      "like he's been drinking heavily");
    SetRace("human");
    SetClass("fighter");
    SetLevel(4);
    SetPosition(POSITION_SITTING);    
    SetAutoStand(0);
    SetCanBite(0);
    SetInventory(([
        "/domains/diku-alfa/room/36.zon/meals/3601_brandy_full" : 1,
        "/domains/diku-alfa/room/36.zon/meals/3602_brandy_empty" : 1,
        ]));
    SetGender("male");
    AddCurrency("gold", 50);
    SetMorality(875);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
MALE MOB - Name : henry gardener [R-Number52], In room [3001]
V-Number [3600]
Short description: Henry the Gardener
Title: None
Long description: Henry the Gardener is sitting here, looking drunk.

Monster Class: Normal   Level [4] Alignment[350]
Birth : [1316448110]secs, Logon[1316448110]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+4]  Hit p.:[55/55+4]  Move p.:[50/50+4]
AC:[80/10], Coins: [50], Exp: [800], Hitroll: [5], Damroll: [1]
Position: Sitting, Fighting: Nobody
Default position: Sitting,NPC flags: ISNPC STAY-ZONE ,Timer [0] 

Mobile Special procedure : None
NPC Bare Hand Damage 1d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [16] [16] [16] [16] [16]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
