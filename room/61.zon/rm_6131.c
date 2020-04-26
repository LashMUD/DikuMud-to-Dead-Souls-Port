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
#include <terrain_types.h>

inherit LIB_ROOM;

static void create() {
    room::create();

    SetTerrainType(T_WOODS);
    SetAmbientLight(0);
    SetShort("The spider web");
    SetLong("You are walking along the narrow path, ducking under the sticky ropes as you\n"+
        "advance...\n\n"+
        ">\n"+
        "A huge, poisonous spider drops from above!\n"+
        "A huge, poisonous spider drops from above!\n"+
        "A huge, poisonous spider drops from above!\n\n\n"+
        "The huge, poisonous spider stings you!  You resist the poison!\n"+
        "The huge, poisonous spider stings you!  You are poisoned!\n"+
        "The huge, poisonous spider stings you!  You are poisoned!");
    SetItems( ([ 
        "east" : "",
        "west" : "",
        "up" : "",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/61.zon/rm_6130",
        "west" : "/domains/diku-alfa/room/61.zon/rm_6134",
        "up" : "/domains/diku-alfa/room/61.zon/rm_6133",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The spider web, Of zone : 12. V-Number : 6131, R-number : 376
Sector type : Forest Special procedure : No
Room flags: DARK DEATH INDOORS 
Description:
You are walking along the narrow path, ducking under the sticky ropes as you
advance...

>
A huge, poisonous spider drops from above!
A huge, poisonous spider drops from above!
A huge, poisonous spider drops from above!

>
The huge, poisonous spider stings you!  You resist the poison!
The huge, poisonous spider stings you!  You are poisoned!
The huge, poisonous spider stings you!  You are poisoned!
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6130

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6134

Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6133
*/
