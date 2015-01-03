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
#include <meal_types.h>
#include <vendor_types.h>

inherit LIB_MEAL;

static void create() {
    meal::create();

    SetKeyName("bread");
    SetId( ({"bread"}) );
    SetShort("a loaf of bread");
    SetLong("A freshly baked wholesome loaf.");
    SetMass(1);
    SetBaseCost("gold", 10);
    SetStrength(20);
    SetMealType(MEAL_FOOD);
    SetMealMessages("You eat a bread.",
      "$N eats a bread.");
    SetNoCondition(1);
    SetVendorType(VT_FOOD);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [bread], R-number: [6], V-number: [3010] Item type: FOOD
Short description: a bread
Long description:
A loaf of bread has been left here.
Extra description keyword(s): None
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 10, Cost/day: 10, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Makes full : 12
Poisoned : 0
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
