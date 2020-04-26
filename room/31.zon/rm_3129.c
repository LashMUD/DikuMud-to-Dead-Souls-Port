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

int ReadSign();

static void create() {
    room::create();
    SetTerrainType(T_ROAD);
    SetAmbientLight(30);
    SetShort("On the Concourse");
    SetLong(" The Concourse continues both east and west. Park Road is north of here\n"+
        "and an iron gate leads south to the graveyard.\n"+
        "A bronze sign has been set on the wall next to the grate.");
    SetItems( ([
        "south" : "Through the solid iron bars you see the graveyard.",
        //"grate" : "Looks heavy.",
        "sign" : "The sign says :-
                           Graveyard of Midgaard

     Many brave adventurers have found their final resting place here.
           Please show respect and do not desecrate their tombs.",

         ]) );
    SetRead( ([
        "sign" : (:ReadSign:),
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/31.zon/rm_3126",
        "east" : "/domains/diku-alfa/room/31.zon/rm_3130",
        "south" : "/domains/diku-alfa/room/36.zon/rm_3600",
        "west" : "/domains/diku-alfa/room/31.zon/rm_3128",       
        ]) );
    SetDoor("south", "/domains/diku-alfa/room/doors/3129_3600");//requires key "3121" 
}

    mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/31.zon/txt/grave_sign.txt");
    }

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: On the Concourse, Of zone : 2. V-Number : 3129, R-number : 87
Sector type : City Special procedure : No
Room flags: NOBITS
Description:
   The Concourse continues both east and west.  Park Road is north of here
and an iron grate leads south to the graveyard.
A bronze sign has been set on the wall next to the grate.

Extra description keywords(s): 
sign
grate

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3126

Direction east . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3130

Direction south . Keyword : grate
Description:
  Through the solid iron bars you see the graveyard.
Exit flag: IS-DOOR CLOSED LOCKED UNDEFINED  
Key no: 3121
To room (V-Number): 3600

Direction west . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3128
*/
