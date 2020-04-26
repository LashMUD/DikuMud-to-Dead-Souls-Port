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

    SetKeyName("a large round shield");
    SetId("a large round shield");
    SetAdjectives( ({ " "," "}));
    SetShort("a large round shield");
    SetLong("It is made from hard wood that has been reinforced with heavy iron bands.");
    SetMass(150);
    SetBaseCost("silver", 300);
    SetDamagePoints(65);
    SetProtection(BLUNT,10); //change as necessary
    SetProtection(BLADE,10); //change as necessary
    SetProtection(KNIFE,10); //change as necessary
    SetArmorType(A_SHIELD);
    SetVendorType(VT_ARMOR);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [shield large], R-number: [173], V-number: [6111]
Item type: ARMOR
Short description: a large round shield
Long description: A large round shield has been left here.
Extra description keyword(s):
----------
shield large
----------
Can be worn on: TAKE SHIELD 
Set char bits: NOBITS
Extra flags: NOBITS
Weight: 15, Value: 300, Cost/day: 100, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [5]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
