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

    SetKeyName("brandy");
    SetId( ({"brandy", "bottle"}) );
    SetAdjectives( ({"brandy", "liquor", "alcohol"}) );
    SetShort("a brandy bottle");
    SetLong("The bottle is a special 'Dragon Blood' brandy bottle.  Its neck is shaped\n"+
        "like a small dragon's head.  Bottles like these are often worth a small\n"+
        "amount money, even when empty.");
    SetMass(2);
    SetBaseCost("gold",50);
    SetVendorType(VT_DRINK);
    SetFlaskContents("brandy");
    SetFlaskUses(10);
    SetStrength(10);
    SetMaxFlask(10); 
    SetNoCondition(1);
    SetMealType(MEAL_DRINK | MEAL_ALCOHOL);
}

void init(){
    ::init();
}

/*Extra Information Original Diku Output
Object name: [brandy bottle], R-number: [115], V-number: [3601] Item type: LIQUID
CONTAINER
Short description: a brandy bottle
Long description:
A brandy bottle is lying here.
Extra description keyword(s):
----------
brandy bottle
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 2, Value: 50, Cost/day: 10, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Max-contains : 10
Contains : 10
Poisoned : No
Liquid : whisky
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/


