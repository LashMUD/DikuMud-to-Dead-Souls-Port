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

    SetTerrainType(T_OUTDOORS);
    SetAmbientLight(30);
    SetShort("the Dump");
    SetLong(" The dump, where the people from the city drop their garbage. Through the\n"+
        "garbage you can see a large junction of pipes, looks like the entrance to the\n"+
        "sewer system. South of here you see the river and to the north is the common square.");
    SetItems( ([
        "north" : "You see the common square.",
        "south" : "You see the river slowly flowing west, but notice that it would be\n"+
            "impossible to reach the river due to all the garbage and a steep river\n"+
            "bank.",
        "down" : "You see the sewers.",
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3025",
        "down" : "/domains/diku-alfa/room/70.zon/rm_7030",
        ]) );
}


/* NO_NPC's allowed in Dump*/
int CanReceive(object ob){
    if( ob && (!inherits(LIB_NPC, ob)) ){
        return 1;
    }
    else
        return 0;
}

int tidy_up(){
    object *inv;
    inv = all_inventory(this_object());
    foreach(object thing in inv){
    if(thing && (!living(thing))) thing->eventMove(load_object("/domains/diku-alfa/room/furnace"));
    }
    return 1;
}

int eventReceiveObject(object ob){

    int val;
        
    if(ob && !living(ob) && (this_player()->eventDrop(), ob)){
        val = (ob->GetBaseCost()/1000);
            if(val <1) val=1;
            if(val>50) val=50;
                        
        message("say", "The item vanishes in a puff of smoke.", this_player());
        tell_room(environment(ob), (capitalize(ob->GetShort()))+" vanishes in a puff of smoke.", ({this_player()}));
        
        message("say", "You are awarded for outstanding performance.", this_player());
        tell_room(environment(this_player()), (capitalize(this_player()->GetKeyName()))+" has been awarded for being a good citizen.", ({this_player()}));
            if(this_player()->GetLevel() <= 3)
                this_player()->AddExperiencePoints(val);                
            else
                this_player()->AddCurrency("gold", val);
    call_out((: tidy_up :),1);
    return 0;
    }
}

void init(){
}

/* Extra Information Original Diku Output 
Room name: The Dump, Of zone : 1. V-Number : 3030, R-number : 36
Sector type : Field Special procedure : Exists
Room flags: NO_MOB 
Description:
   The dump, where the people from the city drop their garbage.  Through the
garbage you can see a large junction of pipes, looks like the entrance to the
sewer system.  South of here you see the river and to the north is the common
square.

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the common square.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3025

Direction south . Keyword : (null)
Description:
  You see the river slowly flowing west, but notice that it would be
impossible to reach the river due to all the garbage and a steep river
bank.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 8309

Direction down . Keyword : (null)
Description:
  You see the sewers.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7030
*/
