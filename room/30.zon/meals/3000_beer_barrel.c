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

    SetKeyName("beer barrel");
    SetId( ({"beer", "barrel"}) );
    SetAdjectives( ({"beer", "barrel", "wooden", "cask"}) );
    SetShort("a barrel of beer");
    SetLong("A beer barrel.");
    SetMass(650);
    SetBaseCost("gold",300);
    SetVendorType(VT_DRINK);
    SetFlaskContents("beer");
    SetFlaskUses(50);
    SetStrength(5);
    SetMaxFlask(50); 
    SetMealType(MEAL_ALCOHOL);
    SetNoCondition(1);  //set to not deteriorate
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [beer barrel], R-number: [1], V-number: [3000] Item type: LIQUID
CONTAINER
Short description: a barrel
Long description:
A beer barrel has been left here.
Extra description keyword(s): None
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 65, Value: 300, Cost/day: 100, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Max-contains : 50
Contains : 50
Poisoned : No
Liquid : beer
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
