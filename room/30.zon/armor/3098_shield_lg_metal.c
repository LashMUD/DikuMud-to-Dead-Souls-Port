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

static void create() {
    armor::create();

    SetKeyName("large metal shield");
    SetId( ({ "shield" }) );
    SetAdjectives( ({"metal", "large" }) );
    SetShort("a large metal shield");
    SetLong("A large metal shield.");
    SetDamagePoints(95);
    SetMass(80);
    SetBaseCost("silver",1000);
    SetProtection(BLUNT, 12);
    SetProtection(BLADE, 12);
    SetProtection(KNIFE, 12);
    SetArmorType(A_SHIELD);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [shield large metal], R-number: [70], V-number: [3098] Item type: ARMOR
Short description: a large metal shield
Long description:
A large metal shield is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE SHIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 3, Value: 1000, Cost/day: 200, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [6]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
