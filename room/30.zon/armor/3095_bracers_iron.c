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

    SetKeyName("iron bracers");
    SetId(({"bracers", "iron", "iron bracers"}));
    SetAdjectives(({""}));
    SetShort("a pair of iron bracers");
    SetLong("A pair of iron bracers.");
    SetMass(80);
    SetBaseCost("silver",5000);
    SetDamagePoints(74);
    SetProtection(BLUNT,14);
    SetProtection(BLADE,14);
    SetProtection(KNIFE,14);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"right arm", "left arm"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [bracers iron], R-number: [67], V-number: [3095] Item type: ARMOR
Short description: a pair of iron bracers
Long description:
A pair of iron bracers is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE ARMS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 8, Value: 5000, Cost/day: 1000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [6]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
