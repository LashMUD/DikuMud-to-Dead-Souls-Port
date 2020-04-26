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

static void create(){
    sentient::create();

    SetKeyName("jones \"cruncher\" ettin");
    SetId(({"jones", "ettin", "cruncher"}));
    SetAdjectives(({"", ""}));
    SetShort("Jones \"Cruncher\" the Ettin");
    SetLong("Jones is standing here glaring at you.");
    SetRace("giant"); //possible new race 'ettin'
    SetClass("npc_melee")
    SetLevel(85);
    SetGender("male");
    AddCurrency("gold" , 60);
    SetMorality(-1200);
    SetWander(5);
    SetEncounter( (:CheckNPC:) );
    SetAction(10, ( :Scavenge: ));
    //need ettin functions
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
MALE MOB - Name : jones cruncher ettin [R-Number135], In room [3001] V-Number [7045]
Short description: Jones 'cruncher' the ettin
Title: None
Long description: Jones is standing here glaring at you.
Monster Class: Normal   Level [10] Alignment[-480]
Birth : [1313934284]secs, Logon[1313934284]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+10]  Hit p.:[134/134+10]  Move p.:[50/50+10]
AC:[20/10], Coins: [60], Exp: [11000], Hitroll: [9], Damroll: [2]
Position: Resting, Fighting: Nobody
Default position: Resting, NPC flags: SCAVENGER ISNPC AGGRESSIVE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [10] [10] [10] [10] [10]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
