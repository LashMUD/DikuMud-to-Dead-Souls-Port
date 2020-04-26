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

    SetKeyName("iron leggings");
    SetId(({"leggings", "iron", "iron leggings" }));
    SetAdjectives(({""}));
    SetShort("a pair of iron leggings");
    SetLong("A pair of iron leggings.");
    SetBaseCost("silver",5000);    
    SetMass(80);
    SetDamagePoints(81);
    SetProtection(BLUNT,15);
    SetProtection(BLADE,21);
    SetProtection(KNIFE,21);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left leg", "right leg"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [leggings iron], R-number: [64], V-number: [3092] Item type: ARMOR
Short description: a pair of iron leggings
Long description:
A pair of iron leggings is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE LEGS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 8, Value: 5000, Cost/day: 1000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [7]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/

