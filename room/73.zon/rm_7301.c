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
    SetShort("The Entrance to the Realm of silence");
    SetLong("This is an utterly silent place. As you look around you see that there\n"+
        "hasn't been a living thing in a long time. The dust lies here in a thick\n"+
        "layer on the floor and on the furniture. On the wall hangs a bleak and \n"+
        "worn tapestry. A winding stone staircase leads up into darkness. On the \n"+
        "wall to the west you can see a huge torch stuck into the solid rock.\n"+
        "A large portcullis blocks your way to the north.");
    SetItems( ([ 
        "north" : "Through the portcullis, you can see a faintly lighted hallway leading east.",
        "up" : "",
        ({"portcullis", "gate"}) : "This seems like an exceptionally heavy gate, made of thick iron.",
        ({"torch", "light"}) : "This VERY old torch looks as if it has burned for ages, yet no traces of \n"+
            "the searing flame can be seen on it!",
        ({"stairs", "staircase"}) : "This looks as if it has been standing here for at least 12 centuries. It's \n"+
            "Very worn and cracks in the surface mingle with the cores of mineral that\n"+
            "penetrates the rock from which these steps are chiselled.",
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
Room name: The Entrance to the Realm of silence, Of zone : 16. V-Number : 7301, R-number : 522
Sector type : Field Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
This is an utterly silent place. As you look around you see that there
hasn't been a living thing in a long time. The dust lies here in a thick
layer on the floor and on the furniture. On the wall hangs a bleak and 
worn tapestry. A winding stone staircase leads up into darkness. On the 
wall to the west you can see a huge torch stuck into the solid rock.
A large portcullis blocks your way to the north.
Extra description keywords(s): 
stairs staircase
torch light
portcullis gate

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  Through the portcullis, you can see a faintly lighted hallway leading east.
Exit flag: IS-DOOR  
Key no: -1
To room (V-Number): 8309

Direction up . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309
*/
