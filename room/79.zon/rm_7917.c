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

    SetClimate("outdoors");
    SetAmbientLight(30);
    SetShort("The Chain");
    SetLong("As you descend, the chain seems to absorbe all weather around it, making it\n"+
        "swing less and less in the very powerful wind tearing at it. The Chain seems\n"+
        "to chuckle quietly, and as you descend further you hear a soft whisper\n"+
        "originating from within the Chain *ITSELF*. \n"+
        "It says, \" Welcome back some other time, stranger. Your company is always\n"+
        "           ... hmmm ... interesting. God Speed. \"\n"+
        "The chain extends further down through the now spreading clouds.");
    SetItems( ([ 
        "up" : "It seems to you that the Chain is dissolving again. Maybe it's just an \n"+
            "illusion, but still ...!",
        "down" : "That way seems safe enough ... now.",
        ] ));
    SetExits( ([
        "down" : "/domains/diku-alfa/room/79.zon/rm_7914",
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
Room name: The Chain, Of zone : 19. V-Number : 7917, R-number : 587
Sector type : Mountains Special procedure : No
Room flags: NO_MOB 
Description:
As you descend, the chain seems to absorbe all weather around it, making it
swing less and less in the very powerful wind tearing at it. The Chain seems
to chuckle quietly, and as you descend further you hear a soft whisper
originating from within the Chain *ITSELF*. 
It says, " Welcome back some other time, stranger. Your company is always
           ... hmmm ... interesting. God Speed. "
The chain extends further down through the now spreading clouds.
Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction up . Keyword : (null)
Description:
  It seems to you that the Chain is dissolving again. Maybe it's just an 
illusion, but still ...!
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction down . Keyword : (null)
Description:
  That way seems safe enough ... now.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7914
*/
