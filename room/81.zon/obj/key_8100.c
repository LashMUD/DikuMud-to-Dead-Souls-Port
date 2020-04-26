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

    SetKeyName("key_8100");
    SetId( ({ "key", "aluminum strip" }) );
    SetAdjectives( ({ "aluminum strip", "strip", "aluminum" }) );
    SetShort("a small strip of aluminum");
    SetLong("A small strip of aluminum.\n"+
        "It is app. 2 X 5\" big, with a purple stripe down the middle of the long\n"+ 
        "side. Arrayed by the stripe are a number of very small holes, obviously\n"+
        "set in some meaningful pattern.");
    SetItems( ([
        ({"pattern"}) : "You can't understand what it is supposed to mean. It looks like this:\n"+
            "... .. .   . .. ... .   . ..\n"+
            ".  .. .... ... ... .... .. .\n"+
            "============================\n"+
            "... ... ... .      .   ... .\n"+
            ".         . . ....       . .",
        ]) );        
    SetMass(0);
    SetBaseCost("gold",0);
    SetDisableChance(100);
}

void init(){
    ::init();
}

/*Extra Information Original Diku Output
Object name: [strip aluminum], R-number: [235], V-number: [8100]
Item type: KEY
Short description: a small strip of aluminum
Long description:
A small strip of aluminum is lying here.
Extra description keyword(s):
----------
pattern
strip aluminum
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 0, Value: 0, Cost/day: 100, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Keytype : 0
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
