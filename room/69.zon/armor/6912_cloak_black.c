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

    SetKeyName("a black, hooded cloak");
    SetId("cloak", "black", "hooded", "cape");
    SetAdjectives( ({ " "," "}));
    SetShort("a black, hooded cloak");
    SetLong("It is a heavy, black cloak with a large hood.  The name 'Isha' is written\n"+
        "inside it with a silver thread.");
    SetMass(200);
    SetBaseCost("silver", 8000);
    SetDamagePoints(182); 
    SetProtection(BLUNT, 12); //change as necessary
    SetProtection(BLADE, 18); //change as necessary
    SetProtection(KNIFE, 18); //change as necessary
    SetArmorType(A_CLOAK);
    SetVendorType(VT_ARMOR);
}

void init(){
    ::init();
}


/* Extra Information Original Diku Output 
Object name: [cloak black], R-number: [180], V-number: [6912]
Item type: ARMOR
Short description: a black, hooded cloak
Long description: A large, hooded cloak, as dark as the night, has been left here.
Extra description keyword(s):
----------
cloak black
----------
Can be worn on: TAKE ABOUT 
Set char bits: NOBITS
Extra flags: MAGIC 
Weight: 20, Value: 8000, Cost/day: 3000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [6]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: SAVING_BREATH By -2
    Affects: NONE By 0
*/
