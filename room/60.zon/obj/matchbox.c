/*    /d/Praxis/obj/misc/bag.c
 *    from Nightmare IV
 *    a simple bag
 *    created by Descartes of Borg 940212
 *   
 *    Modified by Lash (Christopher Coker) 140811
 *    A box of matches
 */

#include <lib.h>

inherit LIB_STORAGE;

void create() {
    ::create();
    SetKeyName("matchbox");
    SetId(({"box", "matchbox"}));
    SetAdjectives(({"small","match","matches"}));
    SetShort("a matchbox");
    SetLong("A box used to hold some matches");
    SetMass(5);
    SetBaseCost("gold", 1);
    SetMaxCarry(20); 
    SetCanClose(0);
    SetClosed(0);
    SetInventory( ([
                "/domains/diku-alfa/room/30.zon/obj/match" : 5,
                ]) );
}

void init(){
    ::init();
}
