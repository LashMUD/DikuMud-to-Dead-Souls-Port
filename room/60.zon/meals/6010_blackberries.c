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

    SetKeyName("blackberries");
    SetId( ({"blackberries", "berries", "black"}) );
    SetShort("some blackberries");
    SetLong("They look very tasty indeed.");
    SetMass(1);
    SetBaseCost("gold", 10);
    SetStrength(5);
    SetMealType(MEAL_FOOD);
    SetMealMessages("You eat the blackberries.",
      "$N eats some blackberries.");
    SetNoCondition(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [blackberries], R-number: [159], V-number: [6010] Item type: FOOD
Short description: some blackberries
Long description:
Some blackberries grow on a bush nearby.
Extra description keyword(s):
----------
blackberries
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 10, Cost/day: 10, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Makes full : 3
Poisoned : 0
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/

