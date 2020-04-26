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

    SetKeyName("a black dragon scale shirt");
    SetId("shirt", "dragonscale", "black");
    SetAdjectives( ({ " "," "}));
    SetShort("a black dragon scale shirt");
    SetLong("It is a sleeveless shirt made from big, black dragon scales joined with silver\n"+
        "threads.  Its inside has been made from the soft skin on the dragon's belly,\n"+
        "making it very comfortable to wear.  The name 'Isha' has been engraved on one\n"+
        "of the scales.");
    SetMass(100);
    SetBaseCost("silver", 10000);
    SetDamagePoints(188); //black dragon scale
    SetProtection(BLUNT, 30); //AC 6 Item
    SetProtection(BLADE, 30); //AC 6 Item
    SetProtection(KNIFE, 30); //AC 6 Item
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"torso"}));
    SetVendorType(VT_ARMOR);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [shirt scale], R-number: [178], V-number: [6910]
Item type: ARMOR
Short description: a black dragon scale shirt
Long description: A black dragon scale shirt has been left here.
Extra description keyword(s):
----------
shirt scale
----------
Can be worn on: TAKE BODY 
Set char bits: NOBITS
Extra flags: MAGIC 
Weight: 10, Value: 10000, Cost/day: 3000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [6]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
