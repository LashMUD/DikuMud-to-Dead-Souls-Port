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

    SetKeyName("small sword");
    SetId( ({ "sword", "small sword" }) );
    SetAdjectives( ({ "small" }) );
    SetShort("a small sword");
    SetLong("A small sword with some writing on it.");
    SetItems( ([
        "writing" : "It looks like an inscription. Perhaps you could read it?",
        ]) );
    SetRead( ([
        ({"inscription", "writing"}) : "It says : May this sword be a good companion.",
        ]) );
    SetMass(30);
    SetBaseCost("gold",60);
    SetVendorType(VT_WEAPON);
    SetClass(14);
    SetDamageType(BLADE);
    SetWeaponType("blade");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [sword small], R-number: [9], V-number: [3021] Item type: WEAPON
Short description: a small sword
Long description:
A small sword lies here.
Extra description keyword(s):
----------
inscription
sword small
----------
Can be worn on :TAKE WIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 3, Value: 60, Cost/day: 20, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Tohit : 0
Todam : 1D6
Type : 11
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
