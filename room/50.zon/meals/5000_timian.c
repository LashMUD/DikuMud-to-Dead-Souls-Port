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

    SetKeyName("timian");
    SetId( ({"timian", "herbs", "herb"}) );
    SetShort("Some herbs with small green leaves and tiny pink\n"+
        "flowers");
    SetLong("This herb smells rather spicy, maybe you should try it ?");
    SetMass(1);
    SetBaseCost("gold", 5);
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
Object name: [herbs herb timian], R-number: [138], V-number: [5000] Item type:
FOOD
Short description: a small dusk of timian herbs
Long description:
Some herbs is lying here, small green leaves and tiny pink flowers.
Extra description keyword(s):
----------
herbs herb timian
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 5, Cost/day: 1, Timer: 0
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

