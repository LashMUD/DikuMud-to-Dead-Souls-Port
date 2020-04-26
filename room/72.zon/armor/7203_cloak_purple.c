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
#include <damage_types.h>
#include <armor_types.h>

inherit LIB_ARMOR;

void create(){
    armor::create();

    SetKeyName("purple cloak");
    SetId("cloak", "purple", "purple cloak");
    SetAdjectives( ({ " "," "}));
    SetShort("a purple cloak");
    SetLong("This is a very fine made cloak from an unknown material,\n"+
       "in a nice purple color.");
    SetMass(200);
    SetBaseCost("silver", 5000);
    SetDamagePoints(200); //unknown mysterious material with high damage points
    SetProtection(BLUNT,20); //change as necessary
    SetProtection(BLADE,20 ); //change as necessary
    SetProtection(KNIFE,20); //change as necessary
    SetArmorType(A_CLOAK);
    SetRestrictLimbs(({"torso", "neck"}));
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [cloak purple], R-number: [194], V-number: [7203]
Item type: OTHER
Short description: a purple cloak
Long description:
A purple cloak lies on the floor.
Extra description keyword(s):
----------
cloak purple
----------
Can be worn on :TAKE NECK 
Set char bits  :NOBITS
Extra flags: MAGIC 
Weight: 20, Value: 5000, Cost/day: 2500, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : SAVING_SPELL By 1
    Affects : ARMOR By -10
*/
