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
    SetShort("On the River");
    SetLong("  The river enters from a hole in the eastern city wall. The hole has been\n"+
        "blocked by several vertically positioned iron bars set into the wall.");
    SetItems( ([
        "east" : "The iron bars make it impossible to pass through the hole in the wall.\n"+
            "Beyond the bars you see the great plains."
        ]) );
    SetExits( ([
        // no exit leads east
        "west" : "/domains/diku-alfa/room/32.zon/rm_3204",
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
Room name: On the River, Of zone : 3. V-Number : 3205, R-number : 107
Sector type : Water NoSwim Special procedure : No
Room flags: NOBITS
Description:
   The river enters from a hole in the eastern city wall.  The hole has been
blocked by several vertically positioned iron bars set into the wall.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The iron bars make it impossible to pass through the hole in the wall.
Beyond the bars you see the great plains.

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3204
*/
