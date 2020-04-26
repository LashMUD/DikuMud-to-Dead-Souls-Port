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

    SetKeyName("scale mail coif");
    SetId(({"coif","scalemail","mail", "scalemail coif","scale mail" }));
    SetAdjectives(({""}));
    SetShort("a scale mail coif");
    SetLong("A scale mail coif.");
    SetMass(40);
    SetBaseCost("silver",250);
    SetDamagePoints(72);
    SetProtection(BLUNT,10);
    SetProtection(BLADE,12);
    SetProtection(KNIFE,12);
    SetArmorType(A_HELMET);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [coif scale mail], R-number: [45], V-number: [3073] Item type: ARMOR
Short description: a scale mail coif
Long description:
A scale mail coif is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE HEAD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 4, Value: 250, Cost/day: 50, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [4]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0  
*/
