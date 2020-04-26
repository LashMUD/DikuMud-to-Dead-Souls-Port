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
 
    SetAmbientLight(30);
    SetShort("The Plains");
    SetLong(" You are standing on the plains. This is a vast desolate place where the\n"+
        "wind can howl undisturbed since nothing but you barrs its way. However you\n"+
        "are not the first to wander here. Before you somebody has left a small path.\n"+
        "The path looks rather bewildered and is not the kind of path to lead to\n"+
        "anywhere significant or important but it seems to have made up its mind to\n"+
        "enter the hills far away north.");
    SetExits( ([
        "north" : "/domains/diku-alfa/room/40.zon/rm_4000",
        "south" : "/domains/diku-alfa/room/35.zon/rm_3501",
        ]) );
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
Room name: The Plains, Of zone : 6. V-Number : 3500, R-number : 123
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   You are standing on the plains. This is a vast desolate place where the
wind can howl undisturbed since nothing but you barrs its way. However you
are not the first to wander here. Before you somebody has left a small path.
The path looks rather bewildered and is not the kind of path to lead to
anywhere significant or important but it seems to have made up its mind to
enter the hills far away north.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4000

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 3501
*/
