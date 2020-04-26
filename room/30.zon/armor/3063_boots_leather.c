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

    SetKeyName("leather boots");
    SetId(({"boots", "leather", "leather boots" }));
    SetAdjectives(({"soft"}));
    SetShort("a pair of leather boots");
    SetLong("A pair of leather boots.");
    SetBaseCost("silver",50);    
    SetMass(30);
    SetDamagePoints(59);
    SetProtection(BLUNT,2);
    SetProtection(BLADE,4);
    SetProtection(KNIFE,4);
    SetArmorType(A_CUSTOM);
     SetRestrictLimbs(({"left foot", "right foot"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [boots], R-number: [35], V-number: [3063] Item type: ARMOR
Short description: a pair of leather boots
Long description:
A pair of leather boots lies here.
Extra description keyword(s): None
Can be worn on :TAKE FEET 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 3, Value: 50, Cost/day: 10, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [2]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
