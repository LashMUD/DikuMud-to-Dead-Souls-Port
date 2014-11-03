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
    SetKeyName("dagger");
    SetAdjectives( ({"sharp", "siver"}) );
    SetId( ({"silver dagger", "silver", "dagger"}) );
    SetShort("a long silver dagger");
    SetLong("It has a long, sharp blade that is made entirely from silver. A small rune\n"+
        "has been engraved on the blade next to the hilt.");
    SetClass(11); //+1 for damage roll; otherwise would be "10"
    SetWeaponType("knife");
    SetDamageType(KNIFE);
    SetMass(10);
    SetBaseCost("gold", 100);
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [dagger silver], R-number: [123], V-number: [3613] Item type: WEAPON
Short description: a silver dagger
Long description:
A long silver dagger is lying here.
Extra description keyword(s):
----------
dagger silver
----------
Can be worn on :TAKE WIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 100, Cost/day: 20, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Tohit : 0
Todam : 1D4
Type : 11
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : DAMROLL By 1
    Affects : NONE By 0
*/
