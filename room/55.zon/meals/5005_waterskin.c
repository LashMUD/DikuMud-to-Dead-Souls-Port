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

    SetKeyName("waterskin");
    SetId( ({"water", "skin", "waterskin"}) );
    SetAdjectives( ({"", ""}) );
    SetShort("a waterskin");
    SetLong("A waterskin.");
    SetMass(23);
    SetBaseCost("gold",60);
    SetVendorType(VT_DRINK);
    SetFlaskContents("water");
    SetFlaskUses(20);
    SetStrength(10);
    SetMaxFlask(20);
    SetNoCondition(1); 
    SetMealType(MEAL_DRINK);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [water skin waterskin], R-number: [143], V-number: [5005] Item
type: LIQUID CONTAINER
Short description: a waterskin
Long description:
A waterskin is lying on the ground here.
Extra description keyword(s):
----------
water skin waterskin
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 23, Value: 60, Cost/day: 25, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Max-contains : 20
Contains : 20
Poisoned : No
Liquid : water
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
