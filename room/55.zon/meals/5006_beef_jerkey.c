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
    SetKeyName("beef jerkey");
    SetId( ({"beef", "jerkey"}) );
    SetShort("a beef jerkey");
    SetLong("A slice of beef jerkey has been left here.");
    SetMass(30);
    SetBaseCost("gold", 20);
    SetStrength(18);
    SetMealType(MEAL_FOOD);
    SetMealMessages("You eat the jerky.",
      "$N eats a beef jerkey.");
    SetNoCondition(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [jerkey beef], R-number: [144], V-number: [5006] Item type: FOOD
Short description: a beef jerkey
Long description:
A slice of beef jerkey has been left here.
Extra description keyword(s): None
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 3, Value: 20, Cost/day: 5, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Makes full : 18
Poisoned : No
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
