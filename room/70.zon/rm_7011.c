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
    SetShort("The muddy sewer pipe");
    SetLong("You have entered a kind of tube intersection that leads south, west and east.\n"+
        "Your legs are covered in mud up to the knees. REAL yucky! ");
    SetItems( ([ 
        "east" : "East. There's less mud in that direction, or that's your impression.",
        "south" : "That way is lost in darkness, though you sense less mud in that direction,\n"+
            "perhaps even a complete end to this sludge that surrounds you.",
        "west" : "West. The mud reaches that way too, all the way up the walls.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
        "the smell is absolutely OVERWHELMING.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/70.zon/rm_7024",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7021",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7005",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The muddy sewer pipe, Of zone : 14. V-Number : 7011, R-number : 403
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You have entered a kind of tube intersection that leads south, west and east.
Your legs are covered in mud up to the knees. REAL yucky! 
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  East. There's less mud in that direction, or that's your impression.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7024

Direction south . Keyword : (null)
Description:
  That way is lost in darkness, though you sense less mud in that direction,
perhaps even a complete end to this sludge that surrounds you.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7021

Direction west . Keyword : (null)
Description:
  West. The mud reaches that way too, all the way up the walls.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7005
*/
