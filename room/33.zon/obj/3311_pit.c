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
    
    SetKeyName("pit");
    SetId(({"pit", "hole", "sacrificial pit"}));
    SetShort("pit for sacrifices in the north part of the hall");
    SetLong("This is where you put money and items to help Doz expand this shrine and\n"+
        "convert more people to the belief of Eru our creator.");
    SetMaxCarry(1000);
}

mixed CanGet(object ob) { return "You can't take that";}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [pit], R-number: [100], V-number: [3311] Item type: CONTAINER
Short description: the pit
Long description:
A pit for sacrifices is in the north part of the hall.
Extra description keyword(s):
----------
pit
----------
Can be worn on :NOBITS
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 0, Value: 0, Cost/day: 0, Timer: 0
In room: 3305 ,In object: None ,Carried by:Nobody
Max-contains : 1000
Locktype : 0
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
