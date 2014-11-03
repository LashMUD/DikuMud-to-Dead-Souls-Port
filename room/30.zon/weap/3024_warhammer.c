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

    SetKeyName("warhammer");
    SetId( ({ "war hammer", "warhammer", "hammer" }) );
    SetAdjectives( ({ "hammer", "medium" }) );
    SetShort("a warhammer");
    SetLong("A medium sized warhammer.");
    SetMass(60);
    SetBaseCost("gold",50);
    SetVendorType(VT_WEAPON);
    SetClass(13);
    SetDamageType(BLUNT);
    SetWeaponType("blunt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [warhammer hammer], R-number: [12], V-number: [3024] Item type: WEAPON
Short description: a warhammer
Long description:
A medium sized warhammer is here.
Extra description keyword(s): None
Can be worn on :TAKE WIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 6, Value: 50, Cost/day: 17, Timer: 0
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
