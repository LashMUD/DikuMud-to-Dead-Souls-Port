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

    SetKeyName("shirt");
    SetId("chequered shirt", "shirt");
    SetAdjectives( ({ " "," "}));
    SetShort("a chequered shirt");
    SetLong("A chequered shirt lies here.");
    SetMass(20);
    SetBaseCost("silver", 20);
    SetDamagePoints(10); //assumes a light material
    SetProtection(BLUNT,1); //change as necessary
    SetProtection(BLADE,2); //change as necessary
    SetProtection(KNIFE,2); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"torso"}));
    SetVendorType(VT_ARMOR);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [shirt], R-number: [152], V-number: [6001] Item type: ARMOR
Short description: a chequered shirt
Long description: A chequered shirt lies here.
Extra description keyword(s):
----------
shirt
----------
Can be worn on: TAKE BODY 
Set char bits: NOBITS
Extra flags: NOBITS
Weight: 2, Value: 20, Cost/day: 8, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [1]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
