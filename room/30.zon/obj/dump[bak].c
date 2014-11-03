#include <lib.h>

inherit LIB_BASE_DUMMY;
//inherit LIB_STORAGE;
inherit LIB_FURNACE;


static void create() {
    base_dummy::create();
    furnace::create();
    //storage::create();
    SetKeyName("Dump");
    SetId(({"can","container"}));
    SetAdjectives("trash");
    SetShort("the dump");
    SetLong("A place to discard your trash.");
    //SetMass(1500);
    //SetDollarCost(15);
    //SetMaxCarry(900);
    //SetInventory( ([ 
    //    "/domains/campus/obj/key1" : 1,
    //  ]) );
    //SetPreventGet("It is firmly attached to the ground.");
}

//void create() {
//    furnace::create();
//}

//int tidy_up(){
//    object *inv;
//    inv = all_inventory(this_object());
    //foreach(object thing in inv){
    //    if(thing) thing->eventMove(load_object("/domains/town/room/furnace"));
//    }
//    return 1;
//}

int eventReceiveObject(object ob){
    write("You make a deposit into the the recycling bin.\n");
    //call_out((: tidy_up :),1);
    return 0;

}
void init(){
    ::init();
}
