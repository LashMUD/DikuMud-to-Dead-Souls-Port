#include <lib.h>
#include <vendor_types.h>
inherit LIB_ITEM;

void read_scroll();

void create(){
    ::create();
    SetKeyName("scroll");
    SetId(({"scroll of recall", "recall"}));
    SetAdjectives(({"none"}));
    SetShort("a scroll of recall");
    SetLong("The scroll has written a formulae of 'Word of Recall' upon it.\n"+
            "read 'recall on scroll'" );
    SetMass(1);
    SetBaseCost("gold", 2000);
    SetVendorType(VT_MAGIC);
    SetRead( ([
        "recall" : (:read_scroll:)
        ]) );
    SetLanguage("common");
    SetProperty("magic item", 1);
}

void init(){
    ::init();
}

void read_scroll(){
    
    tell_player(this_player(), "\nThe scroll crumbles into dust...\n");
    this_player()->eventMoveLiving("/domains/diku-alfa/room/30.zon/rm_3001.c",
                                   this_player()->GetName()+" disappears!", 
                                   this_player()->GetName()+" appears in the middle of the room.");
    this_object()->eventDestruct();
}
    
    
    
