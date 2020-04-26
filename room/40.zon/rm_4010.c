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
    
    SetTerrainType(T_UNDERGROUND);
    SetAmbientLight(0);
    SetShort("The cave");
    SetLong("   You are in a large cave. The ceiling is lost somewhere above the reach of\n"+
	"your light. The floor, however, is highly illuminated, your light flickering\n"+
	"over several tombstones. Only one is whole, the rest have been shattered by\n"+
	"some savage blow. The remaining tombstone looks disturbingly new...\n"+
	"A small breeze of fresh air enters from the south (probably lost too). Take a\n"+
	"good breath, it may be your last mouthful of air in a long, long time that\n"+
	"others haven't breathed before you.\n"+
	"To the north a small tunnel continues into the mountain.");
    SetItems( ([ 
        "north" : "",
        "south" : "",
        "tombstone" : "The stone is inscribed with the unfortunate player's famous last words :\n"+
	"\n"+
	"  \"What are you worrying about, it is just a small harmless snake\"",
        ] ));
SetExits( ([
         "north" : "/domains/diku-alfa/room/40.zon/rm_4011",
         "south" : "/domains/diku-alfa/room/40.zon/rm_4002",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The cave, Of zone : 7. V-Number : 4010, R-number : 173
Sector type : Field Special procedure : No
Room flags: DARK INDOORS 
Description:
   You are in a large cave. The ceiling is lost somewhere above the reach of
your light. The floor, however, is highly illuminated, your light flickering
over several tombstones. Only one is whole, the rest have been shattered by
some savage blow. The remaining tombstone looks disturbingly new...
A small breeze of fresh air enters from the south (probably lost too). Take a
good breath, it may be your last mouthful of air in a long, long time that
others haven't breathed before you.
To the north a small tunnel continues into the mountain.

Extra description keywords(s): 
tombstone

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4011

Direction south . Keyword : (null)
Description:
  UNDEFINED
Exit flag: NOBITS 
Key no: 0
To room (V-Number): 4002
*/
