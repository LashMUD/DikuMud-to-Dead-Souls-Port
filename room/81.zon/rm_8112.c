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
    SetShort("The glass road");
    SetLong("   You are standing on a glass road, suspended from nothing some 300 \n"+
        "yds off the ground. The road leads to a wide square opening in the side\n"+
        "of a great, pale-blue inverted pyramid to the south. Some two yards\n"+
        "into the opening is a wide double door, made from metal. The road \n"+
        "continues north, sweeping over the horizon.");
    SetItems( ([ 
        "north" : "",
        "south" : "Through the door you can see nothing but a grey fog, shot through occa-\n"+
            "sionally with red lightening. A faint wailing can be heard, as from souls \n"+
            "in mortal agony.",
        "road" : "The road is only visible inasmuch as it reflects you and the ground\n"+
            "below. It is somewhat disconcerting to see 100 yds of nothing \n"+
            "between one's feet and the ground.",
        ({"ground", "horizon", "matrix"}) : "Far below you, the Main Matrix spreads in all its splendour. The \n"+
            "glowing lines make out gigantic, intricate and completely incompre-\n"+
            "hensible patterns, constantly shifting and changing. The beauty is \n"+
            "only marred by the wide crack in the glass-like material going from\n"+
            "north to south, about one-half mile to your west.",
        ({"door", "opening"}) : "The doors lie in shadow, but you can easily make out the large letters\n"+
            "on them, written in a truly disgusting neon purple colour. There is a \n"+
            "large lever on the right-hand side.",
        ({"letters", "writing"}) : "               =======================================\n"+
        "                              LEVEL 10\n"+
        "                            UPPER I.C.E.\n"+
        "               (INTRUSION COUNTERMEASURES ELECTRONICS)\n\n"+
        "                          DATABASE IS DOWN\n\n"+
        "                   !   D O   N O T   E N T E R   !\n"+
        "               =======================================\n\n"+
        "You can see that it has been written using a letter template and an un-\n"+
        "usually nasty-coloured spray paint.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/81.zon/rm_8110",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The glass road, Of zone : 21. V-Number : 8112, R-number : 629
Sector type : Field Special procedure : No
Room flags: NOBITS
Description:
   You are standing on a glass road, suspended from nothing some 300 
yds off the ground. The road leads to a wide square opening in the side
of a great, pale-blue inverted pyramid to the south. Some two yards
into the opening is a wide double door, made from metal. The road 
continues north, sweeping over the horizon.
Extra description keywords(s): 
letters writing
door opening
ground horizon matrix
road

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8110

Direction south . Keyword : door
Description:
  Through the door you can see nothing but a grey fog, shot through occa-
sionally with red lightening. A faint wailing can be heard, as from souls 
in mortal agony.
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8309
*/
