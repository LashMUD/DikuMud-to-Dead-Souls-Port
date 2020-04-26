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
void Scavenge();

static void create() {
    sentient::create();

    SetKeyName("the warrior");
    SetId( ({"warrior", "evil", "tall"}) );
    SetAdjectives(({"non-player", "non player", "warrior", "tall"}));
    SetShort("A tall dangerous warrior with more scars than anyone you have\n"+
        "seen before");
    SetLong("Well surely a strong, brainless fighter.");
    SetRace("human");
    SetClass("fighter");
    SetLevel(18);
    SetCanBite(0);
    SetGender("male");
    SetMorality(-750);
    AddCurrency("gold", 1000);
    SetWander(5);
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/weap/3024_warhammer" : "wield hammer",
        "/domains/diku-alfa/room/30.zon/armor/3079_coif_chainmail" : "wear coif",
        "/domains/diku-alfa/room/30.zon/armor/3078_jerkin_chainmail" : "wear jerkin",
        "/domains/diku-alfa/room/30.zon/armor/3083_sleeves_chainmail" : "wear sleeves",
        "/domains/diku-alfa/room/30.zon/armor/3082_gloves_ironbound" : "wear gloves",
        "/domains/diku-alfa/room/30.zon/armor/3080_skirt_chainmail" : "wear skirt",
        "/domains/diku-alfa/room/30.zon/armor/3087_boots_bronze" : "wear boots",
        ]) );
    SetEncounter( (:CheckNPC:) );
    SetAction(10, ( :Scavenge: ));
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

void Scavenge(){

    object env = environment(this_object());
    object *item, *cost;
    int s;
    
    item = filter(all_inventory(env), (: !living($1) && (inherits(LIB_ITEM, $1) || inherits(LIB_ARMOR, $1)):) );
    cost = sort_array(item->GetBaseCost(), -1);
    s = sizeof(cost);
    if(s>0){
        foreach(object thing in item){
            if(thing->GetBaseCost() == cost[0]){
                eventForce("get "+thing->GetKeyName());
                break;
            }
        }
    }
}

/* Extra Information Original Diku Output
MALE MOB - Name : warrior [R-Number61], In room [3001] V-Number [4050]
Short description: the warrior
Title: None
Long description: A tall dangerous warrior. He has more scars than anyone you
have seen before.
Monster Class: Normal   Level [12] Alignment[-300]
Birth : [1316449786]secs, Logon[1316449786]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+12]  Hit p.:[111/111+12]  Move p.:[50/50+12]
AC:[40/10], Coins: [1000], Exp: [12000], Hitroll: [12], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL SCAVENGER ISNPC AGGRESSIVE
STAY-ZONE ,Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 2d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [8] [8] [8] [8] [8]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
