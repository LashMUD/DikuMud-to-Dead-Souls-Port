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

inherit LIB_ROOM;

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Manxam's bedroom");
    SetLong("  This is a small and cosy bedroom. The only furniture here is a large bed.");
    SetExits( ([
        "west" : "/domains/diku-alfa/room/33.zon/rm_3301",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/33.zon/obj/3303_chest_Manxam" : 1,
        ]) ); 

}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Manxam's bedroom, Of zone : 4. V-Number : 3302, R-number : 110
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
This is a small and cosy bedroom.  The only furniture here is a large bed.

Extra description keywords(s): 
bed

------- Chars present -------

--------- Contents ---------
chest

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3301
*/
