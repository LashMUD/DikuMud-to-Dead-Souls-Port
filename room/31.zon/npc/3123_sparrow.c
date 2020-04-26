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

static void create() {
    sentient::create();

    SetKeyName("the Sparrow");
    SetId( ({"sparrow", "bird", "fowl"}) );
    SetAdjectives(({"small", "cute"}));
    SetShort("the Sparrow");
    SetLong("The sparrow looks like it is enjoying life.");
    SetRace("bird");
    SetClass("npc_melee");
    SetLevel(1);
    SetPosition(POSITION_FLYING);
    SetGender("female");
    SetMorality(2500);
    SetWander(5);
    SetWimpy(30);
    SetProperty("STAY_ZONE", 1);
}

void init(){
    ::init();
}

/* Extra information Original Diku Output
NEUTRAL-SEX MOB - Name : sparrow [R-Number44], In room [3001]
V-Number [3123]
Short description: the Sparrow
Title: None
Long description: A sparrow is flapping around on the ground.
Monster Class: Normal   Level [0] Alignment[1000]
Birth : [1316441959]secs, Logon[1316441959]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+0]  Hit p.:[6/6+0]  Move p.:[50/50+0]
AC:[100/10], Coins: [0], Exp: [25], Hitroll: [0], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: ISNPC STAY-ZONE WIMPY ,Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d3.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [20] [20] [20] [20] [20]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
