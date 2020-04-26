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

    SetKeyName("spice jar");
    SetId( ({ "jar", "spice" }) );
    SetAdjectives( ({ "" }) );
    SetShort("a small unlabeled spice jar");
    SetLong("A small unlabeled spice jar.");
    SetMass(1);
    SetBaseCost("gold", 10);
    SetMaxCarry(1);
    SetCanClose(1);
    SetClosed(1);
    SetInventory( ([
        "/domains/diku-alfa/room/89.zon/meals/8404_kernels" : 1,
        ]) );
    SetPreventPut("You cannot put this in there!");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [jar], R-number: [245], V-number: [8402]
Item type: CONTAINER
Short description: a spice jar
Long description:
A small unlabeled spice jar is standing here.
Extra description keyword(s): None
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 10, Cost/day: 10, Timer: 0
In room: 8915 ,In object: None ,Carried by:Nobody
Max-contains : 1
Locktype : 5
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
