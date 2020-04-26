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

    SetKeyName("iron breast plate");
    SetId(({"iron","plate","breastplate", "breast plate"}));
    SetAdjectives(({""}));
    SetShort("an iron breast plate");
    SetLong("An iron breast plate.");
    SetMass(400);
    SetBaseCost("silver",10000);
    SetDamagePoints(10);
    SetProtection(BLUNT,15);
    SetProtection(BLADE,35);
    SetProtection(KNIFE,35);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"torso"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [iron breast plate], R-number: [62], V-number: [3090] Item type: ARMOR
Short description: an iron breast plate
Long description:
An iron breast plate is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE BODY 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 40, Value: 10000, Cost/day: 2000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [7]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
