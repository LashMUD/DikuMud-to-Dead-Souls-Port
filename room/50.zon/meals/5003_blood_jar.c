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
#include <vendor_types.h>
#include <meal_types.h>

inherit LIB_FLASK;

void create(){
    ::create();

    SetKeyName("a dark red jar");
    SetId( ({"jar", "red", "clay", "red jar"}) );
    SetAdjectives( ({"bloody", "clay", "dry"}) );
    SetShort("a dark red jar");
    SetLong("The jar is made of dry clay, covered with markings\n"+
        "suggesting its occult origin.");
    SetMass(20);
    SetBaseCost("gold", 50);
    SetVendorType(VT_DRINK);
    SetFlaskContents("blood");
    SetFlaskUses(2);
    SetStrength(1);
    SetMaxFlask(2);
    SetNoCondition(1); 
    SetMealType(MEAL_DRINK);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [blood jar], R-number: [141], V-number: [5003] Item type: LIQUID
CONTAINER
Short description: a dark red jar
Long description:
A small jar in a dark, red colour.
Extra description keyword(s):
----------
blood jar
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 2, Value: 50, Cost/day: 10, Timer: 0
In room: 5031 ,In object: None ,Carried by:Nobody
Max-contains : 2
Contains : 2
Poisoned : No
Liquid: blood
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
