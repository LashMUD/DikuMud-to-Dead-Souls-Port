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

inherit LIB_ITEM;

void create(){
    ::create();

    SetKeyName("the devil rod");
    SetId("rod", "devil", "staff");
    SetAdjectives( ({ " "," "}));
    SetShort("the devil rod");
    SetLong("This is indeed a mysterious rod.  It is dark black at the base but has four\n"+
        "very sharp purple tentacles at the end.");
    SetMass(60);
    SetBaseCost("gold", 16000);
    SetClass(28);
    SetDamageType(BLUNT);
    SetWeaponType("blunt");
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [rod devil], R-number: [191], V-number: [7200]
Item type: WEAPON
Short description: the devil rod
Long description: The mysterious devil rod lies on the floor.
Extra description keyword(s):
----------
devil rod
----------
Can be worn on: TAKE WIELD 
Set char bits: NOBITS
Extra flags: MAGIC 
Weight: 6, Value: 16000, Cost/day: 6000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 2D6
ToHit Modifier: 0
Damage: 2D6
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: HITROLL By 2
    Affects: STR By -1
*/
