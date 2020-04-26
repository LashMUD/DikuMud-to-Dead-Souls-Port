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

    SetKeyName("the Scythe of Death");
    SetId("scythe", "death blade", "blade");
    SetAdjectives( ({ " "," "}));
    SetShort("the Scythe of Death");
    SetLong("It is a very heavy scythe.  The grey handle is made from hard wood and the long\n"+
        "iron blade is completely smooth from countless years of use.  It feels cold to\n"+
        "the touch.");
    SetMass(1000);
    SetBaseCost("gold", 30000);
    SetClass(500); //it's the Scythe of Death for cryin' out loud!
    SetDamageType(BLADE);
    SetWeaponType("blade");
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [scythe], R-number: [185], V-number: [6999] Item type: WEAPON
Short description: the Scythe of Death
Long description: The Scythe of Death rests heavily on the ground.
Extra description keyword(s):
----------
scythe
----------
Can be worn on: TAKE WIELD 
Set char bits: NOBITS
Extra flags: NOBITS
Weight: 100, Value: 30000, Cost/day: 10000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 1D100
ToHit Modifier: 0
Damage: 1D100
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
