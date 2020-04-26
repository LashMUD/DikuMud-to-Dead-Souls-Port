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
#include <armor_types.h>

inherit LIB_ARMOR;

void create(){
    armor::create();

    SetKeyName("boots");
    SetId("boots", "leather boots");
    SetAdjectives( ({ " "," "}));
    SetShort("a pair of leather boots");
    SetLong("A pair of leather boots.");
    SetMass(40);
    SetBaseCost("silver", 60);
    SetDamagePoints(56);
    SetProtection(BLUNT, 6); //change as necessary
    SetProtection(BLADE, 6); //change as necessary
    SetProtection(KNIFE, 6); //change as necessary
    SetArmorType(A_BOOT);
   SetVendorType(VT_ARMOR);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [boots], R-number: [153], V-number: [6002] Item type: ARMOR
Short description: a pair of leather boots
Long description: A pair of leather boots lies here.
Extra description keyword(s):
----------
boots
----------
Can be worn on: TAKE FEET 
Set char bits: NOBITS
Extra flags: NOBITS
Weight: 4, Value: 60, Cost/day: 20, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [3]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
