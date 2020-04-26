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
    SetShort("The greenhouse");
    SetLong("   This is Dragons' greenhouse. Green light filters in slantwise through the\n"+
        "plants, giving the room a subtropical ambience. It is not really hot in here,\n"+
        "though, rather a pleasantly warm temperature. The walls are all windows, except \n"+
        "the eastern one joining the greenhouse to the main building, but it is hard to \n"+
        "see out for all the greenery here. There is a set of easy-chairs and a glass\n"+
        "coffee table. To the south, there is a wide double door out to a sunlit \n"+
        "terrace.");
    SetItems( ([ 
        "east" : "",
        "south" : "",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/89.zon/rm_8916",
        "south" : "/domains/diku-alfa/room/89.zon/rm_8919",
        ] ));
SetDoor("south", "/domains/diku-alfa/room/doors/8917_8919");
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The greenhouse, Of zone : 22. V-Number : 8917, R-number : 654
Sector type : Inside Special procedure : No
Room flags: INDOORS PRIVATE 
Description:
   This is Dragons' greenhouse. Green light filters in slantwise through the
plants, giving the room a subtropical ambience. It is not really hot in here,
though, rather a pleasantly warm temperature. The walls are all windows, except 
the eastern one joining the greenhouse to the main building, but it is hard to 
see out for all the greenery here. There is a set of easy-chairs and a glass
coffee table. To the south, there is a wide double door out to a sunlit 
terrace.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8916

Direction south . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED  
Key no: -1
To room (V-Number): 8919
*/
