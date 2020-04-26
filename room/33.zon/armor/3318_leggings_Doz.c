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

static void create(){
    armor::create();

    SetKeyName("golden leggings");
    SetId(({"gold", "leggings", "golden leggings", "Doz's leggings", "golden"}));
    SetAdjectives(({""}));
    SetShort("a pair of golden leggings");
    SetLong("These leggings are made of solid gold, and the name 'Doz' is engraved in\n"+
        "silver letters on them.");
    SetMass(800);
    SetBaseCost("gold", 0);
    SetDamagePoints(68);
    SetProtection(BLUNT, 10);
    SetProtection(BLADE, 18);
    SetProtection(KNIFE, 18);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"right leg", "left leg"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [golden leggings], R-number: [107], V-number: [3318] Item type:
ARMOR
Short description: a pair of golden leggings
Long description:
A pair of golden leggings is lying on the ground.
Extra description keyword(s):
----------
golden leggings
----------
Can be worn on :TAKE LEGS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 8, Value: 0, Cost/day: 1000000, Timer: 0
In room: 3306 ,In object: None ,Carried by:Nobody
AC-apply : [6]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0 
*/
