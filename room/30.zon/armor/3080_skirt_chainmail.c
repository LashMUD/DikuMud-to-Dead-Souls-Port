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

    SetKeyName("chain mail skirt");
    SetId(({"skirt","chainmail", "mail", "chain mail skirt","chain" }));
    SetAdjectives(({""}));
    SetShort("a chain mail skirt");
    SetLong("A chain mail skirt.");
    SetMass(200);
    SetBaseCost("silver",500);
    SetDamagePoints(75);
    SetProtection(BLUNT,4);
    SetProtection(BLADE,15);
    SetProtection(KNIFE,15);
    SetArmorType(A_PANTS);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [skirt chain mail], R-number: [52], V-number: [3080] Item type: ARMOR
Short description: a long chain mail skirt
Long description:
A long chain mail skirt is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE LEGS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 20, Value: 500, Cost/day: 100, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [5]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0 
*/
