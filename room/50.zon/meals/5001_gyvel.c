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
    SetKeyName("gyvel");
    SetId( ({"gyvel", "herbs", "herb"}) );
    SetShort("Some black gyvel is lying here, darkgreen with black leaves and tiny\n"+
        "blood red flowers");
    SetLong("This herb smells rather special, but is it poisonous ?");
    SetMass(1);
    SetBaseCost("gold", 50);
    SetStrength(1);
    SetMealType(MEAL_FOOD);
    SetMealMessages("You eat the herbs.",
      "$N eats some herbs.");
    SetNoCondition(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [herbs herb gyvel], R-number: [139], V-number: [5001] Item type:
FOOD
Short description: a small dusk of black gyvel
Long description:
Some black gyvel is lying here, darkgreen with black leaves and tiny
blood red flowers.
Extra description keyword(s):
----------
herbs herb gyvel
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 50, Cost/day: 25, Timer: 0
In room: Nowhere ,In object: None ,Carried by:Nobody
Makes full : 1
Poisoned : No
Equipment Status: Inventory
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/

