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

    SetKeyName("iron gauntlets");
    SetId(({"gauntlets", "iron", "iron gauntlets" }));
    SetAdjectives(({""}));
    SetShort("a pair of iron gauntlets");
    SetLong("A pair of iron gauntlets.");
    SetBaseCost("silver",5000);    
    SetMass(80);
    SetDamagePoints(74);
    SetProtection(BLUNT,14);
    SetProtection(BLADE,14);
    SetProtection(KNIFE,14);
    SetFingers(5);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left hand", "right hand"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [gauntlets iron], R-number: [66], V-number: [3094] Item type: ARMOR
Short description: a pair of iron gauntlets
Long description:
A pair of iron gauntlets is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE HANDS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 8, Value: 5000, Cost/day: 1000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [7]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
