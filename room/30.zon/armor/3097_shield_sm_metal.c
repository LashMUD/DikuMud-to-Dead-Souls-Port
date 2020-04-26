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

    SetKeyName("small metal shield");
    SetId( ({ "shield" }) );
    SetAdjectives( ({ "metal","small" }) );
    SetShort("a small metal shield");
    SetLong("A small metal shield.");
    SetDamagePoints(90);
    SetMass(50);
    SetBaseCost("silver",500);
    SetArmorType(A_SHIELD);
    SetProtection(BLUNT, 8);
    SetProtection(BLADE, 8);
    SetProtection(KNIFE, 8);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [shield small metal], R-number: [69], V-number: [3097] Item type: ARMOR
Short description: a small metal shield
Long description:
A small metal shield is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE SHIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 3, Value: 500, Cost/day: 100, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [4]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
