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

inherit LIB_CHAIR;

static void create() {
    chair::create();

    SetKeyName("bench");
    SetId("chair");
    SetAdjectives( ({ "generic","nondescript" }) );
    SetShort("A white-painted wooden bench");
    SetLong("It is a quite heavy but very comfortable bench. It is placed with its front\n"+
            "towards the river so you can sit and watch the river and the houses on the\n"+
            "other side.");
    SetMass(1000);
    SetBaseCost("gold", );
    SetMaxSitters(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [bench], R-number: [85], V-number: [3134] Item type: OTHER
Short description: the Bench
Long description:
A white-painted wooden bench is standing here.
Extra description keyword(s):
----------
bench
----------
Can be worn on :NOBITS
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 100, Value: 600, Cost/day: 200, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
