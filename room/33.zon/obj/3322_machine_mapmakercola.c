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
    
    SetKeyName("coke machine");
    SetId(({"machine", "coke machine", "coke"}));
    SetShort("a Coke machine");
    SetLong("It is a big old-fashioned thing that most of all resembles a cupboard with a\n"+
        "slot large enough to hold three cans of Coke at once.  It doesn't appear to\n"+
        "have any buttons or any other means of control.  Golden letters on its front\n"+
        "tell that this is a Quifatronic K-1000 mk I.");
    SetMass(1000);
    SetBaseCost(3000);
    SetMaxCarry(3);
    SetCanClose(0);
    SetClosed(0);
    SetInventory( ([
        "/domains/diku-alfa/room/33.zon/meals/3323_cola_mapmaker" : 1,
        ]) ); 
}

mixed CanGet(object ob) { return "You can't take that";}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [coke machine], R-number: [111], V-number: [3322] Item type:
CONTAINER
Short description: a Coke machine
Long description:
A Coke machine is standing here.
Extra description keyword(s):
----------
coke machine
----------
Can be worn on :NOBITS
Set char bits  :NOBITS
Extra flags: HUM 
Weight: 101, Value: 3000, Cost/day: 300, Timer: 0
In room: 3307 ,In object: None ,Carried by:Nobody
Max-contains : 3
Locktype : 0
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains :
can
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
