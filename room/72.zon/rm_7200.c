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

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Treasury");
    SetLong("You are in a small but well equipped treasury.  You can see some writing on\n"+
        "the wall.  The celing has a funny glow, which enables you to see.  You can\n"+
        "get back into the inner lair through the stone door which is east.");
    SetItems( ([ 
        "east" : "You look back through the opening into the inner lair.",
        ({"door", "stone"}) : "This is a heavy black stone door it looks very solid.",
        "writing" : "You read the number '666'.",
        ] ));
    AddMoney("gold", 20000);
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7201",
        ] ));
    SetDoor("east", "/domains/diku-alfa/room/doors/7200_7201");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Treasury, Of zone : 16. V-Number : 7200, R-number : 482
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
You are in a small but well equipped treasury.  You can see some writing on
the wall.  The celing has a funny glow, which enables you to see.  You can
get back into the inner lair through the stone door which is east.
Extra description keywords(s): 
writing
door stone

------- Chars present -------

--------- Contents ---------
treasure coins
potion blue

------- Exits defined -------
Direction east . Keyword : door stone
Description:
  You look back through the opening into the inner lair.
Exit flag: IS-DOOR  
Key no: 7205
To room (V-Number): 7201
*/
