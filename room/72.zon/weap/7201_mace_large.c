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
    ::create();

    SetKeyName("the large mace");
    SetId("mace", "large", "large mace");
    SetAdjectives( ({ " "," "}));
    SetShort("the large mace");
    SetLong("The mace is pretty large with a weight of 10 lbs.  The head is actually four\n"+
        "purple tentacles tied together.");
    SetMass(100);
    SetBaseCost("gold", 1000);
    SetClass(14);
    SetDamageType(BLUNT);
    SetWeaponType("blunt");
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [mace large], R-number: [192], V-number: [7201]
Item type: WEAPON
Short description: the large mace
Long description: A large mace lies here.
Extra description keyword(s):
----------
large mace
----------
Can be worn on: TAKE WIELD 
Set char bits: NOBITS
Extra flags: MAGIC 
Weight: 10, Value: 1000, Cost/day: 200, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 1D6
ToHit Modifier: 0
Damage: 1D6
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: DAMROLL By 2
    Affects: NONE By 0
*/
