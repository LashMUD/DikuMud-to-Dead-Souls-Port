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
    SetShort("The tortureroom.");
    SetLong("You are standing in a middle of a square room. Along the walls skeletons \n"+
        "are hanging in rusty chains. In the middle of the room there is a big metal \n"+
        "box, covered with dust. To the south you can just make out a small exit.");
    SetItems( ([ 
        "south" : "To dark to tell.",
        "skeletons" : "When you look at the skeletons, you can see that they once had been in great \n"+
            "pain. They are hanging in their arms, and some of them have been killed\n"+
            "with a sharp instrument.",
        ({"big", "metal", "box"}) : "The metal box is covered with dust. You notice that it once had been\n"+
            "filled with coal, as you see some of them.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/72.zon/npc/7002_rat_sewer" :1,
        "/domains/diku-alfa/room/72.zon/npc/7002_rat_sewer_with_ring" :1,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/72.zon/rm_7286",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The tortureroom., Of zone : 16. V-Number : 7285, R-number : 520
Sector type : City Special procedure : No
Room flags: INDOORS 
Description:
You are standing in a middle of a square room. Along the walls skeletons 
are hanging in rusty chains. In the middle of the room there is a big metal 
box, covered with dust. To the south you can just make out a small exit.
Extra description keywords(s): 
big metal box
skeletons

------- Chars present -------
rat(MOB)
rat(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : door iron
Description:
  To dark to tell.
Exit flag: IS-DOOR  
Key no: -1
To room (V-Number): 7286
*/
