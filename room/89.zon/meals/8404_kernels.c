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
#include <vendor_types.h>

inherit LIB_MEAL;

static void create() {
    meal::create();

    SetKeyName("small yellow kernels");
    SetId( ({"yellow", "kernels", "corn"}) );
    SetShort("some small yellow kernels");
    SetLong("Some small yellow kernels - Look fairly dull...");
    SetMass(1);
    SetBaseCost("gold", 10);
    SetStrength(1);  //how strong
    SetMealType(MEAL_FOOD);  //defined in meal_types.h
    SetMealMessages("You eat the kernels.", "$P eats some yellow kernels.");
    SetNoCondition(1);  //set to not deteriorate
    SetVendorType(VT_FOOD); //see vendor_types.h
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [kernel kernels], R-number: [247], V-number: [8404]
Item type: FOOD
Short description: some small yellow kernels
Long description:
Some small yellow kernels have been accidentally left here.
Extra description keyword(s):
----------
kernel kernels
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 10, Cost/day: 10, Timer: 0
In room: 8915 ,In object: None ,Carried by:Nobody
Makes full : 1
Poisoned : 0
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
