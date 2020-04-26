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

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("The pit");
    SetLong("You stand in a section of a pipe that leads to a dead end. In the floor\n"+
        "there's a pit leading down. There are bars set in the side of the pit wall\n"+
        "functioning as a ladder.");
    SetItems( ([ 
        "west" : "West. You can see a dimly lit quadruple junction with an exit up.",
        "down" : "Down the pit it's utterly dark you can't see a thing.",
        ] ));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/70.zon/rm_7030",
        "down" : "/domains/diku-alfa/room/71.zon/rm_7122",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The pit, Of zone : 14. V-Number : 7036, R-number : 422
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in a section of a pipe that leads to a dead end. In the floor
there's a pit leading down. There are bars set in the side of the pit wall
functioning as a ladder.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  West. You can see a dimly lit quadruple junction with an exit up.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7030

Direction down . Keyword : (null)
Description:
  Down the pit it's utterly dark you can't see a thing.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7122
*/
