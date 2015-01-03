// courtesy of Nilrin from the Dead Souls message boards

#include <lib.h>

inherit LIB_ITEM;

static void create() {
    item::create();

    SetKeyName("quill");
    SetId( ({ "quill", "pen", "goose feather" }) );
    SetShort("a goose feather quill");
    SetLong("An exotic plumage from an exotic bird with an everlasting ink supply");
    SetMass(1);
    SetBaseCost("gold",1);
}

void init(){
    ::init();
}

int indirect_write_on_obj_with_obj(object ob1, object ob2){
    return 1;
}
