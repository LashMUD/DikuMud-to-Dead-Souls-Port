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
#include <vendor_types.h>
#include <armor_types.h>

inherit LIB_ARMOR;

void create(){
    armor::create();

    SetKeyName("a glinting ring of silver");
    SetId("ring", "silver", "silver ring", "light");
    SetAdjectives( ({ " "," "}));
    SetShort("a glinting ring of silver");
    SetLong("A lovely silver ring");
    SetMass(10);
    SetBaseCost("silver", 5000);
    SetDamagePoints(50); //arbitrary number
    SetProtection(BLUNT, 1); //change as necessary see below
    SetProtection(BLADE, 1); //change as necessary
    SetProtection(KNIFE, 1); //change as necessary
    SetArmorType(A_RING);
    SetVendorType(VT_ARMOR);
    set_heart_beat(1);
}

void init(){
    ::init();
}

void heart_beat(){
    if( this_object()->GetWorn() )
        SetRadiantLight(10);
    else 
        SetRadiantLight(0); 
}   

/* Extra Information Original Diku Output 
Object name: [ring silver silverring], R-number: [187], V-number: [7190]
Item type: LIGHT
Short description: a glinting ring of silver
Long description:
A lovely silverring has been left here.
Extra description keyword(s): None
Can be worn on :TAKE FINGER 
Set char bits  :NOBITS
Extra flags: MAGIC 
Weight: 1, Value: 46, Cost/day: 10000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Colour : [0]
Type : [0]
Hours : [10]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : ARMOR By -10
    Affects : HITROLL By -18
*/
