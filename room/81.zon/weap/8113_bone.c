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

    SetKeyName("bone");
    SetId("bone", "glass bone");
    SetAdjectives( ({ " "," "}));
    SetShort("a glass like bone");
    SetLong("It looks like an ordinary thighbone, except that it is carved from\n"+
        "glass by somebody very good. It is quite heavy, but somewhat clumsy to\n"+
        "swing, should one use it as a weapon.");
    SetMass(50);
    SetBaseCost("gold", 2);
    SetClass(10);
    SetDamageType(BLUNT);
    SetWeaponType("blunt");
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [bone], R-number: [238], V-number: [8113]
Item type: WEAPON
Short description: a bone
Long description: There is a glass-like bone lying here.
Extra description keyword(s):
----------
bone
----------
Can be worn on: TAKE WIELD HOLD 
Set char bits: NOBITS
Extra flags: NOBITS
Weight: 5, Value: 2, Cost/day: 300, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 1D4
ToHit Modifier: 0
Damage: 1D4
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: HITROLL By -1
    Affects: NONE By 0
*/
