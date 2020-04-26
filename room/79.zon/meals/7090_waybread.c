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
    SetKeyName("a waybread");
    SetId( ({"waybread"}) );
    SetShort("a waybread");
    SetLong("The waybread is the traditional feed of elves when travelling, they call it\n"+
            "lembas.  It is said to refresh the weary traveler greatly.");
    SetMass(1);
    SetBaseCost("gold", 50);
    SetStrength(24);
    SetMealType(MEAL_FOOD);
    SetMealMessages("You eat the waybread.",
      "$N eats a waybread.");
    SetNoCondition(1);
}
void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [waybread food], R-number: [186], V-number: [7090]
Item type: FOOD
Short description: a waybread
Long description:
Some waybread has been put here.
Extra description keyword(s):
----------
waybread
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 50, Cost/day: 50, Timer: 0
In room: 7439 ,In object: None ,Carried by:Nobody
Makes full : 24
Poisoned : 0
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/ 
