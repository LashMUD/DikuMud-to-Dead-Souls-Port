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
    SetId( ({"canoe"}) );
    SetAdjectives( ({"generic","sample","template"}) );
    SetShort("a canoe");
    SetLong("The canoe is fairly light.");
    SetMass(320);
    SetBaseCost("gold",1000);
    SetVendorType(VT_BOAT);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [canoe], R-number: [27], V-number: [3051] Item type: BOAT
Short description: a canoe
Long description:
A canoe has been left here.
Extra description keyword(s):
----------
canoe
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 32, Value: 1000, Cost/day: 10000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
