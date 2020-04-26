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
    SetShort("Free fall from the Chain");
    SetLong("This is probably the third worst place to be in this entire MUD right now.\n"+
	"You fall\n"+
        ". \n"+
        ".\n"+
        ".\n"+
        "and fall\n"+
        ".\n"+
        ".\n"+
        ".\n"+
        "and fall\n"+
        ".\n"+
        ".\n"+
        ".\n"+
        "and HIT THE GROUND WITH SUCH A *SPLUTCH* that you die horribly, but instantly.\n"+
        "Bye Cruel World. You lose all your things immediately, Sorry!!");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "south" : "",
        "west" : "",
        "up" : "",
        "down" : "",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/79.zon/rm_7914",
        "east" : "/domains/diku-alfa/room/79.zon/rm_7915",
        "south" : "/domains/diku-alfa/room/79.zon/rm_7916",
        "west" : "/domains/diku-alfa/room/79.zon/rm_7917",
        "up" : "/domains/diku-alfa/room/79.zon/rm_7918",
        "down" : "/domains/diku-alfa/room/31.zon/rm_3120",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Free fall from the Chain, Of zone : 19. V-Number : 7920, R-number : 589
Sector type : Inside Special procedure : No
Room flags: DEATH 
Description:
This is probably the third worst place to be in this entire MUD right now.
You fall
. 
.
.
and fall
.
.
.
and fall
.
.
.
and HIT THE GROUND WITH SUCH A *SPLUTCH* that you die horribly, but instantly.
Bye Cruel World. You lose all your things immediately, Sorry!!
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7914

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7915

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7916

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7917

Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7918

Direction down . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3120
*/
