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

inherit LIB_TORCH;

void create(){
    ::create();

    SetKeyName("lantern");
    SetId( ({"lantern"}) );
    SetAdjectives( ({"generic","sample","template"}) );
    SetShort("a hooded brass lantern");
    SetLong("It is a large and robust but somewhat battered oil lantern made from brass,\n"+
        "and it is equipped with a handle to make it handy and a hood to protect its\n"+
        "flame. Some letters have been scratched on its bottom.");
    SetMass(40);
    SetBaseCost("gold",60);
    SetRadiantLight(30);
    SetFuelRequired(1);
    SetMaxFuel(1500);
    SetFuelAmount(1500);
    SetRefuelable(0);
    SetVendorType(VT_LIGHT);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [lantern], R-number: [155], V-number: [6004] Item type: LIGHT
Short description: a hooded brass lantern
Long description:
A hooded brass lantern has been left here.
Extra description keyword(s):
----------
letters
lantern
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 4, Value: 60, Cost/day: 20, Timer: 0
In room: 6010 ,In object: None ,Carried by:Nobody
Colour : [0]
Type : [0]
Hours : [100]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
