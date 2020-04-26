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
#include <position.h>

inherit LIB_SENTIENT;

void CheckNPC();

static void create(){
    sentient::create();

    SetKeyName("sewer bat");
    SetId(({"bat", "small", "mean"}));
    SetAdjectives(({"", ""}));
    SetShort("The Small Bat");
    SetLong("The small fierce-looking bat is hanging from the ceiling, obviously\n"+
        "sleeping.");
    SetRace("bat");
    SetClass("npc_melee"); 
    SetLevel(7);
    SetGender("neuter");
    SetPosition(POSITION_FLYING);
    SetMorality(-1250);
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
NEUTRAL-SEX MOB - Name : bat [R-Number117], In room [3001] V-Number [7001]
Short description: The small bat
Title: None
Long description: The small fierce-looking bat is hanging from the ceiling,
obviously sleeping.
Monster Class: Normal   Level [1] Alignment[-500]
Birth : [1313916776]secs, Logon[1313916776]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+1]  Hit p.:[13/13+1]  Move p.:[50/50+1]
AC:[40/10], Coins: [0], Exp: [200], Hitroll: [0], Damroll: [0]
Position: Sleeping, Fighting: Nobody
Default position: Sleeping,NPC flags: ISNPC AGGRESSIVE STAY-ZONE ,Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [19] [19] [19] [19] [19]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: SNEAK 
*/

