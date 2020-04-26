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

    SetKeyName("swordmans gloves");
    SetId(({"gloves", "swordmans", "swordmans gloves" }));
    SetAdjectives(({"soft", "supple"}));
    SetShort("a pair of swordmans gloves");
    SetLong("Some gloves are here. They look like the right kind of\n"+
        "equipment to use when fighting.");
    SetBaseCost("silver", 1500);    
    SetMass(10);
    SetDamagePoints(46);
    SetProtection(BLUNT,2);
    SetProtection(BLADE,4);
    SetProtection(KNIFE,4);
    SetFingers(5);
    SetArmorType(A_GLOVE);
    //need to affect hitroll (melee attack skill?) by +2 and damage roll by +1
}
void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [gloves], R-number: [131], V-number: [4101] Item type: ARMOR
Short description: a swordmans gloves
Long description:
Some gloves is here. They look like the right kind of
equipment to use when fighting.
Extra description keyword(s):
----------
gloves
----------
Can be worn on :TAKE HANDS 
Set char bits  :NOBITS
Extra flags: ANTI-GOOD 
Weight: 1, Value: 1500, Cost/day: 500, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [2]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : HITROLL By 2
    Affects : DAMROLL By 1
*/

