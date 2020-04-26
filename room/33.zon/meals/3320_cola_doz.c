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

    SetKeyName("coke");
    SetId( ({"coke", "soda", "can", "cola"}) );
    SetAdjectives( ({"soda", "cold", "cola"}) );
    SetShort("a can of Coke");
    SetLong("It is a small red and white can that has 'Keep MudLand tidy' written on its\n"+
        "side and the name Doz printed on its bottom..");
    SetMass(1);
    SetBaseCost("gold", 6);
    SetVendorType(VT_DRINK);
    SetFlaskContents("black liquid");
    SetFlaskUses(3);
    SetStrength(8);
    SetMaxFlask(3);
    SetNoCondition(1); 
    SetMealType(MEAL_DRINK | MEAL_CAFFEINE);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [can coke], R-number: [109], V-number: [3320] Item type: LIQUID
CONTAINER
Short description: a can of Coke
Long description:
A can of Coke been left here.
Extra description keyword(s):
----------
can coke
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 6, Cost/day: 3, Timer: 0
In room: 3303 ,In object: None ,Carried by:Nobody
Max-contains : 3
Contains : 3
Poisoned : 0
Liquid: coca cola

Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
