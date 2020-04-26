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

    SetTerrainType(T_ROUGH);
    SetAmbientLight(0);
    SetShort("On the walls of the Abyss");
    SetLong("You are clutching the steps on the wall so that you don't fall to the ground\n"+
        "down below.\n"+
        "A large sign says : I haven't gotten any further ... Yet. But  I'm pushing\n"+
        "                    to get finished with this sewer. \n"+
        "                                           Greetings and Good Health :)\n\n"+
        "                                                     Redferne The Gentle\n"+
        "This stops your journey down, the only exit is up.");
    SetItems( ([ 
        "up" : "",
        ] ));
    SetExits( ([
        "up" : "/domains/diku-alfa/room/72.zon/rm_7279",
        ] ));
}

void init(){
   ::init();
}

/* NO_NPC's allowed in room*/
int CanReceive(object ob) {
    if(ob && !inherits(LIB_NPC, ob)){
    return 1;
    }
    else
    return 0;
}

/* Extra Information Original Diku Output 
Room name: On the walls of the Abyss, Of zone : 16. V-Number : 7399, R-number : 523
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You are clutching the steps on the wall so that you don't fall to the ground
down below.
A large sign says : I haven't gotten any further ... Yet. But  I'm pushing
                    to get finished with this sewer. 
                                           Greetings and Good Health :)

                                                     Redferne The Gentle
This stops your journey down, the only exit is up.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7279
*/
