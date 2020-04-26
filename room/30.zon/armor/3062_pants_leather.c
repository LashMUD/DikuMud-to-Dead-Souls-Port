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

    SetKeyName("leather pants");
    SetId(({"pants", "leather", "leather pants" }));
    SetAdjectives(({"soft"}));
    SetShort("a pair of leather pants");
    SetLong("A pair of leather pants.");
    SetBaseCost("silver",50);    
    SetMass(50);
    SetDamagePoints(61);
    SetProtection(BLUNT,2);
    SetProtection(BLADE,6);
    SetProtection(KNIFE,6);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left leg", "right leg"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [pants leather], R-number: [34], V-number: [3062] Item type: ARMOR
Short description: a pair of leather pants
Long description:
A pair of leather pants is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE LEGS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 5, Value: 50, Cost/day: 10, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [2]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 
*/

