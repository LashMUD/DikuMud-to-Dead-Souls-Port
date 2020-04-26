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
    SetId( ({"mushroom"}) );
    SetShort("a small mushroom");
    SetLong("Let's put it this way - I wouldn't eat it !");
    SetMass(1);
    SetBaseCost("gold", 9);
    SetStrength(5);
    SetMealType(MEAL_FOOD | MEAL_POISON);
    SetMealMessages("You eat a small mushroom.",
      "$N eats a small mushroom.");
    SetNoCondition(1);
}
void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [mushroom], R-number: [129], V-number: [4052] Item type: FOOD
Short description: a mushroom
Long description:
A small mushroom is here.
Extra description keyword(s):
----------
mushroom
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 9, Cost/day: 3, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Makes full : 2
Poisoned : 1
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
