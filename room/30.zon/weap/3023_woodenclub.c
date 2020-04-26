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

    SetKeyName("wooden club");
    SetId( ({ "club", "wooden club" }) );
    SetAdjectives( ({ "club", "wooden", "simple" }) );
    SetShort("a wooden club");
    SetLong("A simpel looking wooden club.");
    SetMass(30);
    SetBaseCost("gold",12);
    SetVendorType(VT_WEAPON);
    SetClass(8);
    SetDamageType(BLUNT);
    SetWeaponType("blunt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [club wooden], R-number: [11], V-number: [3023] Item type: WEAPON
Short description: a wooden club
Long description:
A simpel looking wooden club is here.
Extra description keyword(s): None
Can be worn on :TAKE WIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 3, Value: 12, Cost/day: 4, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Tohit : 0
Todam : 1D3
Type : 7
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
