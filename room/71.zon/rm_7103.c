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
    SetShort("A muddy bend in the sewer system");
    SetLong("You are standing in what looks like a bend in the pipe system of the\n"+
        "sewer. The 'floor' is covered completely by mud! This includes covering\n"+
        "your legs up to you knees as well. The pipe leads west and south.");
    SetItems( ([ 
        "south" : "To the south there's less mud than here! It actually seems to end there!\n"+
            "You have a felling it would be nice to have your feet free from mud again.",
        "west" : "You can see a room in which mud drips from the roof onto the floor in \n"+
            "great cakes of sludge. There doesn't seem to be any exits from that room\n"+
            "apart from in you direction.",
        "mud" : "You never saw such disgusting matter before, it nearly makes you puke.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/71.zon/npc/7000_mudmonster" :2,
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/71.zon/rm_7104",
        "west" : "/domains/diku-alfa/room/71.zon/rm_7101",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A muddy bend in the sewer system, Of zone : 15. V-Number : 7103, R-number : 457
Sector type : Hills Special procedure : No
Room flags: DARK INDOORS 
Description:
You are standing in what looks like a bend in the pipe system of the
sewer. The 'floor' is covered completely by mud! This includes covering
your legs up to you knees as well. The pipe leads west and south.
Extra description keywords(s): 
mud

------- Chars present -------
mud monster mudmonster(MOB)
mud monster mudmonster(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  To the south there's less mud than here! It actually seems to end there!
You have a felling it would be nice to have your feet free from mud again.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7104

Direction west . Keyword : (null)
Description:
  You can see a room in which mud drips from the roof onto the floor in 
great cakes of sludge. There doesn't seem to be any exits from that room
apart from in you direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7101
*/
