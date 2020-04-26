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
    SetShort("Outside Redferne's residence");
    SetLong("A huge cloud forms the plateau on which you are now standing. The wind here\n"+
        "is absolutely quiet and the sun is shining warmly upon you. From under the\n"+
        "cloud you can hear the faint sounds of Midgaard. Right before you to the\n"+
        "north lies the grand Mansion of Naris, the residence of the Greater God\n"+
        "Redferne.");
    SetItems( ([ 
        "north" : "You see a HUGE arched gate leading into this magnificent building.",
        "down" : "You see a Huge Chain that anchors the Mansion of Naris to the ground.",
        ] ));

    SetInventory( ([
        "/domains/diku-alfa/room/79.zon/npc/7009_paladin_knight" :1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/79.zon/rm_7901",
        "down" : "/domains/diku-alfa/room/79.zon/rm_7918",
        ] ));
    SetDoor("north", "/domains/diku-alfa/room/doors/7900_7901");
}

void init(){
   ::init();
}

/* Only ARCH's (private) and NPC "the Grand Knight of Paladins" allowed in room*/
int CanReceive(object ob) {
    if(ob && !archp(ob) && (!inherits(LIB_NPC, ob) | strcmp("the Grand Knight of Paladins", ob->GetShort()))){
    tell_object(ob, "There's a private conversation going on in that room.");
    return 0;
    }else 
    return ::CanReceive(ob);
}

/* Extra Information Original Diku Output 
Room name: Outside Redferne's residence, Of zone : 19. V-Number : 7900, R-number : 570
Sector type : Inside Special procedure : No
Room flags: NO_MOB PRIVATE 
Description:
A huge cloud forms the plateau on which you are now standing. The wind here
is absolutely quiet and the sun is shining warmly upon you. From under the
cloud you can hear the faint sounds of Midgaard. Right before you to the
north lies the grand Mansion of Naris, the residence of the Greater God
Redferne.
Extra description keywords(s): None
------- Chars present -------
grand knight paladin(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : gate door huge arched
Description:
  You see a HUGE arched gate leading into this magnificent building.
Exit flag: IS-DOOR CLOSED UNDEFINED  
Key no: 7901
To room (V-Number): 7901

Direction down . Keyword : (null)
Description:
  You see a Huge Chain that anchors the Mansion of Naris to the ground.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7918
*/
