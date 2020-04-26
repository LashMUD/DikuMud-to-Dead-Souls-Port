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

    SetKeyName("chain mail coif");
    SetId(({"coif","chainmail","mail","chainmail coif","chain mail" }));
    SetAdjectives(({"shiny", "bright"}));
    SetShort("a chain mail coif");
    SetLong("A chain mail coif.");
    SetBaseCost("silver",500);    
    SetDamagePoints(75);
    SetMass(40);
    SetProtection(BLUNT,4);
    SetProtection(BLADE,15);
    SetProtection(KNIFE,15);
    SetArmorType(A_HELMET);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [coif chain mail], R-number: [51], V-number: [3079] Item type: ARMOR
Short description: a chain mail coif
Long description:
A chain mail coif is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE HEAD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 4, Value: 500, Cost/day: 100, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [5]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0  
*/
