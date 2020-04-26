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
    SetId( ({ "long, grey branch resting heavily on the ground", "branch" }) );
    SetAdjectives( ({ "dull", "iron" }) );
    SetShort("long, grey branch resting heavily on the ground");
    SetLong("It is very heavy and looks as if it has been dropped from great height.  It is\n"+
        "somewhat twisted and the hard wood is still full of sap.");
    SetMass(400);
    SetBaseCost("gold",0);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [branch], R-number: [167], V-number: [6105]
Item type: UNDEFINED
Short description: a long, grey branch
Long description:
A long, grey branch rests heavily on the ground.
Extra description keyword(s):
----------
branch
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 40, Value: 0, Cost/day: 0, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
