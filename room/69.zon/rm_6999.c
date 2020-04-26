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
    SetShort("The Realm of the Dead");
    SetLong("You are standing on an immense, grey stone floor that stretches as far as you\n"+
        "can see in all directions.  Rough winds plunging from the dark, starless sky\n"+
        "tear savagely at your fragile body.");
    SetItems( ([ 
        "north" : "The hard floor seems to go on forever.",
        "east" : "The hard floor seems to go on forever.",
        "south" : "The hard floor seems to go on forever.",
        "west" : "The hard floor seems to go on forever.",
        "floor" : "The stone floor is the same shade of grey as the sky and is completely plain\n"+
            "and unscratched.  It is probably too hard for anything to leave as much as a\n"+
            "scratch on it.",
        ({"sky", "wind", "winds"}) : "Cold winds plunge ceaselessly at you from the dark, cloudless sky.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/69.zon/npc/6999_death" : 1,
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/69.zon/rm_6999",
        "east" : "/domains/diku-alfa/room/69.zon/rm_6999",
        "south" : "/domains/diku-alfa/room/69.zon/rm_6999",
        "west" : "/domains/diku-alfa/room/69.zon/rm_6999",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Realm of the Dead, Of zone : 13. V-Number : 6999, R-number : 392
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
You are standing on an immense, grey stone floor that stretches as far as you
can see in all directions.  Rough winds plunging from the dark, starless sky
tear savagely at your fragile body.
Extra description keywords(s): 
sky wind winds
floor

------- Chars present -------
death reaper(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The hard floor seems to go on forever.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6999

Direction east . Keyword : (null)
Description:
  The hard floor seems to go on forever.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6999

Direction south . Keyword : (null)
Description:
  The hard floor seems to go on forever.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6999

Direction west . Keyword : (null)
Description:
  The hard floor seems to go on forever.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6999
*/
