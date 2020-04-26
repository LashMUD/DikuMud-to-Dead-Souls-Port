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

    SetKeyName("bronze leggings");
    SetId(({"leggings", "bronze", "bronze leggings" }));
    SetAdjectives(({""}));
    SetShort("a pair of bronze leggings");
    SetLong("A pair of bronze leggings");
    SetBaseCost("silver",2500);    
    SetMass(80);
    SetDamagePoints(78);
    SetProtection(BLUNT,12);
    SetProtection(BLADE,18);
    SetProtection(KNIFE,18);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left leg", "right leg"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [leggings bronze], R-number: [58], V-number: [3086] Item type: ARMOR
Short description: a pair of bronze leggings
Long description:
A pair of bronze leggings is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE LEGS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 8, Value: 2500, Cost/day: 500, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [6]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 
*/
