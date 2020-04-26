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

inherit LIB_BASE_DUMMY;
inherit LIB_BED;

static void create() {
    base_dummy::create();
    bed::create();

    SetKeyName("bench");
    SetId("bench", "pew");
    SetAdjectives( ({ "hard","uncomfortable", "wooden", "worn" }) );
    SetShort("chapel bench");
    SetLong("The benches are not of the comfortable kind.");
    SetMaxSitters(20);
    SetMaxLiers(5);
    SetInvis(1);
    SetPreventGet("The benches do not budge.");
}

void init(){
    ::init();
}

/*
From EXTRA description in Chapel:
Diku MUD file tinyworld.wld item #3405
*/
