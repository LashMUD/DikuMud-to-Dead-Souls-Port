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
    SetShort("The Southern end of the hall");
    SetLong("You are standing in a vast hall that is dimly lit, but wherefrom the\n"+
        "light comes, is a mystery. The walls seem to radiate warmth and give\n"+
        "the pleasent feeling of being welcome here. A large portrait is hanging\n"+
        "on one of the walls. A large wooden staircase leads up into the tower.\n"+
        "To the east there is a high passage away from the hall. This ends\n"+
        "shortly after by a tall oak door. The enormous hall extends further\n"+
        "north from here. To the south you can see a huge, and VERY heavy-\n"+
        "looking iron-wrought door. It looks like this is the only exit from\n"+
        "this magnificent old house. To the west you can see a large ashen door.");
    SetItems( ([ 
        "north" : "The hallway continues that way. You can see more doorways under the\n"+
            "wooden staircase in that direction.",
        "east" : "You see there a tall oak door. It looks quite tightly closed to you.\n"+
             "On it little runes are chiselled into the wood.",
         "south" : "Here you see a REAL door. It would be more proper to call this a\n"+
             "\"GATE\", rather than a \"door\". It's really HUGE! On it hangs a large\n"+
             "sign with very large letters spelling : \"EMERGENCY EXIT\".",
        "west" : "This looks like a \"door\" in the meaning of the word. The ashen wood\n"+
            "is painted in a peculiar yellow colour. Small letters are written\n"+
            "with black on it.",
        "up" : "You see the staircase extending upwards into the very high tower.\n"+
            "It ends in what seems like a large bedroom up there.",
        "runes" : "These runes are utterly strange to you, but you are in luck today: Under\n"+
            "the runes you can just make out a sentence in Common. It goes : \" Stay out,\n"+
            "if you treasure your life. That is if you are mortal.\".",
        "letters" : "They read \"LIBRARY\".",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/79.zon/rm_7904",
        "east" : "/domains/diku-alfa/room/79.zon/rm_7910",
        "south" : "/domains/diku-alfa/room/79.zon/rm_7900",
        "west" : "/domains/diku-alfa/room/79.zon/rm_7902",
        "up" : "/domains/diku-alfa/room/79.zon/rm_7909",
        ] ));
    SetDoor("south", "/domains/diku-alfa/room/doors/7900_7901");
    SetDoor("west", "/domains/diku-alfa/room/doors/7901_7902");
    SetDoor("east", "/domains/diku-alfa/room/doors/7901_7910");
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
Room name: The Southern end of the hall, Of zone : 19. V-Number : 7901, R-number : 571
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
You are standing in a vast hall that is dimly lit, but wherefrom the
light comes, is a mystery. The walls seem to radiate warmth and give
the pleasent feeling of being welcome here. A large portrait is hanging
on one of the walls. A large wooden staircase leads up into the tower.
To the east there is a high passage away from the hall. This ends
shortly after by a tall oak door. The enormous hall extends further
north from here. To the south you can see a huge, and VERY heavy-
looking iron-wrought door. It looks like this is the only exit from
this magnificent old house. To the west you can see a large ashen door.
Extra description keywords(s): 
letters
runes

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  The hallway continues that way. You can see more doorways under the
wooden staircase in that direction.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7904

Direction east . Keyword : oak tall east oakdoor talldoor eastdoor
Description:
  You see there a tall oak door. It looks quite tightly closed to you.
On it little runes are chiselled into the wood.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7910

Direction south . Keyword : gate
Description:
  Here you see a REAL door. It would be more proper to call this a
"GATE", rather than a "door". It's really HUGE! On it hangs a large
sign with very large letters spelling : "EMERGENCY EXIT".
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: 7901
To room (V-Number): 7900

Direction west . Keyword : ashen ash door west yellow
Description:
  This looks like a "door" in the meaning of the word. The ashen wood
is painted in a peculiar yellow colour. Small letters are written
with black on it.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7902

Direction up . Keyword : (null)
Description:
  You see the staircase extending upwards into the very high tower.
It ends in what seems like a large bedroom up there.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7909
*/
