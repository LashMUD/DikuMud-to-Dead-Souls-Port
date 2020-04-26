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
    SetShort("The dark hole");
    SetLong("   You are standing at a hole, a small passage leads south. You see\n"+
	"some inscriptions on the wall, most of 'em the usual stuff, like :\n"+
	"'Super Snude was here' and 'Why does the mayor likes secretarys with\n"+
	"small hands?' - But one inscription gets you attention, it says : \n"+
	"The Balrog is ALIVE...");
    SetItems( ([ 
        "south" : "",
        "inscription" : "It looks as if it was written with bones... The writers own bones.",
        ] ));
    SetExits( ([
        "south" : "/domains/diku-alfa/room/41.zon/rm_4151",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The dark hole, Of zone : 8. V-Number : 4150, R-number : 246
Sector type : Forest Special procedure : No
Room flags: DARK NO_MOB INDOORS 
Description:
   You are standing at a hole, a small passage leads south. You see
some inscriptions on the wall, most of 'em the usual stuff, like :
'Super Snude was here' and 'Why does the mayor likes secretarys with
small hands?' - But one inscription gets you attention, it says : 
The Balrog is ALIVE...

Extra description keywords(s): 
inscription

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4151
*/
