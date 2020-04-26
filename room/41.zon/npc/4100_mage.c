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

//inherit "/domains/diku-alfa/etc/sentient.c";
inherit LIB_SENTIENT;

void CheckNPC();
void Scavenge();
void Spells();

static void create() {
    sentient::create();

    SetKeyName("the Mage");
    SetId( ({"mage"}) );
    SetAdjectives(({"non-player", "non player", "mage", "intelligent"}));
    SetShort("A small intelligent looking mage who looks like he knows\n"+
        "his way with the magic");
    SetLong("His IQ makes almost any dikumud player look stupid.");
    SetRace("human");
    SetClass("mage");
    SetLevel(14); //changed to use colour spray in magic_user.c
    SetCanBite(0);
    SetGender("male");
    SetMorality(-250);
    AddCurrency("gold", 1500);
    SetEncounter( (: CheckNPC :) );
    SetAction(10, ( :Scavenge: ));
    SetCombatAction(100, ( :Spells: ));
    //Other Special Procedures - Spell caster
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

void Spells(){
     //eventForce("\nsay In Spells\n");
     "/powers/npc/magic_user.c"->SpellCombat(this_object());
}

/* Extra Information Original Diku Output 
MALE MOB - Name : mage [R-Number68], In room [3001] V-Number [4100]
Short description: the Mage
Title: None
Long description: A small intelligent looking mage is standing here. It looks
like he knows his way with the magic.
Monster Class: Normal   Level [13] Alignment[-100]
Birth : [1316471461]secs, Logon[1316471461]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+13]  Hit p.:[138/138+13]  Move p.:[50/50+13]
AC:[20/10], Coins: [1500], Exp: [17000], Hitroll: [10], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SPEC SENTINEL SCAVENGER ISNPC AGGRESSIVE, Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 2d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [7] [7] [7] [7] [7]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE
*/
