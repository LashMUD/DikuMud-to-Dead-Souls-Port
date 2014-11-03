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

    SetKeyName("Quifael's global optimizer");
    SetId("optimizer", "global");
    SetAdjectives( ({ " "," "}));
    SetShort("Quifael's global optimizer");
    SetLong("It is a very unpredictable piece of software, consisting mostly of\n"+
        "self-modifying code and inexcusable goto commands.  Looks very dangerous.");
    SetMass(10);
    SetBaseCost("gold", 10);
    SetClass(44);  //42+2 damage roll
    SetDamageType(MAGIC);
    SetWeaponType("magic");
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [optimizer], R-number: [177], V-number: [6900] Item type: WEAPON
Short description: Quifael's global optimizer
Long description: Quifael's global optimizer has been left here.
Extra description keyword(s):
----------
optimizer
----------
Can be worn on: TAKE WIELD 
Set char bits: NOBITS
Extra flags: NOBITS
Weight: 1, Value: 10, Cost/day: 10000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 3D6
ToHit Modifier: 0
Damage: 3D6
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: HITROLL By 2
    Affects: DAMROLL By 2
*/
