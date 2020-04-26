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

    SetKeyName("dirty dish");
    SetId( ({ "dish", "pan", "metal" }) );
    SetAdjectives( ({ "", "" }) );
    SetShort("a dirty dish");
    SetLong("It is about 10 feet across, made from a thin sheet of metal, and the\n"+
        "remains of something that smells like chili has been allowed to get\n"+
        "_really_ attached to it.");
    SetMass(10);
    SetBaseCost("gold",0);
}    

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [dish dirty], R-number: [236], V-number: [8101]
Item type: TRASH
Short description: a dirty dish
Long description:
There is a dirty dish standing here.
Extra description keyword(s):
----------
dish dirty
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 0, Cost/day: 400, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
