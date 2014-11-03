
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
#include <vendor_types.h>

inherit LIB_ITEM;

static void create() {
    item::create();
    
    SetKeyName("the poster");
    SetId( ({ "sign", "poster", "notice" }) );
    SetAdjectives( ({ "canvas" }) );
    SetShort("the poster");
    SetLong("A large poster, with big, brightly-coloured letters has been\n"+
            "pasted on the wall here.");
    SetRead( ([
            ( {"sign", "poster", "letters"} ) : 
                "It is a wonderful Boris Vallejo painting of a husky barbarian and a\n"+
                "scantily-clad lady, with large letters saying:\n\n"+
                "                   looking for a\n"+
                "                           GOOD TIME?\n\n"+
                "and at the bottom:\n\n"+
                "               NEW & EXCITING Attration, Right Here:\n"+
                "                       The MAZE, with:\n\n"+
                "                       * Mountains & Valleys *\n"+
                "                       * Tunnels & Trolls    *\n"+
                "                       * Danger & Adventure  *\n\n"+
                "                               presented to You by\n"+
                "                                       the DRAGON\n\n"+
                "Pasted across it is a white paper with atrocious purple letters,\n"+
                "obstructing the view of the better parts.",
            ( {"paper", "white"} ) : 
                "The text is spray-painted on using a letter template:\n\n"+
                "                ====================================\n"+
                "                           N O   E N T R Y\n\n"+
                "                      ACCESS TEMPORARILY CLOSED\n"+
                "                         SECTOR UNDER REPAIR\n\n"+
                "                                  / MATRIX CONTROL\n"+
                "                ====================================\n\n"+
                "It is annoying, since you can't see the _good_ parts of the Vallejo\n"+
                "poster, but it seems to be glued on pretty solid.",
       ]) );
    SetMass(0);
    SetBaseCost("gold", 0);
    SetVendorType(VT_ALL);    
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [sign poster notice], R-number: [252], V-number: [8901]
Item type: OTHER
Short description: the poster
Long description:
A large poster, with big, brightly-coloured letters has been 
pasted on the wall here.
Extra description keyword(s):
----------
paper white
sign poster letters
----------
Can be worn on :NOBITS
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 0, Value: 0, Cost/day: 0, Timer: 0
In room: 3016 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
