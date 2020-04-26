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

int ReadSign();

static void create() {
    room::create();

    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("Road Crossing");
    SetLong("  You are in the middle of the road cross. Roads lead in all directions.\n"+
        "A huge black iron chain as thick as a tree trunk is fastened into the ground\n"+
        "at the centre of the road cross. Its other end leads directly upwards towards\n"+
        "the sky.\n"+
        "  A road sign is here.");
    SetItems( ([
        "sign" : "The sign points in all directions:\n"+
            "  North    - %^GREEN%^Emerald Avenue%^RESET%^\n"+  
            "  East     - Park Road\n"+
            "  South    - %^GREEN%^Emerald Avenue%^RESET%^\n"+
            "  West     - Park Road\n\n"+
            "Someone has added the following with red paint:\n\n"+
            "  %^RED%^Up       - %^Redferne's Flying Citadel%^RESET%^\n",
        "up" : "The chain disappears in the clouds.",
        "chain" : "The the chain reaches the clouds high above you. It must take some really\n"+
            "powerful magic to hold such a chain in place.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/npc/3144_crier" : 1,
        ]) );
    SetRead( ([
        "sign" : (:ReadSign:),
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3133",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3136",
        "south" : "/domains/diku-alfa/room/31.zon/rm_3134",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3135",
        "up" : "/domains/diku-alfa/room/79.zon/rm_7914",
        ]) );
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/31.zon/txt/x_roads_sign.txt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Road Crossing, Of zone : 2. V-Number : 3120, R-number : 78
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are in the middle of the road cross.  Roads lead in all directions.
A huge black iron chain as thick as a tree trunk is fastened into the ground
at the centre of the road cross.  Its other end leads directly upwards towards
the sky.
A road sign is here.

Extra description keywords(s): 
chain
sign

------- Chars present -------
crier(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3133

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3136

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3134

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3135

Direction up . Keyword : (null)
Description:
  The chain disappears in the clouds.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7914
*/
