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
    SetShort("The Sewer Junction");
    SetLong("You stand in the middle of a huge junction of sewer pipes right under\n"+
        "what you'd think was an air shaft. The sewer pipes lead to the north,\n"+
        "south, east and west. It look quite impossible to force your way up.");
    SetItems( ([ 
        "north" : "North. Mud is the floor basis in that direction. Yummy.",
        "east" : "YYEEUUCH! BOOH! THAT looks like a nice place for creepy crawlies.",
        "south" : "South. This direction looks quite nice actually. The pipe leads into \n"+
            "a bend that goes east.",
        "west" : "A few yards ahead - away from this junction - there is a pit leading down,\n"+
            "but the smell from there...>PHEWW<.",
        "mud" : "It's dark as tar and looks like something out of a toilet, on top of THAT\n"+
            "the smell is absolutely OVERWHELMING.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/rm_7008",
        "east" : "/domains/diku-alfa/room/70.zon/rm_7017",
        "south" : "/domains/diku-alfa/room/70.zon/rm_7010",
        "west" : "/domains/diku-alfa/room/70.zon/rm_7004",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Sewer Junction, Of zone : 14. V-Number : 7009, R-number : 401
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
You stand in the middle of a huge junction of sewer pipes right under
what you'd think was an air shaft. The sewer pipes lead to the north,
south, east and west. It look quite impossible to force your way up.
Extra description keywords(s): 
mud

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  North. Mud is the floor basis in that direction. Yummy.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7008

Direction east . Keyword : (null)
Description:
  YYEEUUCH! BOOH! THAT looks like a nice place for creepy crawlies.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7017

Direction south . Keyword : (null)
Description:
  North. This direction looks quite nice actually. The pipe leads into 
a bend that goes east.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7010

Direction west . Keyword : (null)
Description:
  A few yards ahead - away from this junction - there is a pit leading down,
but the smell from there...>PHEWW<.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7004
*/
