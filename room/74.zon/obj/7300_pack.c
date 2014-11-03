/*    /d/Praxis/obj/misc/bag.c
 *    from Nightmare IV
 *    a simple bag
 *    created by Descartes of Borg 940212
 *   
 *    Modified by Lash (Christopher Coker) based on
 *    
 *    Diku MUD Alfa.  Program and Concept created by
 *    Sebastian Hammer, Michael Seifert, Hans Henrik Staerfeldt,
 *    Tom Madsen, and Katja Nyboe.
 *    http://www.dikumud.com
 *
 *    for use with:
 *    The Dead Souls Mud Library version 2
 *    developed by Cratylus
 *    http://www.dead-souls.net
 */

#include <lib.h>

inherit LIB_STORAGE;

void create() {
    ::create();
    SetKeyName("a backpack");
    SetId( ({ "pack", "backpack", "back" }) );
    SetAdjectives( ({ "" }) );
    SetShort("a backpack");
    SetLong("A backpack.");
    SetMass(20);
    SetBaseCost("gold", 100);
    SetMaxCarry(600);
    SetPreventPut("You cannot put this in there!");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [backpack pack back], R-number: [218], V-number: [7300]
Item type: CONTAINER
Short description: a backpack
Long description:
A bacpack stands upright here.
Extra description keyword(s): None
Can be worn on :TAKE ABOUT 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 2, Value: 100, Cost/day: 60, Timer: 0
In room: Nowhere ,In object: None ,Carried by:Nobody
Max-contains : 60
Locktype : 1
Corpse : No
Equipment Status: Inventory
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
