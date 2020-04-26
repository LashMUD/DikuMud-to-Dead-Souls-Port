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

int ReadSign();

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Manxam's livingroom");
    SetLong("  This is a cozy place indeed, furnished with a couch, a table, a bookshelf, a\n"+
        "desk and chair and a fireplace. The walls are painted white with a tinge of\n"+
        "blue, the curtains around the large window in the west wall are mostly black\n"+
        "with colourful birds and flowers on it.");
    SetItems( ([
        "couch" : "Aaah....this feels good, you think as you try the couch. As you slide your\n"+
            "hand over the smooth, black leather, you feel a shiver going down your spine.",
        "table" : "A large table by the couch, made of ebenholz. It looks fairly expensive.",
        "shelf" : "Wow! There are MANY books here...  Most of the books seem like books about\n"+
            "other worlds, like Krynn, Abeir-Toril (Forgotten realms) and many more. Some\n"+
            "books seems to be calulus books, with strange symbols and uncomprehensible\n"+
            "words...boooooring!!",
        "desk" : "A desk, littered with papers, pens and all sorts of things. It looks as the\n"+
            "owner has taken a box with things and turned it upside down. Over the desk\n"+
            "you see a sign.",
        "sign" : "It reads:\n\n"+
            "***************************************************************\n"+
            "** They say that if your desk is in order, so is your mind.  **\n"+
            "** I wonder how the minds of people with empty desks look... **\n"+
            "***************************************************************",
        "chair" : "A sturdy chair, made of oak. It looks like it had been used for centuries.",
        "fireplace" : "Aaaah...the heat from the flickering fire really feels good. The fireplace\n"
            "is made of stone (of course it is, it would be stupid to make it of wood!!),\n"+
            "with a metallic net before the fire to prevent embers from flying into the\n"+
            "room.",
        "window" : "As you gaze out of the window, you see Elm Street in all its splendors.\n"+
            "A big elm tree is standing there.",
        ]) );
    SetRead( ([
        "sign" : (:ReadSign:),
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/33.zon/rm_3302",        
        "west" : "/domains/diku-alfa/room/31.zon/rm_3124",
        ]) );
    SetDoor("west", "/domains/diku-alfa/room/doors/3124_3301");//requires key "3302" 
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/33.zon/txt/desk_sign.txt");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: Manxam's livingroom, Of zone : 4. V-Number : 3301, R-number : 109
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
This is a cozy place indeed, furnished with a couch, a table, a bookshelf, a
desk and chair and a fireplace.  The walls are painted white with a tinge of
blue, the curtains around the large window in the west wall are mostly black
with colourful birds and flowers on it.

Extra description keywords(s): 
window
fireplace
chair
desk
shelf
table
couch

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3302

Direction west . Keyword : door
Description:
  UNDEFINED
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3302
To room (V-Number): 3124
*/
