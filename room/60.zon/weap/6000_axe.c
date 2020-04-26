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
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ITEM;

void create(){
    item::create();

    SetKeyName("lumber axe");
    SetId( ({ "axe", "chopper", "lumber" }));
    SetShort("a lumber axe");
    SetLong("A heavy lumber axe lies here.");
    SetWeaponType("blade");
    SetDamageType(BLADE);
    SetClass(20);
    SetMass(100);
    SetBaseCost("gold", 50);
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
ToHit : 0
Damage : 2D4
Type : 3Object name: [axe lumber], R-number: [151], V-number: [6000]
Item type: WEAPON
Short description: a lumber axe
Long description:
A heavy lumber axe lies here.
Extra description keyword(s):
----------
axe lumber
----------
Can be worn on :TAKE WIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 10, Value: 50, Cost/day: 15, Timer: 0
In room: 3015 ,In object: None ,Carried by:Nobody
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
