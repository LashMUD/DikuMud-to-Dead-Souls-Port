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

    SetKeyName("hard leather boots");
    SetId(({"boots", "leather", "hard leather boots" }));
    SetAdjectives(({""}));
    SetShort("a pair of hard leather boots");
    SetLong("A pair of hard leather boots.");
    SetBaseCost("silver",100);    
    SetMass(40);
    SetDamagePoints(64);
    SetProtection(BLUNT,6);
    SetProtection(BLADE,6);
    SetProtection(KNIFE,6);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left foot", "right foot"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [boots hard], R-number: [41], V-number: [3069] Item type: ARMOR
Short description: a pair of hard leather boots
Long description: 
A pair of hard leather boots lies here.
Extra description keyword(s): None
Can be worn on :TAKE FEET 
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
    Affects : NONE By 
*/
