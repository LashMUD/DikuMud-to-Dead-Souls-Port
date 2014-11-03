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

    SetKeyName("golden sleeves");
    SetId(({"sleeves", "golden sleeves", "gold", "Doz's sleeves"}));
    SetAdjectives(({""}));
    SetShort("a pair of golden sleeves");
    SetLong("These sleeves are made of gold and they have the name 'Doz' engraved in\n"+
        "silver letters on them.");
    SetMass(80);
    SetBaseCost("gold", 0);
    SetDamagePoints(62);
    SetProtection(BLUNT,6);
    SetProtection(BLADE,12);
    SetProtection(KNIFE,12);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"right arm", "left arm"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [golden sleeves], R-number: [103], V-number: [3314] Item type:
ARMOR
Short description: a pair of golden sleeves
Long description:
A pair of golden sleeves is lying on the ground.
Extra description keyword(s):
----------
golden sleeves
----------
Can be worn on :TAKE ARMS 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 8, Value: 0, Cost/day: 1000000, Timer: 0
In room: 3306 ,In object: None ,Carried by:Nobody
AC-apply : [6]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
