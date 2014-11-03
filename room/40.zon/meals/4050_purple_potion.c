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

inherit LIB_POTION;

static void create() {
    potion::create();
    SetKeyName("potion");
    SetId( ({ "potion","philtrum","purple" }) );
    SetShort("a purple potion");
    SetLong("It looks rather strange!");
    SetMass(1);
    SetMealType(MEAL_DRINK | MEAL_POISON);
    SetStrength(5);
    SetMealMessages("You drink a potion.",
            "$N drinks a potion.");
    SetBaseCost("gold",500);
    SetDuration(30);
    SetNoCondition(1);
    SetPreventDrop("You can't drop it. It must be CURSED!");
    //potion has curse (can't drop), is poisoned and confers SANCTUARY and CURE BLINDNESS - need to add the last two

}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [potion purple], R-number: [127], V-number: [4050] Item type: POTION
Short description: a purple potion
Long description:
A purple potion is here.
Extra description keyword(s):
----------
potion purple
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 500, Cost/day: 200, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Spells : 17, 14, 36, 33
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
