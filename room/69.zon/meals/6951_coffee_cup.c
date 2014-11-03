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

inherit LIB_FLASK;

void create(){
    ::create();

    SetKeyName("coffee cup");
    SetId("coffee", "cup");
    SetAdjectives( ({ " "," "}));
    SetShort("a coffee cup");
    SetLong("A coffee cup has been left here.");
    SetMass(10);
    SetBaseCost("gold", 6);
    SetFlaskContents("coffee");
    SetMaxFlask(3);
    SetFlaskUses(3);
    SetStrength(8);
    SetMealType(MEAL_DRINK | MEAL_CAFFEINE); //set to DS liquid type
    SetNoCondition(1);
    SetVendorType(VT_DRINK);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [coffee cup], R-number: [184], V-number: [6951]
Item type: LIQUID CONTAINER
Short description: a coffee cup
Long description: A coffee cup has been left here.
Extra description keyword(s):
----------
coffee cup
----------
Can be worn on: TAKE 
Set char bits: NOBITS
Extra flags: NOBITS
Weight: 1, Value: 6, Cost/day: 3, Timer: 0
In room: Nowhere, In object: coffee, Carried by:Nobody
Max-contains : 3
Contains : 3
Poisoned : No
Liquid: coffee
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
