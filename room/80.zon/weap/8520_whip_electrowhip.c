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
    item::create();

    SetKeyName("whip electrowhip");
    SetId("whip", "electrowhip");
    SetAdjectives( ({ " "," "}));
    SetShort("a strange metallic blue whip");
    SetLong("It is a wicked cord of spun metal, amazingly supple and light, and set\n"+
        "with nasty little razor-like blades on the outer third, about one yd.");
    SetMass(10);
    SetBaseCost("gold", 100);
    SetClass(42);
    SetDamageType(SHOCK);
    SetWeaponType("shock");
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [whip electrowhip], R-number: [250], V-number: [8520] Item type: WEAPON
Short description: a blueish whip
Long description: A strange, metallic blue whip has been carelessly left here.
Extra description keyword(s):
----------
whip blue
----------
Can be worn on: TAKE WIELD HOLD 
Set char bits: NOBITS
Extra flags: GLOW HUM 
Weight: 1, Value: 100, Cost/day: 100, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 1D20
ToHit Modifier: 0
Damage: 1D20
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: DAMROLL By -1
    Affects: NONE By 0
*/
