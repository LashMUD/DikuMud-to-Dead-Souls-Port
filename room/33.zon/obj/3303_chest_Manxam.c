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

static void create(){
    ::create();
    
    SetKeyName("large chest");
    SetId(({"chest", "large chest"}));
    SetShort("a large chest standing next to the bed");
    SetLong("It looks too bulky to be moved and does not appear to be equipped with a\n"+
        "lock.");
    SetMass(1940);
    SetBaseCost(100);
    SetMaxCarry(3000);
    SetCanClose(1);
    SetClosed(0);
    SetInventory( ([
        "/domains/diku-alfa/room/33.zon/weap/3304_mace_Manxams" : 1,
        "/domains/diku-alfa/room/33.zon/armor/3305_bplate_Manxams" : 1,
        "/domains/diku-alfa/room/33.zon/armor/3306_leggings_Manxams" : 1,
        ]) ); 
}

mixed CanGet(object ob) { return "You can't take that";}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [chest], R-number: [92], V-number: [3303] Item type: CONTAINER
Short description: a large chest
Long description:
A large chest is standing next to the bed.
Extra description keyword(s):
----------
chest
----------
Can be worn on :NOBITS
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 194, Value: 0, Cost/day: 1000000, Timer: 0
In room: 3302 ,In object: None ,Carried by:Nobody
Max-contains : 100
Locktype : 1
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains :
leggings
brass
mace
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
