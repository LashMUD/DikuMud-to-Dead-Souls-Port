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

    SetKeyName("rabbit roast");
    SetId( ({"roast", "rabbit", "wabbit"}) );
    SetShort("a rabbit roast");
    SetLong("Well the rabbit looks rather dead.\n"+
            "You guess that this once was a ferocious rabbit who's life now has\n"+
            "changed to that of a tasty wabbit woast.");
    SetMass(5);
    SetBaseCost("gold", 40);
    SetStrength(24);
    SetMealType(MEAL_FOOD);
    SetMealMessages("You eat the rabbit.",
      "$N eats a rabbit.");
    SetNoCondition(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [rabbit roast wabbit], R-number: [147], V-number: [5009] Item type:
FOOD
Short description: a rabbit roast
Long description:
You see a deliciously looking rabbit roast.
Extra description keyword(s):
----------
roast rabbit wabbit
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 5, Value: 40, Cost/day: 10, Timer: 0
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
