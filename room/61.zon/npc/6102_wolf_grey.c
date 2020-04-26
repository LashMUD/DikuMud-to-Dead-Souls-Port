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

static void create(){
    sentient::create();
    
    SetKeyName("grey wolf");
    SetId(({"wolf", "grey"}));
    SetAdjectives(({"", ""}));
    SetShort("the Large, Grey Wolf");
    SetLong("A large, grey wolf is here, glaring hungrily at you.");
    SetRace("dog");
    SetClass("npc_melee"); 
    SetLevel(8);
    SetMorality(-375);
    SetGender("neuter");
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
    SetEncounter( (:CheckNPC:) );
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

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : wolf grey [R-Number105], In room [3001] V-Number [6102]
Short description: the large, grey wolf
Title: None
Long description: A large, grey wolf is here, glaring hungrily at you.
Monster Class: Normal   Level [3] Alignment[-150]
Birth : [1313903888]secs, Logon[1313903888]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+3]  Hit p.:[36/36+3]  Move p.:[50/50+3]
AC:[70/10], Coins: [0], Exp: [450], Hitroll: [2], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC AGGRESSIVE STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d7.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [17] [17] [17] [17] [17]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
