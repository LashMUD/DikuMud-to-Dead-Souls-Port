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
    SetShort("Mid-air");
    SetLong("You've just stepped into the most unlucky position in the whole of DikuMUD.\n"+
        "The result of such a foolish act should be punished with death, you know.\n"+
        "With an acceleration of approximately 9.82 metres per second per second, you\n"+
        "are now descending the Abyss. What awaits you at the bottom will continue to\n"+
        "be a mystery. Bye Cruel World.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "south" : "",
        "west" : "",
        "up" : "",
        ] ));

    SetExits( ([
        "north" : "/domains/diku-alfa/room/71.zon/rm_7119",
        "east" : "/domains/diku-alfa/room/71.zon/rm_7118",
        "south" : "/domains/diku-alfa/room/71.zon/rm_7120",
        "west" : "/domains/diku-alfa/room/71.zon/rm_7117",
        "up" : "/domains/diku-alfa/room/71.zon/rm_7115",
        ] ));
}
void init(){
   ::init();
}

/* NO_NPC's allowed in room*/
int CanReceive(object ob) {
    if(ob && !inherits(LIB_NPC, ob)){
    return 1;
    }
    else
    return 0;
}

/* Extra Information Original Diku Output 
Room name: Mid-air, Of zone : 15. V-Number : 7114, R-number : 468
Sector type : Inside Special procedure : No
Room flags: DEATH NO_MOB INDOORS PRIVATE 
Description:
You've just stepped into the most unlucky position in the whole of DikuMUD.
The result of such a foolish act should be punished with death, you know.
With an acceleration of approximately 9.82 metres per second per second, you
are now descending the Abyss. What awaits you at the bottom will continue to
be a mystery. Bye Cruel World.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7119

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7118

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7120

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7117

Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7115
*/
