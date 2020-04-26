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
    SetAmbientLight(30);
    SetShort("The Sewer pipe");
    SetLong("You are in what reminds you of a foul sewer, as if you liked being here! \n"+
        "You can see two exits leading either north or south.");
    SetItems( ([ 
        "north" : "",
        "south" : "To the south you can see a strange light flowing from there.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7050",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7052",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Sewer pipe, Of zone : 14. V-Number : 7051, R-number : 435
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
You are in what reminds you of a foul sewer, as if you liked being here! 
You can see two exits leading either north or south.
Extra description keywords(s): None
------- Chars present -------
spider(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: IS-DOOR UNDEFINED  
Key no: -1
To room (V-Number): 7050

Direction south . Keyword : (null)
Description:
  To the south you can see a strange light flowing from there.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7052
*/
