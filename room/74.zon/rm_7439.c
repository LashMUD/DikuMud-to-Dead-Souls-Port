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
    SetAmbientLight(0);
    SetShort("North-western part of basilisks cave");
    SetLong("You can see some hay spread on the floor. The smell is\n"+
        "awfull here, and it makes you feel sick. This place is\n"+
        "the place where the basilisk sleep. Watch out..Mabye it is not\n"+
        "far away.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
        "hay" : "The hay is very dirty. The smell of it makes you feel sick.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/74.zon/npc/7043_basilisk" :1,
        "/domains/diku-alfa/room/74.zon/obj/7300_pack" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/74.zon/rm_7437",
        "south" : "/domains/diku-alfa/room/74.zon/rm_7440",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: North-western part of basilisks cave, Of zone : 17. V-Number : 7439, R-number : 563
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
You can see some hay spred on the floor. The smell is
awfull here, and it makes you feel sick. This place is
the place where the basilisk sleep. Watch out..Mabye it is not
far away.
Extra description keywords(s): 
hay

------- Chars present -------

--------- Contents ---------
backpack pack back

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7437

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7440
*/
