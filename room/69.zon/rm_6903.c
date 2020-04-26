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
    SetShort("Quifael's virtual balcony");
    SetLong("You are on a transparent balcony hanging in mid-air.  You notice a faint blue\n"+
        "glow surrounding everything, even yourself, making it seem as transparent as\n"+
        "the balcony itself.  From here, you have a terrific view of the whole Forest\n"+
        "of Haon-Dor.\n"+
        "A transparent bronze plate has been bolted to the balcony railing.\n"+
        "A magical portal is hovering in the air to the west.");
    SetItems( ([ 
        "west" : "The magical portal is to the west.",
        ({"balcony", "railing"}) : "Quite transparent, but visible anyway, because of the blue glow that surrounds\n"+
            "the whole place.",
        "plate" : "The transparent bronze plate looks quite strange, but the engraved letters are\n"+
        "quite easy to read, nevertheless :-\n\n"+
        "              Quifael's Virtual Balcony\n\n"+
        "                   Do not lean out!\n\n"+
        "  Please do not try to attract the attention of any\n"+
        "      adventurers in the forest, as you are not\n"+
        "         really in existence at the moment.\n\n"+
        "        (This could possibly mess up Reality,\n"+
        "      and we wouldn't want to do that, would we?)",
        ({"forest", "Haon-Dor", "view"}) :
            "Through the tree crowns, you see fellow adventurers walking around in the\n"+
            "forest, gathering mushrooms, eating blackberries, committing rabbit genocide\n"+
            "and generally having a good time.",
        ] ));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/69.zon/rm_6902",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: Quifael's virtual balcony, Of zone : 13. V-Number : 6903, R-number : 389
Sector type : Inside Special procedure : No
Room flags: INDOORS PRIVATE 
Description:
You are on a transparent balcony hanging in mid-air.  You notice a faint blue
glow surrounding everything, even yourself, making it seem as transparent as
the balcony itself.  From here, you have a terrific view of the whole Forest
of Haon-Dor.
A transparent bronze plate has been bolted to the balcony railing.
A magical portal is hovering in the air to the west.
Extra description keywords(s): 
forest Haon-Dor view
plate
balcony railing

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  The magical portal is to the west.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6902
*/
