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

    SetKeyName("a tall warrior");
    SetId( ({"warrior", "evil", "tall"}) );
    SetAdjectives(({"non-player", "non player", "warrior", "tall"}));
    SetShort("a tall warrior");
    SetLong("He seems to know his way with weapons.");
    SetRace("human");
    SetClass("fighter");
    SetLevel(15);
    SetCanBite(0);
    SetGender("male");
    SetMorality(-1000);
    AddCurrency("gold", 200);
    SetWander(5);
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/weap/3022_longsword" : "wield sword",
        "/domains/diku-alfa/room/30.zon/armor/3085_helmet_bronze" : "wear helmet",
        "/domains/diku-alfa/room/30.zon/armor/3084_bplate_bronze" : "wear plate",
        "/domains/diku-alfa/room/30.zon/armor/3083_sleeves_chainmail" : "wear sleeves",
        "/domains/diku-alfa/room/30.zon/armor/3089_bracers_bronze" : "wear bracers",
        "/domains/diku-alfa/room/30.zon/armor/3088_gauntlets_bronze" : "wear gauntlets",
        "/domains/diku-alfa/room/30.zon/armor/3086_leggings_bronze" : "wear leggings",
        "/domains/diku-alfa/room/30.zon/armor/3087_boots_bronze" : "wear boots",
        ]) );
    SetEncounter( (:CheckNPC:) );
    SetAction(10, ( :Scavenge: ));
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
MALE MOB - Name : warrior [R-Number62], In room [3001] V-Number [4051]
Short description: the warrior
Title: None
Long description: A tall warrior.
Monster Class: Normal   Level [7] Alignment[-400]
Birth : [1316449945]secs, Logon[1316449945]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+7]  Hit p.:[94/94+7]  Move p.:[50/50+7]
AC:[50/10], Coins: [200], Exp: [3500], Hitroll: [7], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC AGGRESSIVE STAY-ZONE ,Timer[0]
Mobile Special procedure : None
NPC Bare Hand Damage 2d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [13] [13] [13] [13] [13]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
