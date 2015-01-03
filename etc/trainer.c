#include <lib.h>

/* modified by Lash for inclusion of modified base_trainer.c */
inherit "/domains/diku-alfa/etc/base_trainer.c";
/* end mod */
inherit LIB_SENTIENT;

static void create(){
    base_trainer::create();
    sentient::create();
}
