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

    SetKeyName("studded leather pants");
    SetId(({"pants", "leather", "studded", "studded leather pants" }));
    SetAdjectives(({""}));
    SetShort("a pair of studded leather pants");
    SetLong("A pair of studded leather pants.");
    SetBaseCost("silver",100);    
    SetMass(80);
    SetDamagePoints(64);
    SetProtection(BLUNT,9);
    SetProtection(BLADE,9);
    SetProtection(KNIFE,9);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left leg", "right leg"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [pants studded leather], R-number: [40], V-number: [3068] Item type: ARMOR
Short description: a pair of studded leather pants
Long description:
A pair of studded leather pants is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE LEGS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 8, Value: 100, Cost/day: 20, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [3]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/

