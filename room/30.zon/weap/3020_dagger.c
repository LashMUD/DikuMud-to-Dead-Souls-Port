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
    SetAdjectives( ({"sharp", "wicked"}) );
    SetId( ({"dagger"}) );
    SetShort("a dagger");
    SetLong("A dagger with a long thin blade.");
    SetClass(10);
    SetWeaponType("knife");
    SetDamageType(KNIFE);
    SetMass(10);
    SetBaseCost("gold", 10);
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [dagger], R-number: [8], V-number: [3020] Item type: WEAPON
Short description: a dagger
Long description:
A dagger with a long thin blade is here.
Extra description keyword(s): None
Can be worn on :TAKE WIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 10, Cost/day: 3, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Tohit : 0
Todam : 1D4
Type : 11
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
