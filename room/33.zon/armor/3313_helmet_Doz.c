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

    SetKeyName("golden helmet");
    SetId(({"helmet","golden","golden helmet", "gold", "Doz's helmet"}));
    SetAdjectives(({""}));
    SetShort("a golden helmet");
    SetLong("This helmet is made of solid gold. On the inside of it you find the name\n"+
        "'Doz' engraved in silver letters.");
    SetMass(80);
    SetBaseCost("gold", );
    SetDamagePoints(68);
    SetProtection(BLUNT,10);
    SetProtection(BLADE,18);
    SetProtection(KNIFE,18);
    SetArmorType(A_HELMET);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [golden helmet], R-number: [102], V-number: [3313] Item type: ARMOR
Short description: a golden helmet
Long description:
A golden helmet is lying on the ground.
Extra description keyword(s):
----------
golden helmet
----------
Can be worn on :TAKE HEAD 
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
