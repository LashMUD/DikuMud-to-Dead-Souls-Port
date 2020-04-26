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

static void create() {
    item::create();

    SetKeyName("shovel");
    SetId( ({ "shovel", "metal shovel" }) );
    SetAdjectives( ({ "shovel", "metal", "simple" }) );
    SetShort("a shovel");
    SetLong("It is a large metal shovel with a solid wooden handle.");
    SetMass(8);
    SetBaseCost("gold",30);
    SetVendorType(VT_WEAPON);
    SetClass(12);
    SetDamageType(BLUNT);
    SetWeaponType("blunt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [shovel], R-number: [118], V-number: [3604] Item type: WEAPON
Short description: a shovel
Long description:
A shovel is lying here.
Extra description keyword(s):
----------
shovel
----------
Can be worn on :TAKE WIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 8, Value: 30, Cost/day: 10, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Tohit : 0
Todam : 1D5
Type : 7
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
