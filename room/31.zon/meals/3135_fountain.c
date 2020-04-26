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

inherit LIB_FLASK;

void create(){
    ::create();

    SetKeyName("water fountain");
    SetId( ({"water", "fountain"}) );
    SetAdjectives( ({""}) );
    SetShort("a small white fountain");
    SetLong("It is very nice.  Made from fine white marble.");
    SetMass(5000);
    SetBaseCost("gold", 3000);
    SetFlaskContents("water");
    SetFlaskUses(50);
    SetStrength(10);
    SetMaxFlask(50);
    SetTapped(1); 
    SetMealType(MEAL_DRINK);
    SetNoCondition(1);  //set to not deteriorate
}

mixed CanGet(object ob) { return "You can't take that";}

void init(){
    ::init();
}

/* Extra information Original Diku Output
Object name: [water fountain], R-number: [86], V-number: [3135] Item type:
LIQUID CONTAINER
Short description: a fountain
Long description:
A small white fountain is standing at the end of the road.
Extra description keyword(s):
----------
fountain
----------
Can be worn on :NOBITS
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 500, Value: 3000, Cost/day: 1000, Timer: 0
In room: 3302 ,In object: None ,Carried by:Nobody
Max-contains : 50
Contains : 50
Poisoned : 0
Liquid: water

Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
