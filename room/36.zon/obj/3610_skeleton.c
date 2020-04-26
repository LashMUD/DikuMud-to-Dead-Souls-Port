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

    SetKeyName("skeleton");
    SetId( ({"skeleton","item"}) );
    SetAdjectives( ({"dusty","bony","rotten"}) );
    SetShort("a dusty skeleton");
    SetLong("The dusty bones are almost brown. It must have been buried for very long\n"+
        "time.");
    SetMass(150);
    SetVendorType(VT_TREASURE);
}

void init(){
    ::init();
}

/*Extra Information Original Diku Output
Object name: [skeleton], R-number: [120], V-number: [3610] Item type: UNDEFINED
Short description: a dusty skeleton
Long description:
A dusty skeleton lies here.
Extra description keyword(s):
----------
skeleton
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 15, Value: 0, Cost/day: 0, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
