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
#include <vendor_types.h>

inherit LIB_ARMOR;

static void create() {
    armor::create();

    SetKeyName("golden shield");
    SetId( ({ "shield", "golden", "golden shield", "Doz's shield" }) );
    SetAdjectives( ({"golden", "large" }) );
    SetShort("a golden shield");
    SetLong("This shield is made of gold and it's covered with strange silver runes\n"+
        "which you guess must be of protection. The name 'Doz' is also to be found\n"+
        "on the shield.");
    SetDamagePoints(62);
    SetVendorType(VT_ARMOR);
    SetMass(150);
    SetBaseCost("gold", 0);
    SetProtection(BLUNT, 10);
    SetProtection(BLADE, 10);
    SetProtection(KNIFE, 10);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"shield"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [golden shield], R-number: [105], V-number: [3316] Item type: ARMOR
Short description: a golden shield
Long description:
A golden shield is lying on the ground.
Extra description keyword(s):
----------
golden shield
----------
Can be worn on :TAKE SHIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 15, Value: 0, Cost/day: 1000000, Timer: 0
In room: 3306 ,In object: None ,Carried by:Nobody
AC-apply : [5]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
