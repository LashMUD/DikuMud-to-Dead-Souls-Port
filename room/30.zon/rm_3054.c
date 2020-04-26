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
    SetShort("By the Temple Altar");
    SetLong("  You are by the temple altar in the northern end of the Temple of Midgaard.\n"+
        "A huge altar made from white polished marble is standing in front of you and\n"+
        "behind it is a ten foot tall sitting statue of Odin, the King of the Gods.");
    SetItems( ([
        "altar" : "Even though the altar is more than ten feet long it appears to be made from a\n"+
            "single block of white virgin marble.",
        ({"statue", "odin", "king", "god"}) : 
            "The statue represents the one-eyed Odin sitting on a his throne. He has\n"+
            "long, grey hair and beard and a strict look on his face. On top of the\n"+
            "throne, just above his shoulders, his two ravens Hugin and Munin are sitting\n"+
            "and at his feet are his wolves Gere and Freke.",
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/30.zon/rm_3001",
        "up" : "/domains/Etnar/Wyr/room/rm_02",
        
      ]) );
}

void init(){
    ::init();
}

int CanReceive(object ob) {
    if(playerp(ob) && !creatorp(ob)){
        message("info","\nSorry! Only creators allowed north.\n",ob);
        return 0;
    }
    return 1;
}

/* Extra Information Original Diku Output 
Room name: By the Temple Altar, Of zone : 1. V-Number : 3054, R-number : 56
Sector type : Inside Special procedure : Exists
Room flags: INDOORS 
Description:
   You are by the temple altar in the northern end of the Temple of Midgaard.
A huge altar made from white polished marble is standing in front of you and
behind it is a ten foot tall sitting statue of Odin, the King of the Gods.

Extra description keywords(s): 
statue odin king god
altar

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see the southern end of the temple.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3001
*/
