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

    SetKeyName("branch");
    SetId(" ");
    SetAdjectives( ({ " "," "}));
    SetShort("a long, grey branch");
    SetLong("It is very heavy and looks as if it has been dropped from great height.  It is\n"+
        "long and straight and the wood is very hard, still being full of sap.  Although\n"+
        "it does not fit very well in your hand, it could be used as a clumsy but very\n"+
        "heavy weapon.");
    SetMass(300);
    SetBaseCost("gold", 60);
    SetClass(24);
    SetDamageType(BLUNT);
    SetWeaponType("blunt");
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [branch], R-number: [166], V-number: [6104]
Item type: WEAPON
Short description: a long, grey branch
Long description: A long, grey branch rests heavily on the ground.
Extra description keyword(s):
----------
branch
----------
Can be worn on: TAKE WIELD 
Set char bits: NOBITS
Extra flags: NOBITS
Weight: 30, Value: 60, Cost/day: 20, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 2D5
ToHit Modifier: 0
Damage: 2D5
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: HITROLL By -2
    Affects: NONE By 0
*/
