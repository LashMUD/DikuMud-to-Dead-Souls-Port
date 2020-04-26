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
    SetShort("Quifael's laboratory");
    SetLong("You are in a room filled with shelves containing all sorts of weird equipment.\n"+
        "The walls are lined with numerous shelves and a massive working desk is by\n"+
        "the north wall.  The air smells of rare chemicals and spices.\n"+
        "A virtual ladder leads downwards.\n"+
        "A magical portal is hovering in the air just in front of the east wall.");
    SetItems( ([ 
        "east" : "To the east is the magical portal.",
        "west" : "To the west is the hall.",
        "down" : "The virtual ladder leads down to the monster pen.",
        "shelves" : "The shelves contain a mass of bottles, jars and boxes of different shapes and\n"+
            "sizes, of which some contain powders and liquids in various colours.  Others\n"+
            "contain dragon's claws, giant's eyes, rabbit's ears and other body parts of\n"+
            "different monsters.",
        "desk" : "On the desk is a peculiar apparatus of glass bottles and globes connected by\n"+
            "small pipelines.  The green liquid inside the apparatus' globes and pipelines\n"+
            "is bubbling steadily.",
        ] ));
    SetInventory( ([
        "/domains/diku-alfa/room/69.zon/weap/6900_optimizer" :1,
        "/domains/diku-alfa/room/69.zon/obj/6950_coffee_machine" :1,
        ]) );
    SetExits( ([
        "east" : "/domains/diku-alfa/room/69.zon/rm_6903",
        "west" : "/domains/diku-alfa/room/69.zon/rm_6904",
        "down" : "/domains/diku-alfa/room/69.zon/rm_6900",
        ] ));
}

void init(){
   ::init();
}

/* Only ARCH's (private) and room inventory allowed in room*/
int CanReceive(object ob) {
    if(ob && !archp(ob) && 
             strcmp("a coffee machine", ob->GetShort()) && 
             strcmp("Quifael's global optimizer", ob->GetShort())){
    tell_object(ob, "There's a private conversation going on in that room.");
    return 0;
    }else 
    return ::CanReceive(ob);
}

/* Extra Information Original Diku Output 
Room name: Quifael's laboratory, Of zone : 13. V-Number : 6902, R-number : 388
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS PRIVATE 
Description:
You are in a room filled with shelves containing all sorts of weird equipment.
The walls are lined with numerous shelves and a massive working desk is by
the north wall.  The air smells of rare chemicals and spices.
A virtual ladder leads downwards.
A magical portal is hovering in the air just in front of the east wall.
Extra description keywords(s): 
desk
shelves

------- Chars present -------

--------- Contents ---------
coffee machine
optimizer

------- Exits defined -------
Direction east . Keyword : (null)
Description:
  To the east is the magical portal.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6903

Direction west . Keyword : (null)
Description:
  To the west is the hall.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6904

Direction down . Keyword : (null)
Description:
  The virtual ladder leads down to the monster pen.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 6900
*/
