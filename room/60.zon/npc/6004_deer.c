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

    SetKeyName("deer");
    SetId(({"deer", "fallow"}));
    SetAdjectives(({"", ""}));
    SetShort("the Fallow Deer");
    SetLong("A fallow deer is grazing peacefully here.");
    SetRace("deer");
    SetClass("npc_melee"); 
    SetLevel(5);
    SetMorality(875);
    SetGender("female");
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
FEMALE MOB - Name : deer [R-Number101], In room [3001] V-Number [6004]
Short description: the fallow deer
Title: None
Long description: A fallow deer is grazing peacefully here.
Monster Class: Normal   Level [2] Alignment[350]
Birth : [1313902998]secs, Logon[1313902998]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+2]  Hit p.:[9/9+2]  Move p.:[50/50+2]
AC:[20/10], Coins: [0], Exp: [200], Hitroll: [1], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL ISNPC NICE-THIEF STAY-ZONE, Timer[0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [18] [18] [18] [18] [18]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/

