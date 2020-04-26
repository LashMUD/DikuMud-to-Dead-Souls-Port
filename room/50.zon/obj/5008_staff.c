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
    SetKeyName("druish staff");
    SetId( ({ "staff" }) );
    SetAdjectives( ({ "", "" }) );
    SetShort("a staff with druidic marks have been left here");
    SetLong("Then staff is about 5 ft long, engraved with mythical signs and figures.\n"+
        "Otherwise the staff seems of no real interrest.");
    SetMass(40);
    SetBaseCost("gold",15);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output h
Object name: [staff stick], R-number: [146], V-number: [5008] Item type: OTHER
Short description: a druish staff
Long description:
A staff with druidic marks have been left here.
Extra description keyword(s):
----------
staff stick
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 4, Value: 15, Cost/day: 5, Timer: 0
In room: 5023 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0

*/
