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

    SetKeyName("ironbound boots");
    SetId(({"boots", "ironbound", "iron bound", "ironbound boots", "iron bound boots" }));
    SetAdjectives(({""}));
    SetShort("a pair of iron bound boots");
    SetLong("A pair of iron bound boots.");
    SetBaseCost("silver",500);    
    SetMass(60);
    SetDamagePoints(70);
    SetProtection(BLUNT,10);
    SetProtection(BLADE,10);
    SetProtection(KNIFE,10);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left foot", "right foot"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [boots ironbound], R-number: [53], V-number: [3081] Item type: ARMOR
Short description: a pair of ironbound boots
Long description:
A pair of ironbound boots lies here.
Extra description keyword(s): None
Can be worn on :TAKE FEET 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 6, Value: 500, Cost/day: 100, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [5]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
