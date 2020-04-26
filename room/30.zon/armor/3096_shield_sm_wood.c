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
#include <armor_types.h>
#include <damage_types.h>

inherit LIB_ARMOR;

static void create() {
    armor::create();

    SetKeyName("small wooden shield");
    SetId( ({ "shield" }) );
    SetAdjectives( ({ "wood", "wooden","small" }) );
    SetShort("a small wooden shield");
    SetLong("A small wooden shield.");
    SetDamagePoints(75);
    SetMass(30);
    SetBaseCost("silver",100);
    SetArmorType(A_SHIELD);
    SetProtection(BLUNT, 4);
    SetProtection(BLADE, 4);
    SetProtection(KNIFE, 4);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [shield small wooden], R-number: [68], V-number: [3096] Item type: ARMOR
Short description: a small wooden shield
Long description:
A small wooden shield is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE SHIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 3, Value: 100, Cost/day: 20, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [2]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
