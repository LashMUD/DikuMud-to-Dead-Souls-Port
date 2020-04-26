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

    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("The Dark Alley");
    SetLong(" The dark alley, to the west is the common square and to the south is the\n"+
        "Guild of Thieves. The alley continues east.");
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3066_odif" : 1,
        "/domains/diku-alfa/room/30.zon/npc/3063_mercenary" : 1,
        ]) );
    SetItems( ([
        "east" : "The alley continues east.",
        "south" : "You see the entrance to the thieves guild.",
        "west" : "You see the common square.",
        "guild" : "It is the thieves guild, don't enter if you care about your health or money.",
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/30.zon/rm_3045",
        "south" : "/domains/diku-alfa/room/30.zon/rm_3027",
        "west" : "/domains/diku-alfa/room/30.zon/rm_3025",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Dark Alley, Of zone : 1. V-Number : 3026, R-number : 32
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   The dark alley, to the west is the common square and to the south is the
Guild of Thieves.  The alley continues east.

Extra description keywords(s): 
guild

------- Chars present -------
odif yltsaeb(MOB)

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The alley continues east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3045

Direction south . Keyword : (null)
Description:
  You see the entrance to the thieves guild.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3027

Direction west . Keyword : (null)
Description:
  You see the common square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3025
*/
