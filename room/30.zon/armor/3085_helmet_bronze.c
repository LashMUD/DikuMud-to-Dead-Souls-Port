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

    SetKeyName("bronze helmet");
    SetId(({"helmet","bronze","bronze helmet"}));
    SetAdjectives(({""}));
    SetShort("a bronze helmet");
    SetLong("A bronze helmet.");
    SetMass(80);
    SetBaseCost("silver",2500);
    SetDamagePoints(78);
    SetProtection(BLUNT,12);
    SetProtection(BLADE,18);
    SetProtection(KNIFE,18);
    SetArmorType(A_HELMET);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [helmet bronze], R-number: [57], V-number: [3085] Item type: ARMOR
Short description: a bronze helmet
Long description:
A bronze helmet is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE HEAD 
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
    Affects : NONE By 
*/
