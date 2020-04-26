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
    SetShort("In the tunnel at the inscription");
    SetLong("   You are in a north-south leading tunnel, the air is damp. On\n"+
	"the wall there is an inscription.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "inscription" : "It says:\n"+
	"\n"+
	"    Year 631 after the destruction of the dwarven realm.\n"+
	"\n"+
	"  We found the sword of the dwarven king, but it was guarded\n"+
	"by a large green dragon. All but two died immediately as the\n"+
	"dragon breath poison gas, we are also going to die soon.\n"+
	"\n"+
	"       Trather and Oralane",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/npc/4160_orc_large" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/41.zon/rm_4156",
        "south" : "/domains/diku-alfa/room/41.zon/rm_4164",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: In the tunnel at the inscription, Of zone : 8. V-Number : 4160, R-number : 256
Sector type : Forest Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a north-south leading tunnel, the air is damp. On
the wall there is an inscription.

Extra description keywords(s): 
inscription

------- Chars present -------
troll(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4156

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4164
*/
