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

    SetKeyName("bronze gauntlets");
    SetId(({"gauntlets", "bronze", "bronze gauntlets" }));
    SetAdjectives(({""}));
    SetShort("a pair of bronze gauntlets");
    SetLong("A pair of bronze gauntlets.");
    SetBaseCost("silver",2500);    
    SetMass(80);
    SetDamagePoints(72);
    SetProtection(BLUNT,12);
    SetProtection(BLADE,12);
    SetProtection(KNIFE,12);
    SetFingers(5);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left hand", "right hand"}));
}

void init(){
    ::init();
}
/* Extra Information Original Diku Output
Object name: [gauntlets bronze], R-number: [60], V-number: [3088] Item type: ARMOR
Short description: a pair of bronze gauntlets
Long description:
A pair of bronze gauntlets is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE HANDS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 8, Value: 2500, Cost/day: 500, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [6]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
