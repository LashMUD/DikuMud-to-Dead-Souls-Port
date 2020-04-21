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

static void create() {
    sentient::create();

    SetKeyName("madam Esther");
    SetId( ({"esther", "madam"}) );
    SetAdjectives(({"non-player", "non player"}));
    SetShort("Madam Esther");
    SetLong("She is very big standing here, smiling to you. She looks like the\n"+
        "mother of the town, sometimes playing with the children, sometimes\n"+
        "helping the old people, with their daily work. All this in spite of\n"+
        "her own hard work, trying to merely sell some dust.");
    SetRace("human");
    SetLevel(1);
    SetCanBite(0);
    SetGender("female");
    SetMorality(2500);
    SetMelee(1);
    AddCurrency("gold",6);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
    SetAction(10, ( :Scavenge: ));
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
            }
        }
    }
}

/* Extra Information Original Diku Output
FEMALE MOB - Name : esther madam [R-Number128], In room [3001] V-Number [7012]
Short description: Madam Esther
Title: None
Long description: Madam Esther is standing here, trying to sell dust.
Monster Class: Normal   Level [2] Alignment[1000]
Birth : [1317254348]secs, Logon [1317254348]secs, Played [0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+2]  Hit p.:[25/25+2]  Move p.:[50/50+2]
AC:[70/10], Coins: [6], Exp: [150], Hitroll: [1], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, 
NPC flags: SCAVENGER ISNPC NICE-THIEF STAY-ZONE WIMPY, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [18] [18] [18] [18] [18]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
