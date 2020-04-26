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

    SetKeyName("crown iron");
    SetId("iron", "crown", "iron crown");
    SetAdjectives( ({ " "," "}));
    SetShort("an iron crown");
    SetLong("It is a heavy human-sized crown made from solid iron.");
    SetMass(100);
    SetBaseCost("silver", 5000);
    SetDamagePoints(81); //same as iron helmet
    SetProtection(BLUNT,10); //AC 4 item
    SetProtection(BLADE,12); //AC 4 item
    SetProtection(KNIFE,12); //AC 4 item
    SetArmorType(A_HELMET);
    SetRestrictLimbs(({"head"}));
    SetVendorType(VT_ARMOR);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [crown iron], R-number: [174], V-number: [6112]
Item type: ARMOR
Short description: an iron crown
Long description: An iron crown rests on the ground.
Extra description keyword(s):
----------
crown iron
----------
Can be worn on: TAKE HEAD 
Set char bits: NOBITS
Extra flags: MAGIC 
Weight: 10, Value: 5000, Cost/day: 1500, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [4]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
