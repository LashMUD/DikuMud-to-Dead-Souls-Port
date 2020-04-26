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

    SetKeyName("water barrel");
    SetId("barrel", "water", "water barrel");
    SetAdjectives( ({ " "," "}));
    SetShort("a water barrel");
    SetLong("A water barrel has been left here.");
    SetMass(650);
    SetBaseCost("gold", 60);
    SetFlaskContents("water");
    SetMaxFlask(50);
    SetFlaskUses(50);
    SetStrength(10);
    SetTapped(1); //if a cask or a keg from which drinks are poured
    SetMealType(MEAL_DRINK); //set to DS liquid type
    SetVendorType(VT_DRINK);
    SetNoCondition(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [water barrel], R-number: [162], V-number: [6013] Item type: LIQUID CONTAINER
Short description: the barrel
Long description: A water barrel has been left here.
Extra description keyword(s): None
Can be worn on: TAKE 
Set char bits: NOBITS
Extra flags: NOBITS
Weight: 65, Value: 60, Cost/day: 20, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
Max-contains : 50
Contains : 50
Poisoned : No
Liquid: water
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
