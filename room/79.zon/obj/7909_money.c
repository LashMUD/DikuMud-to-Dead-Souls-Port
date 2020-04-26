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

inherit LIB_ITEM;

static void create() {
    item::create();

    SetKeyName("a huge treasure");
    SetId( ({ "treasure", "money", "coins" }) );
    SetAdjectives( ({ "shiny", "metal", "gold" }) );
    SetShort("a huge treasure");
    SetLong("Looks like a LOT of coins. A big one of them has writing on it.");
    SetMass(0);
    SetBaseCost("gold",-100);
    SetRead( ([
        ({"coin", "writing", "letters"}) : "It reads : 'Hi Conan, no more coins from here, Pal. :)\n"+
          "                         Signed  Redferne.  "
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [treasure coins], R-number: [230], V-number: [7909]
Item type: MONEY
Short description: a huge treasure
Long description:
a huge treasure is lying here, looking very valuable.
Extra description keyword(s):
----------
writing letters
treasure
----------
Can be worn on :TAKE
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 0, Value: 0, Cost/day: 0, Timer: 0
In room: Nowhere ,In object: None ,Carried by:Nobody
Values 0-3 : [-100] [0] [0] [0]
Equipment Status: Inventory
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
