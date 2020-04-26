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

    SetKeyName("reinforced boots");
    SetId(({"boots", "reinforced", "reinforced boots" }));
    SetAdjectives(({""}));
    SetShort("a pair of reinforced boots");
    SetLong("A pair of reinforced boots.");
    SetBaseCost("silver",250);    
    SetMass(60);
    SetDamagePoints(68);
    SetProtection(BLUNT,8);
    SetProtection(BLADE,8);
    SetProtection(KNIFE,8);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left foot", "right foot"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [boots reinforced], R-number: [47], V-number: [3075] Item type: ARMOR
Short description: a pair of reinforced boots
Long description:
A pair of reinforced boots lies here.
Extra description keyword(s): None
Can be worn on :TAKE FEET 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 6, Value: 250, Cost/day: 50, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [4]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
