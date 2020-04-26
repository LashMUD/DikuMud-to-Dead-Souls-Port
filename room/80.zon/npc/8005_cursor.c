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

static void create(){
    sentient::create();

    SetKeyName("cursor");
    SetId(({"cursor", "faerie"}));
    SetAdjectives(({"", ""}));
    SetShort("the cursor");
    SetLong("The Cursor is here, tracing incomprehensible patterns in the air.");
    SetRace("faerie"); //check for appropriate race
    SetLevel(3);
    SetMelee(1); 
    SetGender("neuter");
    SetMorality(0);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
    SetPosition(POSITION_FLYING);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : cursor [R-Number145], In room [3001] V-Number [8005]
Short description: the cursor
Title: None
Long description: The Cursor is here, tracing incomprehensible patterns in the
air.
Monster Class: Normal   Level [3] Alignment[0]
Birth : [1313967800]secs, Logon[1313967800]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+3]  Hit p.:[32/32+3]  Move p.:[50/50+3]
AC:[50/10], Coins: [0], Exp: [450], Hitroll: [4], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 2d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [17] [17] [17] [17] [17]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
