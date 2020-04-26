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

    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("The ordinary junction");
    SetLong("This looks like an ordinary junction, actually it seems very quiet\n"+
        "here. The pipelines lead west, east and north.");
    SetItems( ([ 
        "north" : "To the north you can see a junction like this one, leading north and west.",
        "east" : "To the east there's nothing of particular interest, though there's a \n"+
            "junction with pipelines leading norht and east.",
        "west" : "There's a bend to the west leading north.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7017",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7031",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7010",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The ordinary junction, Of zone : 14. V-Number : 7018, R-number : 410
Sector type : City Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
This looks like an ordinary junction, actually it seems very quiet
here. The pipelines lead west, east and north.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north you can see a junction like this one, leading north and west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7017

Direction east . Keyword : (null)
Description:
  To the east there's nothing of particular interest, though there's a 
junction with pipelines leading norht and east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7031

Direction west . Keyword : (null)
Description:
  There's a bend to the west leading north.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7010
*/

/* Extra Information Original Diku Output 
Room name: The ordinary junction, Of zone : 14. V-Number : 7018, R-number : 410
Sector type : City Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
This looks like an ordinary junction, actually it seems very quiet

here. The pipelines lead west, east and north.

Extra description keywords(s): None
------- Chars present -------
Lash(PC)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  To the north you can see a junction like this one, leading north and west.

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7017

Direction east . Keyword : (null)
Description:
  To the east there's nothing of particular interest, though there's a 

junction with pipelines leading norht and east.

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7031

Direction west . Keyword : (null)
Description:
  There's a bend to the west leading north.

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7010

*/
