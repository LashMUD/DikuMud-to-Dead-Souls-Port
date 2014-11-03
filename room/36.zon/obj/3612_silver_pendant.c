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

inherit LIB_ITEM;

void create(){
    ::create();
    SetKeyName("pendant");
    SetId( ({"pendant","item","silver"}) );
    SetAdjectives( ({"shint","silver","jewellry"}) );
    SetShort("a silver pendant");
    SetLong("It resembles Thor's hammer and appears to be made of solid silver.");
    SetMass(1);
    SetBaseCost("gold",400);
    SetVendorType(VT_TREASURE);
}

void init(){
    ::init();
}

/*Extra Information Original Diku Output
Object name: [pendant silver], R-number: [122], V-number: [3612] Item type:
TREASURE
Short description: a silver pendant
Long description:
A silver pendant has been left here.
Extra description keyword(s):
----------
pendant silver
----------
Can be worn on :TAKE NECK HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 400, Cost/day: 80, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
