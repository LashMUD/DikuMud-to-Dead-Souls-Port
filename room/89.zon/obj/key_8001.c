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

inherit LIB_ITEM;


static void create() {
    item::create();
    SetKeyName("key_8001");
    SetId( ({ "key", "blue key", "blue metal" }) );
    SetAdjectives( ({ "blue", "metal", "small" }) );
    SetShort("a blue key");
    SetLong("A small metal key with a blue handle.");
    SetMass(0);
    SetBaseCost("gold",0);
    SetDisableChance(100);
}
void init(){
    ::init();
}
