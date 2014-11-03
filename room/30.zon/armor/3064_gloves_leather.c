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

    SetKeyName("leather gloves");
    SetId(({"gloves", "leather", "leather gloves" }));
    SetAdjectives(({"soft"}));
    SetShort("a pair of leather gloves");
    SetLong("A pair of leather gloves.");
    SetBaseCost("gold",50);    
    SetMass(10);
    SetDamagePoints(59);
    SetProtection(BLUNT,2);
    SetProtection(BLADE,4);
    SetProtection(KNIFE,4);
    SetFingers(5);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left hand", "right hand"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [gloves leather], R-number: [36], V-number: [3064] Item type: ARMOR
Short description: a pair of leather gloves
Long description:
A pair of leather gloves is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE HANDS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 50, Cost/day: 10, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [2]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0 
*/
