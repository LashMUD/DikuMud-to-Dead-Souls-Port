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
#include <vendor_types.h>
#include <meal_types.h>

inherit LIB_FLASK;

void create(){
    ::create();

    SetKeyName("water cup");
    SetId( ({"water", "cup"}) );
    SetAdjectives( ({"water", "cool", "thirst quenching"}) );
    SetShort("a large cup of water");
    SetLong("It is a large simple cup.");
    SetMass(30);
    SetBaseCost("gold",2);
    SetVendorType(VT_DRINK);
    SetFlaskContents("water");
    SetFlaskUses(5);// to distinguish a large cup from a small cup
    SetStrength(10);
    SetMaxFlask(5);
    SetNoCondition(1); 
    SetMealType(MEAL_DRINK);    
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [water cup], R-number: [74], V-number: [3102] Item type: LIQUID
CONTAINER
Short description: a cup
Long description:
A cup has been set here.
Extra description keyword(s):
----------
cup
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 3, Value: 2, Cost/day: 1, Timer: 0
In room: 5031 ,In object: None ,Carried by:Nobody
Max-contains : 2
Contains : 2
Poisoned : 0
Liquid: water
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
