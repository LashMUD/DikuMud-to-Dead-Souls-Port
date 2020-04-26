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

    SetKeyName("chain mail sleeves");
    SetId(({"sleeves", "chain mail sleeves", "chainmail", "chainmail sleeves"}));
    SetAdjectives(({""}));
    SetShort("a pair of chain mail sleeves");
    SetLong("A pair of chain mail sleeves.");
    SetMass(80);
    SetBaseCost("silver",500);
    SetDamagePoints(70);
    SetProtection(BLUNT,4);
    SetProtection(BLADE,10);
    SetProtection(KNIFE,10);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"right arm", "left arm"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [sleeves chain mail], R-number: [55], V-number: [3083] Item type: ARMOR
Short description: a pair of chain mail sleeves
Long description:
A pair of chain mail sleeves is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE ARMS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 8, Value: 500, Cost/day: 100, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [5]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
