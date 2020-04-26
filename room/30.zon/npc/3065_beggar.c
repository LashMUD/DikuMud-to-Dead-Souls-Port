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

static void create() {
    sentient::create();

    SetKeyName("the Beggar");
    SetId( ({"beggar"}) );
    SetAdjectives(({"non-player", "non player"}));
    SetShort("a Beggar");
    SetLong("The beggar looks like she is fed up with life. She is asking for a few coins.");
    SetRace("human");
    SetLevel(1);
    SetGender("female");
    SetMorality(1000);
    SetMelee(1);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
FEMALE MOB - Name : beggar [R-Number32], In room [3001] V-Number [3065]
Short description: the Beggar
Title: None
Long description: A beggar is here, asking for a few coins.
Monster Class: Normal   Level [1] Alignment[400]
Birth : [1317254009]secs, Logon [1317254009]secs, Played [0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+1]  Hit p.:[19/19+1]  Move p.:[50/50+1]
AC:[90/10], Coins: [0], Exp: [100], Hitroll: [0], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL ISNPC , Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [19] [19] [19] [19] [19]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
