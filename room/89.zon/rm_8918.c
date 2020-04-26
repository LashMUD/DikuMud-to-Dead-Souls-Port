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
    SetShort("The dining hall");
    SetLong("   This is Dragons' dining hall. There is a large long solid oak table,\n"+
        "seating at least 24, with heavy, wooden chairs to match. The oak panel walls\n"+
        "are filled with paintings. There are doors to the north and east, and to the\n"+
        "west there is a wide double door opening out onto the sunlit terrace.");
    SetItems( ([ 
        "north" : "",
        "east" : "",
        "west" : "",
        ({"painting", "paintings"}) : "There are many, many beautiful paintings of famous dragons of history and\n"+
            "literature. There is a big one of Smaug, a group picture of Cuspidorian Toxic\n"+
            "Dragons, a rather fearsome picture of norse Chaos incarnate, a grainy black-\n"+
            "and-white photograph of Vorgulremik the Steel Dragon, a romantic picture of \n"+
            "Dalvenjah the Mindijaran and Allan the man become dragon. There are three\n"+
            "empty frames labeled 'The Chimerical', 'The Mythical' and 'The Hypothetical',\n"+
            "A panoramic picture of Strabo flying between the worlds dominate one wall, \n"+
            "while a dragons-eye view of Pern (with dragons in the foreground, of course) \n"+
            "fills another. There even are a few rare medieval renditions of the great \n"+
            "beast of the Revelation. Over the head of the table hangs a rather modest \n"+
            "portrait of a silver Dragon, sparkling with blue lightening, looking amused.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/89.zon/rm_8916",
        "east" : "/domains/diku-alfa/room/89.zon/rm_8915",
        "west" : "/domains/diku-alfa/room/89.zon/rm_8919",
        ] ));
SetDoor("east", "/domains/diku-alfa/room/doors/8915_8918");
SetDoor("north", "/domains/diku-alfa/room/doors/8916_8918");
SetDoor("west", "/domains/diku-alfa/room/doors/8918_8919");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The dining hall, Of zone : 22. V-Number : 8918, R-number : 655
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   This is Dragons' dining hall. There is a large long solid oak table,
seating at least 24, with heavy, wooden chairs to match. The oak panel walls
are filled with paintings. There are doors to the north and east, and to the
west there is a wide double door opening out onto the sunlit terrace.
Extra description keywords(s): 
painting paintings

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8916

Direction east . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8915

Direction west . Keyword : wide door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8919
*/
