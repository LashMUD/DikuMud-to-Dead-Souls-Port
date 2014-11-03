#include <lib.h>

inherit LIB_BASE_DUMMY;
inherit LIB_STORAGE;

void create(){
    base_dummy::create();
    storage::create();
    SetKeyName("drawer");
    SetId(({"drawer"}));
    SetShort("drawer");
    SetLong("You notice a keyhole in the drawer.");
    //SetItems( ([
    //    "drawer" : "You notice a keyhole in the drawer.",
    //  ]) ),
    SetMass(1000);
    //SetBaseCost();
    SetMaxCarry(500);
    //SetPreventPut("You cannot put this in there!");
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/obj/key_3123" : 1,
      ]) );
    SetCanClose(1);
    SetClosed(1);
    SetCanLock(1);
    SetLocked(1);
    SetKey("key_3122");
}
mixed CanGet(object ob) { return "You can't take that";}
