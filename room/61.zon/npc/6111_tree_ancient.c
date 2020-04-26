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

static void create(){
    sentient::create();

    SetKeyName("ancient tree");
    SetId(({"tree", "ancient"}));
    SetAdjectives(({"", ""}));
    SetShort("a Huge Ancient Tree");
    SetLong("A huge, ancient tree towers above you. Its roots are\n"+
        "extremely big and large parts of them are above ground.\n"+
        "The enormous grey trunk shivers slightly, as if sighing deeply.");
    SetRace("plant"); //check for appropriate race
    SetLevel(30);
    SetClass("npc_melee");
    SetCanBite(0);
    SetMorality(0);
    SetGender("neuter");
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : tree ancient [R-Number108], In room [3001] V-Number [6111]
Short description: a huge, ancient tree, walking on giant roots,
Title: None
Long description: A huge, ancient tree towers above you.
Monster Class: Normal   Level [30] Alignment[0]
Birth : [1313903996]secs, Logon[1313903996]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [3] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[100/100+30]  Hit p.:[1000/1000+30]  Move p.:[50/50+30]
AC:[-100/10], Coins: [0], Exp: [500000], Hitroll: [19], Damroll: [10]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC NICE-THIEF STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE SNEAK 
*/
