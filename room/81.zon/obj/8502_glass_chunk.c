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

inherit LIB_ITEM;


static void create() {
    item::create();

    SetKeyName("chunk of glass");
    SetId( ({ "chunck", "square", "glass" }) );
    SetAdjectives( ({ "", "" }) );
    SetShort("a chunk of glass");
    SetLong("It is 10 X 15 X 2 inches, and quite regular. It is transparent, and, while\n"+
        "probably not glass, it still feels like glass. There are a large number\n"+ 
        "of tiny, needlethin blue lines inside it, and a 1 X 1 inch square red\n"+ 
        "button near one corner.");
    SetItems( ([
        ({"button", "red"}) : "As you push the button, a message appears on the slab, in glowing\n"+
            "blue letters:\n"+
            "                       SPECIAL EFFECTS PROGRAM\n"+
            "                          NOT OPERABLE YET",
        ]) );             
    SetMass(20);
    SetBaseCost("gold", 10);
}

void init(){
    ::init();
}

/*Extra Information Original Diku Output
Object name: [chunk square], R-number: [249], V-number: [8502]
Item type: OTHER
Short description: a chunk of glass
Long description:
There is chunk of glass lying here.
Extra description keyword(s):
----------
button red
chunk glass
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: HUM 
Weight: 2, Value: 10, Cost/day: 200, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
