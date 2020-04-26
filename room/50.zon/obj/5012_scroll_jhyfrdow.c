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
#include <armor_types.h>

inherit LIB_ITEM;

static void create() {
    item::create();

    SetKeyName("scroll");
    SetId( ({ "scroll", "jhyfrdow" }) );
    SetAdjectives( ({ "", "" }) );
    SetShort("a scroll titled 'jhyfrdow'");
    SetLong("The scroll is titled 'jhyfrdow' and looks very old.\n"+
        "As you examine it closer you notice primitive drawings of\n"+
        "men doing some kind of a ritual.");
    SetMass(10);
    SetBaseCost("gold",500);
    SetItems( ([
        ({"ritual", "drawings", "drawing", "men"}) : "The drawing pictures people gathered round giant stone formations,\n"+
            "worshipping a giant worm like creature.\n"+
            "It seems they are sacrificing some of their own species."
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output h
Object name: [scroll jhyfrdow], R-number: [150], V-number: [5012] Item type:
SCROLL
Short description: a scroll titled 'jhyfrdow'
Long description:
An odd looking scroll is here.
Extra description keyword(s):
----------
ritual men drawings
scroll jhyfrdow
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 500, Cost/day: 200, Timer: 0
In room: Nowhere ,In object: None ,Carried by:Nobody
Spells : 0, 0, 0, 0
Equipment Status: Inventory
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
