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

    SetKeyName("gigantic sewer rat");
    SetId(({"rat", "giant rat"}));
    SetAdjectives(({"", ""}));
    SetShort("the Gigantic Rat");
    SetLong("There is a gigantic rat here, looking at you with a hungry look.");
    SetRace("rodent");
    SetClass("npc_melee");
    SetLevel(12);
    SetGender("male");
    AddCurrency("gold" , 2513);
    SetMorality(-2000);
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
MALE MOB - Name : rat gigantic [R-Number141], In room [3001] V-Number [7204]
Short description: The gigantic rat
Title: None
Long description: There is a gigantic rat here, looking at you with a hungry
look.
Monster Class: Normal   Level [12] Alignment[-800]
Birth : [1313932923]secs, Logon[1313932923]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+12]  Hit p.:[160/160+12]  Move p.:[50/50+12]
AC:[20/10], Coins: [2513], Exp: [13000], Hitroll: [11], Damroll: [2]
Position: Sleeping, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL ISNPC AGGRESSIVE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [8] [8] [8] [8] [8]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
