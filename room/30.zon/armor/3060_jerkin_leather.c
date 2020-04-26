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
    
    SetKeyName("leather jerkin");
    SetId(({"armor","leather","jerkin"}));
    SetAdjectives(({"soft"}));
    SetShort("a leather jerkin");
    SetLong("A leather jerkin.");
    SetMass(50);
    SetBaseCost("silver",100);
    SetDamagePoints(65);
    SetProtection(BLUNT,4);
    SetProtection(BLADE,10);
    SetProtection(KNIFE,10);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"torso"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [jerkin leather], R-number: [32], V-number: [3060] Item type: ARMOR
Short description: a leather jerkin
Long description:
A leather jerkin is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE BODY 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 5, Value: 100, Cost/day: 20, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [2]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0

*/
