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

    SetKeyName("a short sword");
    SetId("sword", "short", "short sword", "small");
    SetAdjectives( ({ " "," "}));
    SetShort("a short sword");
    SetLong("This is a very nice little weapon.");
    SetMass(40);
    SetBaseCost("gold", 60);
    SetClass(20);
    SetDamageType(BLADE);
    SetWeaponType("blade");
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [sword short], R-number: [202], V-number: [7211]
Item type: WEAPON
Short description: a short sword
Long description: There lies a short sword.
Extra description keyword(s):
----------
small sword
----------
Can be worn on: TAKE WIELD 
Set char bits: NOBITS
Extra flags: NOBITS
Weight: 4, Value: 60, Cost/day: 20, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 2D4
ToHit Modifier: 0
Damage: 2D4
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
