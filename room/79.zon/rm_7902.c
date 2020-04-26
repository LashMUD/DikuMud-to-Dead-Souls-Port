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
    SetShort("Redferne's Library");
    SetLong("This is truly a magnificent place! Books and scrolls lie together on every\n"+
        "shelf. A large globe, with the map of the Mud-world upon it, stands in the\n"+
        "dimly lit north-western corner of the room. Two large and comfortable-\n"+
        "looking leather arm-chairs adourn the center of the library together with\n"+
        "a huge oak desk. Dim light radiates from an enormous crystal chandelier\n"+
        "hanging down from the ceiling approximately 10 feet off the floor. To the\n"+
        "east there is a great old ashen door. A large glass window is set in the\n"+
        "west wall.");
   SetItems( ([ 
        "east" : "You can see an old ashen door, painted in a peculiar yellow colour.",
        ({"globe", "world", "map"}) : "You see a large world map stretch out on the enormous globe. It has towns\n"+
            "drawn in every spot available for such. In the middle of the map you can\n"+
            "spot a large town with the name 'MIDGAARD' written over it. The rest is\n"+
            "mountains, woods, plains and water.",
        ({"midgaard", "town", "city"}) : "You see a small speck with woods on the west from it, plains to the east\n"+
            "from it and mountains to the north from it. To the south from it you can\n"+
            "see a thin trail lead to a large castle. Finally you notice a rather large\n"+
            "river pour in from the east and go through Midgaard in the middle.",
        ({"chairs", "leather", "arm-chairs"}) : "These two chair are exactly alike one another. They look incredibly\n"+
            "comfortable. They're both made from old leather, and yet they seem so worn\n"+
            "that they can be nothing but a perfect place for a long needed rest.",
        ({"window", "glass"}) : "These windows are really BIG! They reach from about 20 inches above the\n"+
            "floor to approximately 10 inches under the ceiling. If you try and\n"+
            "\"look out\", you might see what might lie beyond these windows.",
        ({"out", "outside", "beyond"}) : "The clouds muster and form the ground on which this entire building is set.\n"+
            "Through the thinnest of the clouds you can just make out MIDGAARD with all\n"+
            "it's magnificent activity.",
        "river" : "You see a large and winding river cut through the landscape, starting at an\n"+
            "enormous inland lake, it seeps through Midgaard and finally ends up in the\n"+
            "Grand Sea on the West-coast of the land.",
        ] ));
    SetExits( ([
        "east" : "/domains/diku-alfa/room/79.zon/rm_7901",
        ] ));
    SetDoor("east", "/domains/diku-alfa/room/doors/7901_7902");
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
Room name: Redferne's Library, Of zone : 19. V-Number : 7902, R-number : 572
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
This is truly a magnificent place! Books and scrolls lie together on every
shelf. A large globe, with the map of the Mud-world upon it, stands in the
dimly lit north-western corner of the room. Two large and comfortable-
looking leather arm-chairs adourn the center of the library together with
a huge oak desk. Dim light radiates from an enormous crystal chandelier
hanging down from the ceiling approximately 10 feet off the floor. To the
east there is a great old ashen door. A large glass window is set in the
west wall.
Extra description keywords(s): 
river
out outside beyond
window glass
chairs leather arm-chairs
midgaard town city
globe world map

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction east . Keyword : door ash ashen east
Description:
  You can see an old ashen door, painted in a peculiar yellow colour.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: -1
To room (V-Number): 7901
*/
