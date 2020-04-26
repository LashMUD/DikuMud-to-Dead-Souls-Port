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

    SetKeyName("bronze breast plate");
    SetId(({"bronze","plate","breastplate", "breast plate"}));
    SetAdjectives(({""}));
    SetShort("a bronze breast plate");
    SetLong("A bronze breast plate.");
    SetMass(400);
    SetBaseCost("silver",5000);
    SetDamagePoints(90);
    SetProtection(BLUNT,12);
    SetProtection(BLADE,30);
    SetProtection(KNIFE,30);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"torso"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [bronze breast plate], R-number: [56], V-number: [3084] Item type: ARMOR
Short description: a bronze breast plate
Long description:
A bronze breast plate is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE BODY 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 40, Value: 5000, Cost/day: 1000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [6]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 
*/
