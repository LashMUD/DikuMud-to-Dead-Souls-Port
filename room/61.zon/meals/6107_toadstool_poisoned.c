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

inherit LIB_MEAL;

static void create() {
    meal::create();
    SetKeyName("toadstool");
    SetId( ({"mushroom", "toadstool", "fungus"}) );
    SetShort("a toadstool");
    SetLong("It is a large, brown boletus that must weigh nearly five pounds.  The top\n"+
        "surface is covered in a thin layer of transparent slime that emits a weak,\n"+
        "musty smell.  Not the most delicious thing you have seen.");
    SetMass(50);
    SetBaseCost("gold", 20);
    SetStrength(12);
    SetMealType(MEAL_FOOD | MEAL_POISON);
    SetMealMessages("You eat the toadstool.",
        "$N eats a toadstool.");
    SetNoCondition(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [toadstool], R-number: [169], V-number: [6107]
Item type: FOOD
Short description: a toadstool
Long description:
A large toadstool grows nearby.
Extra description keyword(s):
----------
toadstool
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 5, Value: 20, Cost/day: 20, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Makes full : 12
Poisoned : Yes
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0

*/
