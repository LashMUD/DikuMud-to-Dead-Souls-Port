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

    SetKeyName("iron ring");
    SetId("iron", "ring", "iron ring");
    SetAdjectives( ({ " "," "}));
    SetShort("an iron ring");
    SetLong("It is a quite heavy human-sized ring made from solid iron. It lacks\n"+
        "decorations of any kind.");
    SetMass(10);
    SetBaseCost("silver", 5000);
    SetDamagePoints(50); //arbitrary number
    SetProtection(BLUNT, 100); //change as necessary
    SetProtection(BLADE, 100); //change as necessary
    SetProtection(KNIFE, 100); //change as necessary
    SetArmorType(A_RING);
    SetVendorType(VT_ARMOR);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [ring iron], R-number: [176], V-number: [6114]
Item type: ARMOR
Short description: an iron ring
Long description: An iron ring has been left here.
Extra description keyword(s):
----------
ring iron
----------
Can be worn on: TAKE FINGER 
Set char bits: NOBITS
Extra flags: MAGIC 
Weight: 1, Value: 5000, Cost/day: 1500, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [1]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
