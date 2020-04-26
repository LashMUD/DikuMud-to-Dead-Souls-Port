#include <lib.h>

inherit LIB_BASE_DUMMY;
inherit LIB_STORAGE;

static void create(){
    base_dummy::create();
    
    SetKeyName("safe");
    SetId(({"safe"}));
    SetShort("a safe");
    SetLong("The safe is very heavy. It has a keyhole.");
    SetMass(1000);
    //SetBaseCost();
    SetMaxCarry(5238);
    //SetPreventPut("You cannot put this in there!");
    SetCanClose(1);
    SetClosed(1);
    SetCanLock(1);
    SetLocked(1);
    SetKey("key_3123");
    AddMoney("gold", 52385);
}
mixed CanGet(object ob) { return "You can't take that";}
