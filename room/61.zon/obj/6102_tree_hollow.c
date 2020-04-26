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
    
    SetKeyName("colossal tree");
    SetId(({"tree", "colossal", "colossal tree", "hollow", "hollow tree"}));
    SetShort("a colossal tree");
    SetLong("This enourmous tree must be a thousand years old.  Its rough bark looks grey\n"+
        "and pale and is decorated with scratches and clawmarks.  On its west side is a\n"+
        "small opening just above ground level.");
    SetMaxCarry(1000);
    SetItems( ([
        ({"opening", "hole"}) : "The opening is far too narrow for you to squeeze through but it looks as if the\n"+
            "tree is hollow."
        ]) );
}

void init(){
    ::init();
}

mixed CanGet(object ob) { return "You can't take that";}

/* Extra Information Original Diku Output 
Object name: [tree opening], R-number: [164], V-number: [6102]
Item type: CONTAINER
Short description: a colossal tree
Long description:
A colossal tree blocks the way westwards.
Extra description keyword(s):
----------
opening
tree
----------
Can be worn on :NOBITS
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 0, Value: 0, Cost/day: 0, Timer: 0
In room: 6103 ,In object: None ,Carried by:Nobody
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
