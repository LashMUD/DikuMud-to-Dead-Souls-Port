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

    SetKeyName("a strange white skull");
    SetId("skull", "white skull");
    SetAdjectives( ({ " "," "}));
    SetShort("a strange white skull");
    SetLong("The skull has two small horns in the forehead. You notice some writing on\n"+
        "the inside.");
    SetItems( ([
        ({"writing", "text"}) : "You read the number '666'.",
        ]) );
    SetRead( ([
        ({"writing", "text"}) : "You read the number '666'.",
        ]) );
    SetMass(300);
    SetBaseCost("silver", 0);
    SetDamagePoints(100);
    SetProtection(BLUNT, 1); //change as necessary
    SetProtection(BLADE, 1); //change as necessary
    SetProtection(KNIFE, 1); //change as necessary
    SetArmorType(A_HELMET);
    SetRestrictLimbs(({"head"}));
    SetVendorType(VT_ARMOR);
    SetPreventDrop("You can't drop it. It must be CURSED!");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [skull white], R-number: [197], V-number: [7206]
Item type: ARMOR
Short description: a strange white skull
Long description: A strange white skull lies on the floor looking at you.
Extra description keyword(s):
----------
writing text
white skull
----------
Can be worn on: TAKE HEAD 
Set char bits: NOBITS
Extra flags: MAGIC NODROP 
Weight: 30, Value: 0, Cost/day: 2500, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [1]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: DEX By -4
    Affects: NONE By 0
*/
