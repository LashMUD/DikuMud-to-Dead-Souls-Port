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

    SetKeyName("reinforced gloves");
    SetId(({"gloves", "reinforced", "reinforced gloves" }));
    SetAdjectives(({""}));
    SetShort("a pair of reinforced gloves");
    SetLong("A pair of reinforced gloves.");
    SetMass(20);
    SetBaseCost("silver",250);
    SetDamagePoints(68);
    SetProtection(BLUNT,8);
    SetProtection(BLADE,8);
    SetProtection(KNIFE,8);
    SetProtection(HEAT,5);
    SetProtection(COLD,7);
    SetFingers(5); 
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left hand", "right hand"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [gloves reinforced], R-number: [48], V-number: [3076] Item type: ARMOR
Short description: a pair of reinforced gloves
Long description:
A pair of reinforced gloves is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE HANDS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 2, Value: 250, Cost/day: 50, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [4]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
