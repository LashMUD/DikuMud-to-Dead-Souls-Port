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
#include <damage_types.h>
#include <vendor_types.h>
#include <armor_types.h>

inherit LIB_ARMOR;

void create(){
    armor::create();

    SetKeyName("golden cloak");
    SetId("cloak", "golden", "golden cloak", "Doz's cloak");
    SetAdjectives( ({ " "," "}));
    SetShort("a golden cloak");
    SetLong("This cloak is woven from the finest threads of gold, and it shimmers as you\n"+
        "look at it. You find the name 'Doz' written on the inside of it.");
    SetMass(200);
    SetBaseCost("gold", 0);
    SetDamagePoints(62); 
    SetProtection(BLUNT, 1); //change as necessary see below description
    SetProtection(BLADE, 2); //change as necessary
    SetProtection(KNIFE, 2); //change as necessary
    SetArmorType(A_CLOAK);
    SetRestrictLimbs(({"neck"}));
    SetVendorType(VT_ARMOR);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [golden cloak], R-number: [104], V-number: [3315] Item type: OTHER
Short description: a golden cloak
Long description:
A golden cloak is lying on the ground.
Extra description keyword(s):
----------
golden cloak
----------
Can be worn on :TAKE ABOUT 
Set char bits  :NOBITS
Extra flags: MAGIC 
Weight: 20, Value: 0, Cost/day: 1000000, Timer: 0
In room: 3306 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : ARMOR By -10
    Affects : NONE By 0
*/
