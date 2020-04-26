
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

    SetKeyName("sign");
    SetId( ({ "sign", "road sign", "news sign", "pole" }) );
    SetAdjectives( ({ "wooden" }) );
    SetShort("a large sign mounted on a pole standing by the roadside");
    SetLong("A sign with some writing on it.\n"+
        "'Read' or 'look at letters on sign' to see what it says.");
    SetItems( ([
        "pole" : "Not the most interesting pole in the world.\n"+
            "Better leave it here, though, as it holds the sign in place.",
        ( {"letters", "writing"} ) : "It says :-\n\n"+
            "                         Haon-Dor\n"+
            "                         --------\n\n"+
            " This is the Forest of Haon-Dor.  Enter at your own risk.\n"+
            "     Please report any strange occurrences to Quifael.\n\n"+
            "          To the north lies the village of Wyr.\n",
        ]) );
    SetRead( ([
        ( {"letters", "writing"} ) : "It says :-\n\n"+
            "                         Haon-Dor\n"+
            "                         --------\n\n"+
            " This is the Forest of Haon-Dor.  Enter at your own risk.\n"+
            "     Please report any strange occurrences to Quifael.\n\n"+
            "          To the north lies the village of Wyr.\n",
        ]) );
    SetMass(1000);    
}

void init(){
    ::init();
}

mixed CanGet(object ob) { return "You can't take that";}

/* Extra Information Original Diku Output 
Object name: [sign], R-number: [161], V-number: [6012] Item type: UNDEFINED
Short description: a large sign
Long description:
A large sign mounted on a pole is standing by the roadside.
Extra description keyword(s):
----------
sign
pole
----------
Can be worn on :NOBITS
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 100, Value: 0, Cost/day: 0, Timer: 0
In room: 6000 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
