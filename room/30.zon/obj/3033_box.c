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

    SetKeyName("box");
    SetId( ({ "box" }) );
    SetAdjectives( ({ "small", "box" }) );
    SetShort("a box");
    SetLong("A small box.");
    SetMass(50);
    SetBaseCost("gold", 50);
    SetMaxCarry(100);
    SetPreventPut("You cannot put this in there!");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [box], R-number: [16], V-number: [3033] Item type: CONTAINER
Short description: a box
Long description:
A small box.
Extra description keyword(s): None
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 5, Value: 50, Cost/day: 7, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Max-contains : 10
Locktype : 0
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/

