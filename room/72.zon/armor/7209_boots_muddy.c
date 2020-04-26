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
#include <armor_types.h>

inherit LIB_ARMOR;

void create(){
    armor::create();

    SetKeyName("a pair of muddy boots");
    SetId("boots", "muddy", "muddy boots");
    SetAdjectives( ({ " "," "}));
    SetShort("a pair of muddy boots");
    SetLong("The boots are muddy and they look well worn, but also very\n"+
        "comfortable.");
    SetMass(200);
    SetBaseCost("silver", 75);
    SetDamagePoints(46); //same as leather boots
    SetProtection(BLUNT, 2); //change as necessary
    SetProtection(BLADE, 4); //change as necessary
    SetProtection(KNIFE, 4); //change as necessary
    SetArmorType(A_BOOT);
    SetRestrictLimbs(({"right foot", "left foot"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [boots muddy], R-number: [200], V-number: [7209]
Item type: ARMOR
Short description: a pair of muddy boots
Long description: A pair of muddy boots has been dropped here.
Extra description keyword(s):
----------
The boots are muddy and they look well worn, but also very comfortable.
----------
Can be worn on: TAKE FEET 
Set char bits: NOBITS
Extra flags: MAGIC 
Weight: 20, Value: 75, Cost/day: 100, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [3]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
