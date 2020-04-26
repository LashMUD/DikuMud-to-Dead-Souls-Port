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

    SetKeyName("studded leather jerkin");
    SetId(({"leather", "jerkin", "studded", "studded leather jerkin"}));
    SetAdjectives(({""}));
    SetShort("a studded leather jerkin");
    SetLong("A studded leather jerkin.");
    SetMass(100);
    SetBaseCost("silver",200);
    SetDamagePoints(70);
    SetProtection(BLUNT,15);
    SetProtection(BLADE,15);
    SetProtection(KNIFE,15);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"torso"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [jerkin studded leather], R-number: [38], V-number: [3066] Item type: ARMOR
Short description: a studded leather jerkin
Long description:
A studded leather jerkin is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE BODY 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 10, Value: 200, Cost/day: 40, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [3]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
