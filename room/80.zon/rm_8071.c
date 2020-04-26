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
    SetLong("   You are standing on the glass surface next to a tower thrusting up\n"+
        "from a steep hole. A narrow bridge leads across what is essentially a \n"+
        "moat, across to a wide gate in the tower wall.");
    SetItems( ([ 
        "north" : "The black glassy surface stretches for as far as you can see.",
        "east" : "Near the horizon you can see the top of a huge wall, stretching north \n"+
            "and south. To the north it disappears beyond some crystalline structures,\n"+
            "to the south it continues past the horizon.",
        "south" : "The glassy surface stretches south for as far as you can see.",
        "west" : "Through the door you can see nothing but a grey fog, shot through\n"
            "occasionally with red lightening. A faint wailing can be heard, as from souls\n"+
            "in mortal agony.",
        ({"door", "gate"}) : "The doors lie in shadow, but you can easily make out the large letters\n"+
            "on them, written in a truly disgusting neon purple colour.",
            "letters" : "               ======================================\n"+
            "                             POWERTOWER   \n"+
	    "                      AUTHORIZED PERSONNEL ONLY\n\n"+
            "                          DATABASE IS DOWN\n\n"+
            "                   !   D O   N O T   E N T E R   !\n"+
            "                           ======================================\n\n"+
            "You can see that it has been written using a letter template and an\n"+
            "unusually nasty-coloured spray paint.",
        ({"figure", "guard", "guardian", "person"}) : "You can't make out details at this distance.",
        ({"road", "bridge"}) : "The glass road, hanging unsupported in the air, is only visible\n"+
            "due to the light it sheds, reflecting the lines in the ground.",
        "tower" : "The tower is made from the same material as the rest of the matrix; \n"+
            "looking closer you can see that the matrix just dips down into the moat-\n"+
            "like hole, then thrusts up as the tower walls. The lines and patterns \n"+
            "continue down the hole and up the tower, but they are much more twisted\n"+
            "and convoluted here. Near the top of the tower there is a balcony, and\n"+
            "from the flat roof a glass bridge or road leads away, over the horizon\n"+
            "to the northeast. You can barely make out a guardian-like figure standing \n"+
            "on the top.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/80.zon/rm_8061",
        "east" : "/domains/diku-alfa/room/80.zon/rm_8072",
        "south" : "/domains/diku-alfa/room/80.zon/rm_8001",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Main Matrix, Of zone : 20. V-Number : 8071, R-number : 618
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on the glass surface next to a tower thrusting up
from a steep hole. A narrow bridge leads across what is essentially a 
moat, across to a wide gate in the tower wall.
Extra description keywords(s): 
tower
road bridge
figure guard guardian person
letters
door gate

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The black glassy surface stretches for as far as you can see.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8061

Direction east . Keyword : (null)
Description:
  Near the horizon you can see the top of a huge wall, stretching north 
and south. To the north it disappears beyond some crystalline structures,
to the south it continues past the horizon.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8072

Direction south . Keyword : (null)
Description:
  The glassy surface stretches south for as far as you can see.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8001

Direction west . Keyword : gate door
Description:
  Through the door you can see nothing but a grey fog, shot through occa-
sionally with red lightening. A faint wailing can be heard, as from souls
in mortal agony.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8309
*/
