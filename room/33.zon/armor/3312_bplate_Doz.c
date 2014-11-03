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

    SetKeyName("golden breast plate");
    SetId(({"gold", "golden", "plate", "breastplate", "breast plate", "Doz's plate"}));
    SetAdjectives(({""}));
    SetShort("a golden breast plate");
    SetLong("This breast plate is made of solid gold, yet it seems to be as hard as a\n"+
        "normal steel plate. The name 'Doz' is engraved in silver letters on it.");
    SetMass(1000);
    SetBaseCost("gold", 0);
    SetDamagePoints(80);
    SetProtection(BLUNT, 14);
    SetProtection(BLADE, 35);
    SetProtection(KNIFE, 35);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"torso"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [golden breast plate], R-number: [101], V-number: [3312] Item type:
ARMOR
Short description: a golden breast plate
Long description:
A golden breast plate is lying on the ground.
Extra description keyword(s):
----------
golden breast plate
----------
Can be worn on :TAKE BODY 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 100, Value: 0, Cost/day: 1000000, Timer: 0
In room: 3306 ,In object: None ,Carried by:Nobody
AC-apply : [7]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
