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

    SetKeyName("scale mail skirt");
    SetId(({"skirt","scalemail","mail", "scalemail skirt","scale" }));
    SetAdjectives(({""}));
    SetShort("a scale mail skirt");
    SetLong("A scale mail skirt.");
    SetMass(200);
    SetBaseCost("silver",250);
    SetDamagePoints(72);
    SetProtection(BLUNT,10);
    SetProtection(BLADE,12);
    SetProtection(KNIFE,12);
    SetArmorType(A_PANTS);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [skirt scale mail], R-number: [46], V-number: [3074] Item type: ARMOR
Short description: a long scale mail skirt
Long description:
A long scale mail skirt is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE LEGS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 20, Value: 250, Cost/day: 50, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [4]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
