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

    SetKeyName("morkoth");
    SetId(({"morkoth"}));
    SetAdjectives(({"", ""}));
    SetShort("the Shadowy Morkoth");
    SetLong("The Morkoth is standing here, waiting for someone to KILL!");
    SetRace("primate"); //need new race 'morkoth'
    SetClass("npc_melee");
    SetLevel(40);
    SetWimpy(30);
    SetGender("neuter");
    AddCurrency("gold" , 1);
    SetMorality(-900);
    SetWander(5);
    SetEncounter( (:CheckNPC:) );
    //need morkoth functions
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
NEUTRAL-SEX MOB - Name : morkoth [R-Number127], In room [7424] V-Number [7011]
Short description: the shadowy Morkoth
Title: None
Long description: The Morkoth is standing here, waiting for someone to KILL!
Monster Class: Normal   Level [10] Alignment[-900]
Birth : [1313965304]secs, Logon[1313965304]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [10] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[100/100+10]  Hit p.:[122/122+10]  Move p.:[50/50+10]
AC:[30/10], Coins: [1], Exp: [9000], Hitroll: [8], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC AGGRESSIVE WIMPY, Timer [0] 
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

