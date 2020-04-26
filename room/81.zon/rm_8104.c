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
    SetShort("The ring");
    SetLong("   You are standing in a long corridor, curving north and west. There \n"+
        "is a noticeable layer of fine dust covering everything here. The \n"+
        "grey-painted walls are flaking, revealing more of the glass-like \n"+
        "material that also covers the ground above. There is a wide crack in \n"+
        "the ceiling above, but it is too high for you to reach.");
    SetItems( ([ 
        "north" : "The corridor continues to curve left for as long as your light \n"+
            "reaches.",
        "west" : "For as long as you can see, the corridor keeps turning right.",
        ({"walls", "wall", "glass"}) : "There is something written on the glass-like material in faintly \n"+
            "glowing blue letters, only partially covered by the paint.",
        ({"writing", "letters"}) : "The letters look familiar enough, but the text is wholly \n"+
            "incomprehensible:\n\n"+
            "              ... :=P^; Q^.N:=P^.N; Q^.P:=P; I ...\n"+
            "and\n"+
            "              ... B087 A0 72C0 34760F 0A ...\n\n"+
            "Perhaps it is some strange and ancient magic?",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/81.zon/obj/8502_glass_chunk" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/81.zon/rm_8102",
        "west" : "/domains/diku-alfa/room/81.zon/rm_8103",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The ring, Of zone : 21. V-Number : 8104, R-number : 626
Sector type : Inside Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are standing in a long corridor, curving north and west. There 
is a noticeable layer of fine dust covering everything here. The 
grey-painted walls are flaking, revealing more of the glass-like 
material that also covers the ground above. There is a wide crack in 
the ceiling above, but it is too high for you to reach.
Extra description keywords(s): 
writing letters
walls wall glass

------- Chars present -------

--------- Contents ---------
chunk square

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The corridor continues to curve left for as long as your light 
reaches.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8102

Direction west . Keyword : (null)
Description:
  For as long as you can see, the corridor keeps turning right.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8103
*/
