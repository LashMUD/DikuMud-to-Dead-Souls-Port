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
    SetShort("The mudhole");
    SetLong("You are standing in a lot of mud. The mud goes to your\n"+
        "chest. You feel the precence of something IN the mud.\n"+
        "The only obivicios exit is to the west.");
    SetItems( ([ 
        "north" : "You can see nothing at all.",
        "west" : "",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7044_blob_lemure" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/74.zon/rm_7405",
        "west" : "/domains/diku-alfa/room/74.zon/rm_7407",
        ] ));
    SetDoor("north", "/domains/diku-alfa/room/doors/7405_7406");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The mudhole, Of zone : 17. V-Number : 7406, R-number : 530
Sector type : Water Swim Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in a lot of mud. The mud goes to your
chest. You feel the precence of something IN the mud.
The only obivicios exit is to the west.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : grey block
Description:
  You can see nothing at all.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 7405

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7407
*/
