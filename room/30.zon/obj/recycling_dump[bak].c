#include <lib.h>

inherit LIB_BASE_DUMMY;
inherit LIB_STORAGE;

static void create() {
    base_dummy::create();

    SetKeyName("Dump");
    SetId(({"can","container"}));
    SetAdjectives("trash");
    SetShort("the recycling dump");
    SetLong("A place to discard your trash.");
    SetMass(1500);
    SetMaxCarry(999999);
    SetPreventGet("You can't take that");
}

int tidy_up(){
    object *inv;
    inv = all_inventory(this_object());
    foreach(object thing in inv){
    if(thing) thing->eventMove(load_object("/domains/diku-alfa/room/furnace"));
    }
    return 1;
}

int eventReceiveObject(object ob){
    write("The item vanishes in a puff of smoke.\n");
    call_out((: tidy_up :),1);
    return 0;
}

//mixed CanGet(object ob) { return "You can't take that";}

void init(){
}
