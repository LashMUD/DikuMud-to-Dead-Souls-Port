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

    SetKeyName("bronze bracers");
    SetId(({"bracers", "bronze", "bronze bracers"}));
    SetAdjectives(({""}));
    SetShort("a pair of bronze bracers");
    SetLong("A pair of bronze bracers.");
    SetMass(80);
    SetBaseCost("silver",2500);
    SetDamagePoints(72);
    SetProtection(BLUNT,12);
    SetProtection(BLADE,12);
    SetProtection(KNIFE,12);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"right arm", "left arm"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [bracers bronze], R-number: [61], V-number: [3089] Item type: ARMOR
Short description: a pair of bronze bracers
Long description:
A pair of bronze bracers is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE ARMS 
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
    Affects : NONE By 0  
*/
