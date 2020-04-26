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

inherit LIB_SENTIENT;

void CheckNPC();

static void create() {
    sentient::create();

    SetKeyName("the Captain");
    SetId(({"captain", "guard"}));
    SetAdjectives(({"non-player", "non player"}));
    SetShort("the Captain of the Guard");
    SetLong("The very angry Captain of the Guard. He looks quite upset.");
    SetCanBite(0);
    SetRace("human");
    SetClass("fighter");
    SetLevel(17);
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/weap/3022_longsword" : "wield sword",
        "/domains/diku-alfa/room/30.zon/armor/3091_helmet_iron" : "wear helmet",
        "/domains/diku-alfa/room/30.zon/armor/3090_bplate_iron" : "wear breast plate",
        "/domains/diku-alfa/room/30.zon/armor/3094_gauntlets_iron" : "wear gauntlets",
        "/domains/diku-alfa/room/30.zon/armor/3092_leggings_iron" : "wear leggings",
        "/domains/diku-alfa/room/30.zon/armor/3093_boots_iron" : "wear boots",
        "/domains/diku-alfa/room/31.zon/obj/key_3137" :1,
        "/domains/diku-alfa/room/31.zon/obj/key_3122" : 1,
      ]) );
    SetEncounter( (:CheckNPC:) ); // aggressive mob - no one is supposed to be in the captain's office
    SetGender("male");
    SetMorality(2500);
    AddCurrency("gold", 500);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
}

void init(){
    ::init();
}

/*Do not attack other NPC's*/
void CheckNPC(object ob){
 
 object env=environment(this_object());
 if(ob && !inherits(LIB_NPC, ob)){
         eventForce("kill " +ob->GetKeyName());
 }
}

/* Extra Information Original Diku Output
MALE MOB - Name : cityguard guard [R-Number27], In room [3111]
V-Number [3060]
Short description: the Cityguard
Title: None
Long description: A cityguard stands here.

Monster Class: Normal   Level [10] Alignment[1000]
Birth : [1316444583]secs, Logon[1316444583]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [1] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[20/100+10]  Hit p.:[124/124+10]  Move p.:[50/50+10]
AC:[20/10], Coins: [500], Exp: [9000], Hitroll: [10], Damroll: [3]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SPEC ISNPC STAY-ZONE WIMPY ,Timer [0] 

Mobile Special procedure : Exists
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 1
Apply saving throws: [10] [10] [10] [10] [10]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
