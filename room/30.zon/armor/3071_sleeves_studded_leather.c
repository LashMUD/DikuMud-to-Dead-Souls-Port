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

    SetKeyName("studded leather sleeves");
    SetId(({"sleeves", "studded" "studded leather sleeves"}));
    SetAdjectives(({""}));
    SetShort("a pair of studded leather sleeves");
    SetLong("A pair of studded leather sleeves.");
    SetMass(40);
    SetBaseCost("silver",100);
    SetDamagePoints(56);
    SetProtection(BLUNT,6);
    SetProtection(BLADE,6);
    SetProtection(KNIFE,6);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"right arm", "left arm"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [sleeves studded leather], R-number: [43], V-number: [3071] Item type: ARMOR
Short description: a pair of studded leather sleeves
Long description:
A pair of studded leather sleeves is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE ARMS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 4, Value: 100, Cost/day: 20, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [3]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
