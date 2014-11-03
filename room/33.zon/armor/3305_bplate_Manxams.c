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

    SetKeyName("brass breast plate");
    SetId(({"brass","plate", "breastplate", "breast plate", "Manxam's plate"}));
    SetAdjectives(({""}));
    SetShort("Manxam's brass breast plate");
    SetLong("A good-looking breastplate made of brass.  It's engraved a lot, the largest\n"+
        "engraving being the name of the owner, Manxam.");
    SetMass(800);
    SetBaseCost("gold", 0);
    SetDamagePoints(90);
    SetProtection(BLUNT, 12);
    SetProtection(BLADE, 30);
    SetProtection(KNIFE, 30);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"torso"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [brass breast plate], R-number: [94], V-number: [3305] Item type:
ARMOR
Short description: Manxam's brass breast plate
Long description:
Manxam's brass breast plate is lying on the ground.
Extra description keyword(s):
----------
brass breast plate
----------
Can be worn on :TAKE BODY 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 80, Value: 0, Cost/day: 1000000, Timer: 0
In room: Nowhere ,In object: None ,Carried by:Nobody
AC-apply : [6]
Equipment Status: Inventory
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0  
*/
