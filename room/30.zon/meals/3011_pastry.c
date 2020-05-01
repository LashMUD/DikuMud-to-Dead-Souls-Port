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

    SetKeyName("pastry");
    SetId( ({"pastry", "danish"}) );
    SetShort("a danish pastry");
    SetLong("A nice looking delicious danish pastry.");
    SetMass(1);
    SetBaseCost("gold", 5);
    SetStrength(10);
    SetMealType(MEAL_FOOD);
    SetMealMessages("You eat a danish pastry.",
      "$N eats a danish pastry.");
    SetNoCondition(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [danish pastry], R-number: [7], V-number: [3011] Item type: FOOD
Short description: a danish pastry
Long description:
A nice looking delicious danish pastry has been placed here.
Extra description keyword(s): None
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 5, Cost/day: 5, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Makes full : 5
Poisoned : 0
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
