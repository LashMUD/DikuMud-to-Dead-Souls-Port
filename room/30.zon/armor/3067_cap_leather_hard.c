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

    SetKeyName("hard leather cap");
    SetId(({"cap","leather", "hard leather cap" }));
    SetAdjectives(({""}));
    SetShort("a hard leather cap");
    SetLong("A hard leather cap.");
    SetBaseCost("silver",100);    
    SetDamagePoints(64);
    SetMass(20);
    SetProtection(BLUNT,9);
    SetProtection(BLADE,9);
    SetProtection(KNIFE,9);
    SetArmorType(A_HELMET);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [cap hard leather], R-number: [39], V-number: [3067] Item type: ARMOR
Short description: a hard leather cap
Long description:
A hard leather cap is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE HEAD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 2, Value: 100, Cost/day: 20, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [3]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
