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
void Spells();

static void create() {
    sentient::create();

    SetKeyName("mage");
    SetId( ({"mage", "mu"}) );
    SetAdjectives(({"non-player", "evil", "mean", "magic"}));
    SetShort("A small mage");
    SetLong("He is reading in his magic books.");
    SetRace("human");
    SetClass("mage");
    SetLevel(11); //uses lightningbolt in magic_user.c
    SetCanBite(0);    
    SetGender("male");
    SetMorality(-800); 
    SetEncounter( (:CheckNPC:) );
    SetAction(10, ( :Scavenge: ));
    SetCombatAction(100, ( :Spells: ));
    AddCurrency("gold", 800);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
    //Special Procedures - casts spells
   
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
    int s, x;
    
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

void Spells(){
     //eventForce("\nsay In Spells\n");
     "/powers/npc/magic_user.c"->SpellCombat(this_object());
}

/* Extra Information Original Diku Output
MALE MOB - Name : mage [R-Number83], In room [3001] V-Number [4157]
Short description: the Mage
Title: None
Long description: A small mage is here.
Monster Class: Normal   Level [11] Alignment[-200]
Birth : [1316473054]secs, Logon[1316473054]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+11]  Hit p.:[103/103+11]  Move p.:[50/50+11]
AC:[20/10], Coins: [800], Exp: [11000], Hitroll: [10], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC SCAVENGER ISNPC AGGRESSIVE STAY-ZONE, Timer [0] 
Mobile Special procedure : Exists
NPC Bare Hand Damage 2d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [9] [9] [9] [9] [9]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
