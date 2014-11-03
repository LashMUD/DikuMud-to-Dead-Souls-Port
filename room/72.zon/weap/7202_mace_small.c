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

    SetKeyName("the small mace");
    SetId("mace", "small", "small mace");
    SetAdjectives( ({ " "," "}));
    SetShort("the small mace");
    SetLong("This weapon does look like it does a lot of damage, but then you never know.\n"+
        "It consists of a black handle and a purple head.");
    SetMass(60);
    SetBaseCost("gold", 600);
    SetClass(14);
    SetDamageType(BLUNT);
    SetWeaponType("blunt");
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [mace small], R-number: [193], V-number: [7202]
Item type: WEAPON
Short description: the small mace
Long description: a small mace has been left here.
Extra description keyword(s):
----------
small mace
----------
Can be worn on: TAKE WIELD 
Set char bits: NOBITS
Extra flags: MAGIC 
Weight: 6, Value: 600, Cost/day: 100, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 1D6
ToHit Modifier: 0
Damage: 1D6
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: DAMROLL By 1
    Affects: NONE By 0
*/
