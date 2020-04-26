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

    SetKeyName("bag");
    SetId( ({ "bag" }) );
    SetAdjectives( ({ "small", "bag" }) );
    SetShort("a bag");
    SetLong("A small bag.");
    SetMass(20);
    SetBaseCost("gold", 20);
    SetMaxCarry(500);
    SetPreventPut("You cannot put this in there!");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [bag], R-number: [15], V-number: [3032] Item type: CONTAINER
Short description: a bag
Long description:
A small bag.
Extra description keyword(s): None
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 2, Value: 20, Cost/day: 7, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Max-contains : 50
Locktype : 0
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
