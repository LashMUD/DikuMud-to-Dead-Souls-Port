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

    SetKeyName("chain mail jerkin");
    SetId(({"armor","chainmail","mail","chain mail", "jerkin"}));
    SetAdjectives(({""}));
    SetShort("a chain mail jerkin");
    SetLong("A chain mail jerkin.");
    SetMass(200);
    SetBaseCost("silver",1000);
    SetDamagePoints(85);
    SetProtection(BLUNT,4);
    SetProtection(BLADE,25);
    SetProtection(KNIFE,25);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"torso"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [chain mail jerkin], R-number: [50], V-number: [3078] Item type: ARMOR
Short description: a chain mail jerkin
Long description:
A chain mail jerkin is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE BODY 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 20, Value: 1000, Cost/day: 400, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [5]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
