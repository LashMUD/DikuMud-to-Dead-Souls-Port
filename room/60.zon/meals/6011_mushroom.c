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

inherit LIB_MEAL;

static void create() {
    meal::create();
    
    SetKeyName("mushroom");
    SetId( ({"mushroom", "shroom", "fungus"}) );
    SetShort("a mushroom");
    SetLong("It is a tasty little thing.");
    SetMass(1);
    SetBaseCost("gold", 10);
    SetStrength(10);
    SetMealType(MEAL_FOOD);
    SetMealMessages("You eat the mushroom.",
      "$N eats a mushroom.");
    SetNoCondition(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [mushroom], R-number: [160], V-number: [6011] Item type: FOOD
Short description: a mushroom
Long description:
A small mushroom grows nearby.
Extra description keyword(s):
----------
mushroom
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 10, Cost/day: 10, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Makes full : 6
Poisoned : 0
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0

*/

