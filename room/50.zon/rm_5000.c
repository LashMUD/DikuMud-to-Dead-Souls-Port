/* Based on Diku MUD Alfa.  Program and Concept created by
Sebastian Hammer, Michael Seifert, Hans Henrik Staerfeldt,
Tom Madsen, and Katja Nyboe.
http://www.dikumud.com

Modified by Lash (Christopher Coker) for use with:

The Dead Souls Mud Library version 2
developed by Cratylus
http://www.dead-souls.net
 */

#include <lib.h>
#include <terrain_types.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    
    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("Path in the plains");
    SetLong("   You are walking on a path situated in the rough plains.\n"+
	"You feel the strong winds blow through your hair as you study\n"+
	"the beautifull landscaping here. The path continues east, north\n"+
	"and west leads to plains and you see the path around Midgaard\n"+
	"to the south.");
    SetItems( ([ 
        "north" : "You see the grassy plains.",
        "east" : "You notice nothing special, except that the path in the plains continues.",
        "south" : "Towards the south you notice the citywall of Midgaard.",
        "west" : "You see the grassy plains.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/50.zon/rm_5015",
        "east" : "/domains/diku-alfa/room/50.zon/rm_5001",
        "south" : "/domains/diku-alfa/room/39.zon/rm_3904",
        "west" : "/domains/diku-alfa/room/50.zon/rm_5016",
        ] ));
}

void init(){
   ::init();
}

int CanReceive(object ob) {
    if(ob && !ob->GetProperty("STAY_ZONE")){
        return 1;
    }
    else
        return 0;
}

/* Extra Information Original Diku Output 
  Room name: Path in the plains, Of zone : 9. V-Number : 5000, R-number : 269
  Sector type : Field Special procedure : No
  Room flags: NOBITS
  Description:
     You are walking on a path situated in the rough plains.
  You feel the strong winds blow through your hair as you study
  the beautifull landscaping here. The path continues east, north
  and west leads to plains and you see the path around Midgaard
  to the south.

  Extra description keywords(s): None
  ------- Chars present -------

  --------- Contents ---------

  ------- Exits defined -------
  Direction north . Keyword : (null)
  Description:
    You see the grassy plains.
  Exit flag: NOBITS 
  Key no: -1
  To room (V-Number): 5015

  Direction east . Keyword : (null)
  Description:
    You notice nothing special, except that the path in the plains continues.
  Exit flag: NOBITS 
  Key no: -1
  To room (V-Number): 5001

  Direction south . Keyword : (null)
  Description:
    Towards the south you notice the citywall of Midgaard.
  Exit flag: NOBITS 
  Key no: -1
  To room (V-Number): 3904

  Direction west . Keyword : (null)
  Description:
    You see the grassy plains.
  Exit flag: NOBITS 
  Key no: -1
  To room (V-Number): 5016
*/
