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

    SetKeyName("leather satchel");
    SetId( ({ "satchel", "bag" }) );
    SetAdjectives( ({ "", "" }) );
    SetShort("a leather satchel");
    SetLong("While the bag in it self look ordinary enough, even perhaps somewhat\n"+
        "dingy, the closing mechanism is rather unusual (and somewhat noisy), as\n"+
        "it consists of two strips of strange cloth which stick to each other\n"+ 
        "like burrs, but doesn't stick to anything else. It makes a loud 'ripping'\n"+ 
        "sound when opened.");
    SetInventory( ([
        "/domains/diku-alfa/room/80.zon/obj/8502_glass_chunk" : 1,
        ]) );
    SetMass(20);
    SetBaseCost("gold", 20);
    SetMaxCarry(200);
    SetCanClose(1);
    SetClosed(1);
    SetPreventPut("You cannot put this in there!");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [satchel bag], R-number: [240], V-number: [8121]
Item type:CONTAINER
Short description: a leather satchel
Long description:
A scuffed and worn leather satchel has been left here.
Extra description keyword(s):
----------
satchel bag
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 2, Value: 20, Cost/day: 200, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Max-contains : 20
Locktype : 0
Corpse : No
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
