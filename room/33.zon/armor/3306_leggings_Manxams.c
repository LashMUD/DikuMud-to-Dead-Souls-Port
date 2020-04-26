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

    SetKeyName("brass leggings");
    SetId(({"brass", "leggings", "brass leggings", "Manxam's leggings"}));
    SetAdjectives(({""}));
    SetShort("Manxam's brass leggings");
    SetLong("A pair of brass leggings, well crafted, with the owners name engraved on\n"+
        "them.  The name is, of course, Manxam.");
    SetMass(80);
    SetBaseCost("gold", 0);
    SetDamagePoints(95);
    SetProtection(BLUNT, 12);
    SetProtection(BLADE, 18);
    SetProtection(KNIFE, 18);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"right leg", "left leg"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [leggings brass], R-number: [95], V-number: [3306] Item type: ARMOR
Short description: Manxam's brass leggings
Long description:
Manxam's brass leggings are lying on the ground.
Extra description keyword(s):
----------
leggings brass
----------
Can be worn on :TAKE LEGS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 8, Value: 0, Cost/day: 1000000, Timer: 0
In room: Nowhere ,In object: None ,Carried by:Nobody
AC-apply : [6]
Equipment Status: Inventory
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0  
*/
