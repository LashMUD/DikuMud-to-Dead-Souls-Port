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

inherit LIB_ARMOR;

static void create() {
    armor::create();

    SetKeyName("amulet");
    SetId( ({ "amulet", "strange" }) );
    SetAdjectives( ({ "", "" }) );
    SetShort("a strange looking amulet is lying here, half covered with dust");
    SetLong("Judging from the signs inscripted in the amulet, you gather it must\n"+
        "have belonged to a druid.\n"+
        "It is weird looking with symbols from nature dominating it.");
    SetMass(10);
    SetBaseCost("gold",500);
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"neck"}) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [amulet], R-number: [145], V-number: [5007] Item type: WORN
Short description: a strange amulet
Long description:
A strange looking amulet is lying here, half covered with dust.
Extra description keyword(s):
----------
amulet
----------
Can be worn on :TAKE NECK 
Set char bits  :NOBITS
Extra flags: MAGIC NODROP 
Weight: 1, Value: 500, Cost/day: 300, Timer: 0
In room: 5023 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : SAVING_ROD By 5
    Affects : NONE By 0
*/
