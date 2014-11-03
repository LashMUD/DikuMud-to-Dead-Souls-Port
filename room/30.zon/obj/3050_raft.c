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
#include "/domains/diku-alfa/etc/vendor_types.h"

inherit LIB_ITEM;

void create(){
    ::create();

    SetKeyName("boat");
    SetId( ({"raft"}) );
    SetAdjectives( ({"generic","sample","template"}) );
    SetShort("a raft");
    SetLong("The raft looks very primitive.");
    SetMass(750);
    SetBaseCost("gold",400);
    SetVendorType(VT_BOAT);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [raft], R-number: [26], V-number: [3050] Item type: BOAT
Short description: a raft
Long description:
A raft has been left here.
Extra description keyword(s):
----------
raft
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 75, Value: 400, Cost/day: 20000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
