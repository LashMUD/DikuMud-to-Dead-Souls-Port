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
    SetId( ({"orc", "hungry"}) );
    SetAdjectives(({"non-player", "non player", "orc", "hungry"}));
    SetShort("An orc looking for something (or perhaps someone ? ) to eat");
    SetLong("Well he doesn't seem to be friendly.");
    SetLevel(18);
    SetRace("orc");
    SetClass("fighter");
    SetGender("male");
    SetMorality(-2000);
    AddCurrency("gold", 150);
    SetWander(5);
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/weap/3023_woodenclub" : "wield club",
        "/domains/diku-alfa/room/30.zon/armor/3067_cap_leather_hard" : "wear cap",
        "/domains/diku-alfa/room/30.zon/armor/3066_jerkin_studded_leather" : "wear jerkin",
        "/domains/diku-alfa/room/30.zon/armor/3071_sleeves_studded_leather" : "wear sleeves",
        "/domains/diku-alfa/room/30.zon/armor/3070_gloves_hard_leather" : "wear gloves",
        "/domains/diku-alfa/room/30.zon/armor/3068_pants_studded_leather" : "wear pants",
        "/domains/diku-alfa/room/30.zon/armor/3069_boots_hard_leather" : "wear boots",
        ]) );
    SetEncounter( (: CheckNPC :) );
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
MALE MOB - Name : orc [R-Number67], In room [3001] V-Number [4056]
Short description: the orc
Title: None
Long description: An orc is here, looking for something (or perhaps someone ? )
to eat.
Monster Class: Normal   Level [8] Alignment[-800]
Birth : [1316450348]secs, Logon[1316450348]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+8]  Hit p.:[115/115+8]  Move p.:[50/50+8]
AC:[20/10], Coins: [150], Exp: [7000], Hitroll: [7], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC AGGRESSIVE STAY-ZONE ,Timer[0]
Mobile Special procedure : None
NPC Bare Hand Damage 2d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [12] [12] [12] [12] [12]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
