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
    SetAmbientLight(0);
    SetShort("Dark smelly tunnels");
    SetLong("   You are standing in a small smelly tunnel under the plains. \n"+
        "The smell is growing stronger to the west, so is the density of the\n"+
        "slime and other undeterminable substances....");
    SetItems( ([ 
        "east" : "The unberable stench is less intensive in this direction.",
        "west" : "The tunnel seems to extend into some kind of cave........",
        ({"slime", "substance"}) : "BWADR! ... ",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/50.zon/rm_5042",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5044",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Dark smelly tunnels, Of zone : 9. V-Number : 5043, R-number : 310
Sector type : Inside Special procedure : No
Room flags: TUNNEL 
Description:
   You are standing in a small smelly tunnel under the plains. 
The smell is growing stronger to the west, so is the density of the
slime and other undeterminable substances....

Extra description keywords(s): 
slime substance

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  The unberable stench is less intensive in this direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5042

Direction west . Keyword : (null)
Description:
  The tunnel seems to extend into some kind of cave........
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5044
*/
