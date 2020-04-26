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
#include <props.h>

inherit LIB_BED;

static void create() {
    bed::create();

    bed::create();
    SetKeyName("chair");
    SetId("Mayor's chair", "chair");
    SetAdjectives( ({ "bed-like","comfortable" }) );
    SetShort("the Mayor's chair");
    SetLong("This chair is really a masterpiece. A chair where one can sit as comfortably\n"+
        "as in a bed. All auditoriums should be equipped with these things. A shame\n"+
        "that there wouldn't be room for the students too, though.");
    SetMaxSitters(1);
    SetMaxLiers(1);
    SetPreventGet("You can't take that");
}

void init(){
    ::init();
}

/*
From EXTRA description in Mayors' office:
Diku MUD file tinyworld.wld item #3138
*/
