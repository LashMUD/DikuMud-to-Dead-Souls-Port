// Based on Diku MUD Alfa.  Program and Concept created by
// Sebastian Hammer, Michael Seifert, Hans Henrik Staerfeldt,
// Tom Madsen, and Katja Nyboe.
// http://www.dikumud.com
//
// Modified by Lash (Christopher Coker) for use with:
//
// The Dead Souls Mud Library version 2
// developed by Cratylus
// http://www.dead-souls.net

#include <lib.h>

inherit LIB_ROOM;

static void create() {
    ::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Armourer's Storage Room");
    SetLong("  This is a small, bare room where the armourer keeps his goods.");
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/armor/3072_jerkin_scalemail" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3073_coif_scalemail" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3074_skirt_scalemail" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3075_boots_reinforced" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3076_gloves_reinforced" : 15,
	"/domains/diku-alfa/room/30.zon/armor/3077_sleeves_scalemail" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3078_jerkin_chainmail" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3079_coif_chainmail" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3080_skirt_chainmail" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3081_boots_ironbound" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3082_gloves_ironbound" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3083_sleeves_chainmail" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3084_bplate_bronze" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3085_helmet_bronze" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3086_leggings_bronze" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3087_boots_bronze" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3088_gauntlets_bronze" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3089_bracers_bronze" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3090_bplate_iron" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3091_helmet_iron" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3092_leggings_iron" : 15,       
        "/domains/diku-alfa/room/30.zon/armor/3093_boots_iron" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3094_gauntlets_iron" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3095_bracers_iron" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3096_shield_sm_wood" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3097_shield_sm_metal" : 15,
        "/domains/diku-alfa/room/30.zon/armor/3098_shield_lg_metal" : 15,
        ]) );
    SetNoClean(1);
    SetExits( ([
        "None" : "",
        ]) );
}

void init(){
    ::init();
}
