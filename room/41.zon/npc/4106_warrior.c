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

    SetKeyName("warrior");
    SetId( ({"warrior"}) );
    SetAdjectives(({"non-player","evil","mean"}));
    SetShort("A human warrior with an evil grin on his face");
    SetLong("He doesn't look friendly at all...");
    SetRace("human");
    SetLevel(9);
    SetClass("fighter");
    SetCanBite(0);
    SetMelee(1);
    SetGender("male");
    SetMorality(-750);
    SetEncounter( (:CheckNPC:) );
    SetAction(10, ( :Scavenge: ));
    SetWander(5);
    AddCurrency("gold", 500);
    SetInventory( ([
        "/domains/diku-alfa/room/41.zon/armor/4101_swordmans_gloves" : "wear gloves",
        ]) );
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
MALE MOB - Name : warrior [R-Number74], In room [3001] V-Number [4106]
Short description: the Warrior
Title: None
Long description: A human warrior is here. He has an evil grin in his face.
Monster Class: Normal   Level [9] Alignment[-300]
Birth : [1316472134]secs, Logon[1316472134]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+9]  Hit p.:[125/125+9]  Move p.:[50/50+9]
AC:[30/10], Coins: [500], Exp: [9000], Hitroll: [10], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC AGGRESSIVE STAY-ZONE, Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 2d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [11] [11] [11] [11] [11]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
