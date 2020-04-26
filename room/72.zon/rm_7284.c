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
    SetShort("The firedeath");
    SetLong("This room is very hot. There are flames surounding you. You can\n"+
        "see no exits at all! Skeletons are lying all over the floor.");
    SetItems( ([ 
        "skeletons" : "The skeletons looks like they had suffered the death of hunger.\n"+
            "One of them looks like he has written something at the wall.",
        ({"writing", "wall"}) : "The writing says 'A pray to the GODS will not be heard, though\n"+
            "the only exit is death..... Mother, I love you'.",
        ] ));
    SetExits( ([
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The firedeath, Of zone : 16. V-Number : 7284, R-number : 519
Sector type : City Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
This room is very hot. There are flames surounding you. You can
see no exits at all! Skeletons are lying all over the floor.
Extra description keywords(s): 
writing wall
skeletons

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
*/
