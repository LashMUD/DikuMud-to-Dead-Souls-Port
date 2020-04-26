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

    SetKeyName("sewer rat");
    SetId(({"rat", "sewer"}));
    SetAdjectives(({"", ""}));
    SetShort("The Great Sewer Rat");
    SetLong("The Huge Hungry-looking Sewer Rat sits here.");
    SetRace("rodent");
    SetClass("npc_melee"); 
    SetLevel(8);
    SetGender("male");
    SetMorality(-2500);    
    AddCurrency("gold" , 40);
    SetWander(5);  
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
MALE MOB - Name : rat [R-Number118], In room [3001] V-Number [7002]
Short description: The Great Sewer Rat
Title: None
Long description: The Huge Hungry-looking Sewer Rat sits here
Monster Class: Normal   Level [5] Alignment[-1000]
Birth : [1313917049]secs, Logon[1313917049]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+5]  Hit p.:[53/53+5]  Move p.:[50/50+5]
AC:[50/10], Coins: [40], Exp: [1000], Hitroll: [4], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC AGGRESSIVE, Timer [0]
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

