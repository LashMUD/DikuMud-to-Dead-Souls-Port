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

    SetKeyName("sewer spider");
    SetId(({"spider"}));
    SetAdjectives(({"", ""}));
    SetShort("The Small Spider");
    SetLong("The small hairy Spider.");
    SetRace("arachnid");
    SetClass("npc_melee");
    SetLevel(1); 
    SetGender("male");
    SetMorality(-1750);
    AddCurrency("gold" , 1);
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
MALE MOB - Name : spider [R-Number119], In room [7051] V-Number [7003]
Short description: The small Spider
Title: None
Long description: The small hairy Spider
Monster Class: Normal   Level [1] Alignment[-700]
Birth : [1313916736]secs, Logon[1313916736]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [6] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[16/100+1]  Hit p.:[18/18+1]  Move p.:[50/50+1]
AC:[30/10], Coins: [1], Exp: [100], Hitroll: [0], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC AGGRESSIVE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [19] [19] [19] [19] [19]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: SNEAK 
*/

