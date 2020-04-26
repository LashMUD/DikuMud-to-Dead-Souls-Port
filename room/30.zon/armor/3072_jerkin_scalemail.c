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

    SetKeyName("scale mail jerkin");
    SetId(({"scalemail","mail", "scale mail", "jerkin", "scale" }));
    SetAdjectives(({""}));
    SetShort("a scale mail jerkin");
    SetLong("A scale mail jerkin.");
    SetMass(200);
    SetBaseCost("silver",500);
    SetDamagePoints(80);
    SetProtection(BLUNT,10);
    SetProtection(BLADE,20);
    SetProtection(KNIFE,20);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"torso"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [jerkin scale mail], R-number: [44], V-number: [3072] Item type: ARMOR
Short description: a scale mail jerkin
Long description:
A scale mail jerkin is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE BODY 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 20, Value: 500, Cost/day: 100, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [4]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
