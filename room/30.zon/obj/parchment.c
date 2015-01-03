// courtesy of Nilrin from the Dead Souls forums

#include <lib.h>
#include <vendor_types.h>
#include <damage_types.h>

inherit LIB_ITEM;
inherit LIB_PERSIST;
inherit LIB_READ;

public string file_source;

string GetFileSource(){
    return file_source;
}

string SetFileSource(string str){
    file_source = str;
    SetLong("This is a sheet of parchment. It has been made from the skin of an animal and stretched out extremely thin, to the point of being partially transparent.\nThe parchment has something written on it.");
    return str;
}

eventRead(){
    if(file_source && file_exists(file_source)){
        this_player()->eventPage(file_source);
        send_messages("read","$agent_name $agent_verb $target_name.",this_player(),this_object(), environment(this_player()));
    }
    else{
        write("There is nothing written on it.");
    }
    return 1;
}

void create(){
    item::create();
    SetKeyName("parchment");
    SetId(({"parchment","sheet of parchment","sheet"}));
    SetShort("a sheet of parchment");
    SetLong("This is a sheet of parchment. It has been made from the skin of an animal and stretched out extremely thin, to the point of being partially transparent.");
    SetMass(1);
    SetBaseCost("gold",1);
    SetVendorType(VT_TREASURE);
    SetRead((: eventRead :));
    AddSave( ({ "file_source" }) );
}

void init(){
    ::init();
}

int direct_write_on_obj_with_obj(object ob1, object ob2){
    return 1;
}
