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
    SetShort("Steep slope");
    SetLong("   You try too climb down the slope.\n"+
        ">\n"+
        "You slip!\n"+
        "You fall and tumble.....\n"+
        "You hit your head HARD.\n"+
        "You massacre your head to small pieces.\n"+
        "You die.....");
    SetItems( ([ 
        ] ));
    SetExits( ([
        ] ));
}

void init(){
   ::init();
}

/* DEATH Room 

int CanReceive(object ob) {
    if(ob && ob->GetLevel(ob<21)){
        ob->eventMove("/domains/diku-alfa/death");
        return 1;
    }
    else
        return 0;
}
*/
/* Extra Information Original Diku Output 
Room name: Steep slope, Of zone : 9. V-Number : 5045, R-number : 312
Sector type : Field Special procedure : No
Room flags: DEATH 
Description:
You try too climb down the slope.
>
You slip!
You fall and tumble.....
You hit your head HARD.
You massacre your head to small pieces.
You die.....

Extra description keywords(s): None
------- Chars present -------

--------- Contents ---------

------- Exits defined -------
*/
