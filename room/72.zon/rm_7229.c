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
    SetShort("The strange sewer");
    SetLong("You are in a very strange sewer indeed, there are some odd scrates on the\n"+
        "pipe wall, as from a gigantic rat. And you can see a lot of organic decay\n"+
        "like bones from animals AND humans. West the drain runs slightly upwards.");
    SetItems( ([ 
        "east" : "You see a sewer junction.",
        "west" : "You see a slimy sewer drain.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/72.zon/rm_7224",
        "west" : "/domains/diku-alfa/room/72.zon/rm_7230",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The strange sewer, Of zone : 16. V-Number : 7229, R-number : 508
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You are in a very strange sewer indeed, there are some odd scrates on the
pipe wall, as from a gigantic rat. And you can see a lot of organic decay
like bones from animals AND humans. West the drain runs slightly upwards.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  You see a sewer junction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7224

Direction west . Keyword : (null)
Description:
  You see a slimy sewer drain.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7230
*/
