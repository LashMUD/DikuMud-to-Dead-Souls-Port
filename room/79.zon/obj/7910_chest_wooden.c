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

inherit LIB_STORAGE;

void create(){
    storage::create();

    SetKeyName("a wooden chest");
    SetId(({"chest", "wooden chest"}));
    SetShort("a wooden chest");
    SetLong("It is a robust chest made from short, heavy planks that have been fastened\n"+
        "together with tenons.  It is equipped with a simple brass lock.");
    SetMass(400);
    SetBaseCost(100);
    SetMaxCarry(1040);
    SetPreventPut("You cannot put this in there!");
    AddMoney("gold", 1000);
    SetInventory( ([
        "/domains/diku-alfa/room/79.zon/obj/7208_stick_light" : 1,
        ]) );
    SetCanClose(1);
    SetClosed(1);
    SetCanLock(1);
    SetLocked(1);
    SetKey("key_7911");
}

void init(){
    ::init();
}

mixed CanGet(object ob) { return "You can't take that";}

/* Extra Information Original Diku Output
Object name: [chest], R-number: [231], V-number: [7910]
Item type: CONTAINER
Short description: a wooden chest
Long description:
A wooden chest stands in the corner.
Extra description keyword(s):
----------
chest
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 400, Value: 100, Cost/day: 30000, Timer: 0
In room: 7903 ,In object: None ,Carried by:Nobody
Max-contains : 100
Locktype : 15
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
