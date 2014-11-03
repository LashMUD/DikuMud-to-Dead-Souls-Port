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

    SetKeyName("black powder");
    SetId( ({"black", "powder", "pepper"}) );
    SetShort("some black powder");
    SetLong("     *        *         *\n"+
        "       *      *       *\n"+
        "****   AAAHHHH-TSHOU!   ****\n"+
        "       *      *       *\n"+
        "     *        *         *");
    SetMass(1);
    SetBaseCost("gold", 300);
    SetStrength(-2);  //how strong
    SetMealType(MEAL_FOOD);  //defined in meal_types.h
    SetMealMessages("You eat the powder.", "$P eats some black powder.");
    SetNoCondition(1);  //set to not deteriorate
    SetVendorType(VT_FOOD); //see vendor_types.h
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [powder black], R-number: [246], V-number: [8403]
Item type: FOOD
Short description: some black powder
Long description:
Some strong-smelling black powder has been carelessly scattered here.
Extra description keyword(s):
----------
powder
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 300, Cost/day: 10, Timer: 0
In room: Nowhere ,In object: None ,Carried by:Nobody
Makes full : -2
Poisoned : 0
Equipment Status: Inventory
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
