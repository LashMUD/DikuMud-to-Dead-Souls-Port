#include <lib.h>

inherit "/domains/diku-alfa/etc/base_trainer.c";
inherit LIB_SENTIENT;

static void create(){
    base_trainer::create();
    sentient::create();
}
