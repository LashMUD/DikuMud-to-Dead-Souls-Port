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

inherit LIB_STORAGE;

void create(){
    ::create();

    SetKeyName("corpse");
    SetId( ({"goblin corpse","item"}) );
    SetAdjectives( ({"stinky", "rotten"}) );
    SetShort("a corpse");
    SetLong("A halfways decayed corpse of a goblin.");
    SetMass(10);
    SetMaxCarry(500);
    AddMoney("gold", 500);
    SetPreventPut("You cannot put this in there!");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [corpse], R-number: [125], V-number: [4001] Item type: CONTAINER
Short description: a corpse
Long description:
A halfways decayed corpse of a goblin.
Extra description keyword(s): None
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 10, Value: 0, Cost/day: 500, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Max-contains : 1
Locktype : 0
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
