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

    SetKeyName("coffee");
    SetId( ({"coffee", "cup"}) );
    SetAdjectives( ({"coffee", "hot", "java", "joe"}) );
    SetShort("a cup of coffee");
    SetLong("It is a small simple cup.");
    SetMass(30);
    SetBaseCost("gold",7);
    SetVendorType(VT_DRINK);
    SetFlaskContents("coffee");
    SetFlaskUses(2);
    SetStrength(8);//had to make it a little different than "tea"
    SetMaxFlask(2);
    SetNoCondition(1); 
    SetMealType(MEAL_DRINK | MEAL_CAFFEINE);
    
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [coffee cup], R-number: [73], V-number: [3101] Item type: LIQUID CONTAINER
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
Weight: 3, Value: 7, Cost/day: 1, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Max-contains : 2
Contains : 2
Poisoned : No
Liquid : coffee
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
