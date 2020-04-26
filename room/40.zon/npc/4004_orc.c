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

    SetKeyName("the orc");
    SetId( ({"orc", "evil"}) );
    SetAdjectives(({"non-player", "non player", "orc", "dreadful"}));
    SetShort("An orc walking around looking for someone to kill");
    SetLong("You notice an evil look in his eyes");
    SetRace("orc");
    SetClass("fighter");
    SetLevel(15);
    SetGender("male");
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/weap/3024_warhammer" : "wield hammer",
        "/domains/diku-alfa/room/30.zon/armor/3067_cap_leather_hard" : "wear cap",
        "/domains/diku-alfa/room/30.zon/armor/3066_jerkin_studded_leather" : "wear jerkin",
        "/domains/diku-alfa/room/30.zon/armor/3071_sleeves_studded_leather" : "wear sleeves",
        "/domains/diku-alfa/room/30.zon/armor/3076_gloves_reinforced" : "wear gloves",
        "/domains/diku-alfa/room/30.zon/armor/3068_pants_studded_leather" : "wear pants",
        "/domains/diku-alfa/room/30.zon/armor/3075_boots_reinforced" : "wear boots",
      ]) );
    SetMorality(-1000);
    AddCurrency("gold", 100);
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
MALE MOB - Name : orc [R-Number59], In room [3001] V-Number [4004]
Short description: the orc
Title: None
Long description: The orc walks around, looking for someone to kill.
Monster Class: Normal   Level [5] Alignment[-400]
Birth : [1316449644]secs, Logon[1316449644]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+5]  Hit p.:[76/76+5]  Move p.:[50/50+5]
AC:[50/10], Coins: [100], Exp: [1300], Hitroll: [5], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SCAVENGER ISNPC AGGRESSIVE STAY-ZONE ,Timer[0]
Mobile Special procedure : None
NPC Bare Hand Damage 2d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [15] [15] [15] [15] [15]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
