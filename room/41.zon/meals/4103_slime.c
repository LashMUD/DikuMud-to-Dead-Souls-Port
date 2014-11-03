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

    SetKeyName("slime");
    SetId( ({"slime", "green", "mold"}) );
    SetShort("A green slime mold that stinks like sh**.");
    SetLong("It wasn't meant to be food, - Certainly not for humans.");
    SetMass(1);
    SetBaseCost("gold", 10);
    SetStrength(24);
    SetMealType(MEAL_FOOD);
    SetMealMessages("You eat the slime.",
      "$N eats a green slime mold.");
    SetNoCondition(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [slime mold], R-number: [133], V-number: [4103] Item type: FOOD
Short description: a green slime mold
Long description:
A green slime mold is here. Stinks like sh**.
Extra description keyword(s):
----------
smile mold
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 20, Cost/day: 8, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Makes full : 24
Poisoned : No
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/

