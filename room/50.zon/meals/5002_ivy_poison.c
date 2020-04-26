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
    SetKeyName("ivy");
    SetId( ({"ivy", "poison ivy", "plant"}) );
    SetShort("Some poison ivy is growing here");
    SetLong("This plant have dark green juicy leaves.\n"+
        "You notice some small white thornes on it.");
    SetMass(1);
    SetBaseCost("gold", 5);
    SetStrength(1);
    SetMealType(MEAL_FOOD | MEAL_POISON);
    SetMealMessages("You eat the plant.",
      "$N eats a plant.");
    SetNoCondition(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [plant ivy], R-number: [140], V-number: [5002] Item type: FOOD
Short description: a small dusk of poison ivy
Long description:
Some poison ivy is growing here.
Extra description keyword(s):
----------
plant ivy
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 5, Cost/day: 100, Timer: 0
In room: 5023 ,In object: None ,Carried by:Nobody
Makes full : 1
Poisoned : Yes
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/

