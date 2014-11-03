#include <lib.h>
#include <dirs.h>
#include <rooms.h>
#include <virtual.h>
#include <position.h>
#define __DIR__ "/domains/diku-alfa/virtual/"

inherit LIB_VIRT_LAND;

varargs static void create(int x, int y) {
    SetNoReplace(1);
    virt_land::create();
    SetClimate("temperate");
    SetAmbientLight(30);
    SetLong("A featureless void.");
    SetShort("an empty place");
    AddExit("down", ROOM_START);
}
