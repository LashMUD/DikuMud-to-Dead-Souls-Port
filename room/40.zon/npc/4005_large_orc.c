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
    SetKeyName("large orc");
    SetId( ({"orc", "evil", "large"}) );
    SetAdjectives(({"non-player", "non player", "orc", "dreadful"}));
    SetShort("the orc");
    SetLong("A large orc, really mean.\n"+
        "He looks dreadful.");
    SetRace("orc");
    SetClass("fighter");
    SetLevel(30);
    SetGender("male");
    SetInventory(([
        "/domains/diku-alfa/room/30.zon/weap/3021_smallsword" : "wield sword",
        "/domains/diku-alfa/room/30.zon/armor/3073_coif_scalemail" : "wear coif",
        "/domains/diku-alfa/room/30.zon/armor/3072_jerkin_scalemail" : "wear jerkin",
        "/domains/diku-alfa/room/30.zon/armor/3082_gloves_ironbound" : "wear gloves",
        "/domains/diku-alfa/room/30.zon/armor/3086_leggings_bronze" : "wear leggings",
        "/domains/diku-alfa/room/30.zon/armor/3081_boots_ironbound" : "wear boots",
        "/domains/diku-alfa/room/30.zon/armor/3077_sleeves_scalemail" : "wear sleeves",
        "/domains/diku-alfa/room/40.zon/armor/4000_green_ring" : "wear ring",
        ]));
    SetMorality(-1000);
    AddCurrency("gold", 200);
    SetWander(5);
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
MALE MOB - Name : orc [R-Number60], In room [3001] V-Number [4005]
Short description: the orc
Title: None
Long description: A large orc, really mean.
Monster Class: Normal   Level [7] Alignment[-500]
Birth : [1316449696]secs, Logon[1316449696]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+7]  Hit p.:[76/76+7]  Move p.:[50/50+7]
AC:[20/10], Coins: [200], Exp: [4000], Hitroll: [9], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SCAVENGER ISNPC STAY-ZONE ,Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [13] [13] [13] [13] [13]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
