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

void Scavenge();

static void create(){
    sentient::create();
    
    SetKeyName("chr-eff'n");
    SetId(({"chr-eff'n", "chr"}));
    SetAdjectives(({"", ""}));
    SetShort("the Evil Chr-eff'n");
    SetLong("The chr-eff'n are crawling here, looking around with it's yellow eyes.");
    SetRace("human"); //need new race 'chr-eff'n'
    SetClass("npc_melee");
    SetLevel(32);
    SetGender("neuter");
    SetWimpy(30);
    AddCurrency("gold" , 1500);
    SetMorality(-2075);
    SetWander(5);
    SetAction(10, ( :Scavenge: ));
    //need chr-eff'n functions
}

void init(){
    ::init();
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
NEUTRAL-SEX MOB - Name : chr-eff'n chr [R-Number126], In room [3001] V-Number [7010]
Short description: the evil chr-eff'n
Title: None
Long description: The chr-eff'n are crawling here, looking around with it's
yellow eyes.
Monster Class: Normal   Level [12] Alignment[-830]
Birth : [1313965866]secs, Logon[1313965866]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+12]  Hit p.:[185/185+12]  Move p.:[50/50+12]
AC:[20/10], Coins: [1500], Exp: [13000], Hitroll: [11], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SCAVENGER ISNPC WIMPY, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d7.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [8] [8] [8] [8] [8]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE SNEAK 
*/
