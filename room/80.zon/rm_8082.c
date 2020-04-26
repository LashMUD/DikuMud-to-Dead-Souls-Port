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

    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Main Matrix");
    SetLong("   You are standing beneath a huge gate, set into an even higher \n"+
        "wall. It must be at least 300 yds tall! The gates are some 50 yds\n"+
        "high, and there is no wall above them.");
    SetItems( ([ 
        "north" : "The glassy expanse continues north along the wall.",
        "east" : "The gates are much too high to jump over (I mean, 50 yds? Come ON!).",
        "south" : "The glassy expanse continues south for as far as you can see.",
        "west" : "The glassy expanse continues south for as far as you can see.",
        "wall" : "It is metallic-looking, very smooth and immensely high.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/npc/8001_bug" :1,
        "/domains/diku-alfa/room/80.zon/obj/8901_poster" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8061",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8014",
        "west" : "/domains/diku-alfa/room/80.zon/rm_8080",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8082, R-number : 621
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing beneath a huge gate, set into an even higher 
wall. It must be at least 300 yds tall! The gates are some 50 yds
high, and there is no wall above them.
Extra description keywords(s): 
wall

------- Chars present -------
butterfly fly(MOB)

--------- Contents ---------
sign poster notice

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The glassy expanse continues north along the wall.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8061

Direction east . Keyword : (null)
Description:
  The gates are much too high to jump over (I mean, 50 yds? Come ON!).
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction south . Keyword : (null)
Description:
  The glassy expanse continues south for as far as you can see.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8014

Direction west . Keyword : (null)
Description:
  The glassy expanse continues south for as far as you can see.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8080
*/
