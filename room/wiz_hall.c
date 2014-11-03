#include <lib.h>
#include ROOMS_H

inherit LIB_ROOM;

static void create() {
    object ob;
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Creators' Hall");
    SetLong("A generic Wiz Hall.");
    SetProperty("no attack", 1);
    SetProperty("nopeer",1);
}

int CanReceive(object ob) {
    if(playerp(ob) && !creatorp(ob) && !present("testchar badge",ob)) {
        message("info","Creator staff only, sorry.", ob);
        return 0;
    }
    return ::CanReceive(ob);
}

void init(){
    ::init();
}
