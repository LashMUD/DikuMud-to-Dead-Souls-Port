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

    SetKeyName("firebreather");
    SetId( ({"firebreather"}) );
    SetAdjectives( ({"dark", "firebreather"}) );
    SetShort("a firebreather");
    SetLong("A Firebreather.");
    SetMass(100);
    SetBaseCost("gold",50);
    SetVendorType(VT_DRINK);
    SetFlaskContents("firebreather");
    SetFlaskUses(8);
    SetStrength(10);
    SetMaxFlask(8);
    SetNoCondition(1); 
    SetMealType(MEAL_ALCOHOL);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [firebreather bottle], R-number: [4], V-number: [3003] Item type:
LIQUID CONTAINER
Short description: a firebreather
Long description:
A firebreather has been left here.
Extra description keyword(s): None
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 10, Value: 50, Cost/day: 17, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Max-contains : 8
Contains : 8
Poisoned : No
Liquid : firebreather
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
