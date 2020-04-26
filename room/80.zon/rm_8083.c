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

    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("Main Matrix");
    SetLong("   You are standing under the the highest wall you've ever seen.\n"+
        "From where you stand, near the south-eastern corner, a slope leads\n"+
        "up to a wide portal set in the south wall, some 40 yds up.");
    SetItems( ([ 
        "north" : "Around the corner, the glass stretches along the wall beyond the \n"+
            "horizon.",
        "east" : "The glassy expanse continues for as far as you can see.",
        "south" : "The glassy expanse continues for as far as you can see.",
        "west" : "The slope leads up to a portal, through which you can see a swirling \n"+
            "grey fog, shot through with lightening. Occasionally a tendril of fog \n"+
            "snakes out, looking as if sniffing, then withdraws with a shudder. From \n"+
            "within, a faint wailing can be heard, as if from souls in agony.",
        "wall" : "It is metallic-looking, very smooth and immensely high.",
        ({"gate", "portal", "slope"}) :
            "The slope leads up to a portal, through which you can see a swirling\n"+
            "grey fog, shot through with red lightening. Occasionally a tendril of \n"+
            "fog snakes out, looking as if sniffing, then withdraws with a shudder. \n"+
            "From within, a faint wailing can be heard, as if from souls in agony.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/obj/8901_poster" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8053",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8045",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8002",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8083, R-number : 622
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing under the the highest wall you've ever seen.
From where you stand, near the south-eastern corner, a slope leads
up to a wide portal set in the south wall, some 40 yds up.
Extra description keywords(s): 
gate portal slope
wall

------- Chars present -------

--------- Contents ---------
sign poster notice

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  Around the corner, the glass stretches along the wall beyond the 
horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8053

Direction east . Keyword : (null)
Description:
  The glassy expanse continues for as far as you can see.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8045

Direction south . Keyword : (null)
Description:
  The glassy expanse continues for as far as you can see.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8002

Direction west . Keyword : (null)
Description:
  The slope leads up to a portal, through which you can see a swirling 
grey fog, shot through with lightening. Occasionally a tendril of fog 
snakes out, looking as if sniffing, then withdraws with a shudder. From 
within, a faint wailing can be heard, as if from souls in agony.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
