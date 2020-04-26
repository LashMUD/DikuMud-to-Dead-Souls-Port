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

    SetKeyName("a broad silver belt");
    SetId("silver", "belt", "broad");
    SetAdjectives( ({ " "," "}));
    SetShort("a broad silver belt");
    SetLong("It is a broad belt made from tiny silver rings woven together.");
    SetMass(40);
    SetBaseCost("silver", 5000);
    SetDamagePoints(62);
    SetProtection(BLUNT, 6); //change as necessary
    SetProtection(BLADE, 12); //change as necessary
    SetProtection(KNIFE, 12); //change as necessary
    SetArmorType(A_BELT);
    SetVendorType(VT_ARMOR);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [belt silver], R-number: [181], V-number: [6913]
Item type: ARMOR
Short description: a broad silver belt
Long description: A broad silver belt has been left here.
Extra description keyword(s):
----------
belt silver
----------
Can be worn on: TAKE WAISTE 
Set char bits: NOBITS
Extra flags: MAGIC 
Weight: 4, Value: 5000, Cost/day: 1500, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [6]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
