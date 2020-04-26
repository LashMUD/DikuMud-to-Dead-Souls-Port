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

    SetKeyName("a black dragon scale skirt");
    SetId("skirt", "dragonscale",  "black");
    SetAdjectives( ({ " "," "}));
    SetShort("a black dragon scale skirt");
    SetLong("It is a short skirt made from big, black dragon scales joined with silver\n"+
        "threads.  Its inside has been made from the soft skin on the dragon's belly,\n"+
        "making it very comfortable to wear.  The name 'Isha' has been engraved on one\n"+
        "of the scales.");
    SetMass(80);
    SetBaseCost("silver", 5000);
    SetDamagePoints(188); //dragon scale damage points 200-(AC6*2(tier2 item))=188
    SetProtection(BLUNT, 30); //change as necessary
    SetProtection(BLADE, 30); //change as necessary
    SetProtection(KNIFE, 30); //change as necessary
    SetArmorType(A_PANTS);
    SetVendorType(VT_ARMOR);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [skirt scale], R-number: [179], V-number: [6911]
Item type: ARMOR
Short description: a black dragon scale skirt
Long description: A black dragon scale skirt has been left here.
Extra description keyword(s):
----------
skirt scale
----------
Can be worn on: TAKE LEGS 
Set char bits: NOBITS
Extra flags: MAGIC 
Weight: 8, Value: 5000, Cost/day: 1500, Timer: 0
In room: Nowhere, In object: None, Carried by:Nobody
AC-apply : [6]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
