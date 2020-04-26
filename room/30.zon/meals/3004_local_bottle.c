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

    SetKeyName("localbottle");
    SetId( ({"local bottle", "bottle"}) );
    SetAdjectives( ({"dark", "bottle", "local"}) );
    SetShort("a bottle of local brew");
    SetLong("A dark bottle.");
    SetMass(100);
    SetBaseCost("gold",20);
    SetVendorType(VT_DRINK);
    SetFlaskContents("local speciality");
    SetFlaskUses(8);
    SetStrength(6);
    SetMaxFlask(8); 
    SetNoCondition(1);
    SetMealType(MEAL_ALCOHOL);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [local bottle], R-number: [5], V-number: [3004] Item type: LIQUID
CONTAINER
Short description: a bottle
Long description:
A dark bottle has been left here.
Extra description keyword(s): None
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 10, Value: 20, Cost/day: 7, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Max-contains : 8
Contains : 8
Poisoned : No
Liquid : local speciality
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
