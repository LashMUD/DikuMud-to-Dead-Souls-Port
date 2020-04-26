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
    SetShort("Quifael's study");
    SetLong("You are in a small, comfortable study room.  The walls are lined with\n"+
        "bookcases filled with dusty volumes of all sizes.  In the fireplace burns a\n"+
        "crackling fire that makes the room warm and cosy, and in front of an oakwood\n"+
        "reading desk is a large old-fashioned chair.");
    SetItems( ([ 
        "south" : "The corridor leads south to the hall.",
        ({"bookcase", "bookcases", "volume", "volumes", "book", "books"}) :
            "Most of the books are heavy, leatherbound and covered in a thin layer of dust.\n"+
            "There are many titles on necromancy, conjuring and other spheres of Magick,\n"+
            "but also some on computer science (although these seem to be VERY dusty\n"+
            "indeed) and a fair collection of horror literature, ranging from Bram Stoker\n"+
            "and H. P. Lovecraft to Anne Rice and Stephen King.",
        "fireplace" : "The fireplace isn't particularly big, but the fire crackles merrily in it.",
        "desk" : "It is very massive and but seems worn from many years of use.",
        "chair" : "It is big and old-fashioned, but quite comfortable nevertheless.",
        ] ));
    SetExits( ([
         "south" : "/domains/diku-alfa/room/69.zon/rm_6904",
        ] ));
}

void init(){
   ::init();
}

/* Only ARCH's (private) allowed in room*/
int CanReceive(object ob) {
    if(ob && !archp(ob)){
    tell_object(ob, "There's a private conversation going on in that room.");
    return 0;
    }else 
    return ::CanReceive(ob);
}

/* Extra Information Original Diku Output 
Room name: Quifael's study, Of zone : 13. V-Number : 6901, R-number : 387
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
You are in a small, comfortable study room.  The walls are lined with
bookcases filled with dusty volumes of all sizes.  In the fireplace burns a
crackling fire that makes the room warm and cosy, and in front of an oakwood
reading desk is a large old-fashioned chair.
Extra description keywords(s): 
chair
desk
fireplace
bookcase bookcases volume volumes book books

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  The corridor leads south to the hall.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6904
*/
