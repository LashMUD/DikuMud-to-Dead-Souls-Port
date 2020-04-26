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
#include <medium.h>

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("outdoors");
    SetAmbientLight(30);
    //SetTerrainType(T_SURFACE);
    //SetMedium(MEDIUM_SURFACE);
    SetShort("Under the Bridge");
    SetLong("  The arch under the bridge is covered by seaweed for one foot above the\n"+
        "surface of the river. The water gently flows through an opening in the lower\n"+
        "part of the city wall.");
    SetItems( ([
        "west" : "You see the river flowing west into the Forest of Haon-Dor.",
        ({"wall", "walls"}) : "It is built from large grey rocks that have been fastened to each other with\n"+
            "some kind of mortar. Looks pretty solid."
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/32.zon/rm_3201",
        //no room leads west
        ]) );
}

int CanReceive(mixed ob){
    ob = present("boat",this_player());
        if(!ob) {
            write("You need a boat to go there.");
        return 0;
        }
    return 1;
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Under the Bridge, Of zone : 3. V-Number : 3200, R-number : 102
Sector type : Water NoSwim Special procedure : No
Room flags: NOBITS
Description:
   The arch under the bridge is covered by seaweed for one foot above the
surface of the river.  The water gently flows through an opening in the lower
part of the city wall.

Extra description keywords(s): 
wall

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3201

Direction west . Keyword : (null)
Description:
  You see the river flowing west into the Forest of Haon-Dor.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
