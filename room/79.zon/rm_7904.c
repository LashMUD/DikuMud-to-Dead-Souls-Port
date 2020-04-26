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
    SetShort("The Northern end of the hall");
    SetLong("You are standing in the northern end of the huge hall. This part is under\n"+
        "the grand wooden staircase so the light seems a little less bright here,\n"+
        "but this doesn't bother your sight at all. To the north lies the kitchen.\n"+
        "To the south lies the Southern end of the hall. To the east there is a huge\n"+
        "metal door. To the west there is a large aspenwood door.");
    SetItems( ([ 
        "north" : "",
        "east" : "You see a huge metal door. From it a foul stench emanates. The smell is the\n"+
            "most awful experience in your entire life. A thought seeps through this\n"+
            "terrible stench and into your mind : \"Monsters\", you feel BAD about opening\n"+
            "that door.",
        "south" : "The rest of the hall lies in that direction, and so does the exit.",
        "west" : "The door has \"SITTING ROOM\" written on it. It is made from Aspenwood and\n"+
            "is beautifully carven with small elves as main issue of sculpture.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/79.zon/rm_7906",
        "east" : "/domains/diku-alfa/room/79.zon/rm_7913",
        "south" : "/domains/diku-alfa/room/79.zon/rm_7901",
        "west" : "/domains/diku-alfa/room/79.zon/rm_7905",
        ] ));
    SetDoor("west", "/domains/diku-alfa/room/doors/7904_7905");
    SetDoor("east", "/domains/diku-alfa/room/doors/7904_7913");
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
Room name: The Northern end of the hall, Of zone : 19. V-Number : 7904, R-number : 574
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
You are standing in the northern end of the huge hall. This part is under
the grand wooden staircase so the light seems a little less bright here,
but this doesn't bother your sight at all. To the north lies the kitchen.
To the south lies the Southern end of the hall. To the east there is a huge
metal door. To the west there is a large aspenwood door.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7906

Direction east . Keyword : steel metal huge
Description:
  You see a huge metal door. From it a foul stench emanates. The smell is the
most awful experience in your entire life. A thought seeps through this
terrible stench and into your mind : "Monsters", you feel BAD about opening
that door.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7913

Direction south . Keyword : (null)
Description:
  The rest of the hall lies in that direction, and so does the exit.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7901

Direction west . Keyword : aspen asp
Description:
  The door has "SITTING ROOM" written on it. It is made from Aspenwood and
is beautifully carven with small elves as main issue of sculpture.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7905
*/
