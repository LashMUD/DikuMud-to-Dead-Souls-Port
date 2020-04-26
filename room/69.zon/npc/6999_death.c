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
    
    SetKeyName("death");
    SetId(({"death", "reaper", "grim reaper", "grim"}));
    SetAdjectives(({"", ""}));
    SetShort("Death");
    SetLong("Death the Grim Reaper is observing you silently from empty eye sockets.");
    SetRace("demi-god"); //check for appropriate race
    SetClass("fighter");
    SetLevel(30);
    SetCanBite(0);
    SetMorality(-2500);
    SetGender("neuter");
    SetInventory( ([
        "/domains/diku-alfa/room/69.zon/weap/6999_scythe" : "wield scythe",
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : death reaper [R-Number115], In room [6999] V-Number [6999]
Short description: Death
Title: None
Long description: Death the Grim Reaper is observing you silently from empty eye
sockets.
Monster Class: Normal   Level [30] Alignment[-1000]
Birth : [1313965304]secs, Logon[1313965304]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [2] Days,  [12] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[100/100+30]  Hit p.:[666/666+30]  Move p.:[50/50+30]
AC:[-100/10], Coins: [0], Exp: [500000], Hitroll: [20], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL ISNPC, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d100.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 1
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE SNEAK 
*/
