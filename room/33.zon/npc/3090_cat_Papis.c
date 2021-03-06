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
    
    SetKeyName("cat");
    SetId( ({"cat", "kitten", "Papi's kitten"}) );
    SetAdjectives(({"non-player", "non player"}));
    SetShort("Papi's favorite cat, resting and purring gently");
    SetLong("This is just about the most huggable cat you have ever seen! You notice\n"+
            "that the cat has exceptionally big claws - guess it's nothing to worry\n"+
            "about as long as you leave it alone.");
    SetMelee(1);
    SetRace("cat");
    SetLevel(1);
    SetGender("male");
    SetMorality(2500);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : cat [R-Number51], In room [3300]
V-Number [3300]
Short description: the cat
Title: None
Long description: Papi's favorite cat is resting here, purring gently.

Monster Class: Normal   Level [30] Alignment[1000]
Birth : [1314901612]secs, Logon[1314901612]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+30]  Hit p.:[501/501+30]  Move p.:[50/50+30]
AC:[-100/10], Coins: [0], Exp: [0], Hitroll: [20], Damroll: [100]
Position: Resting, Fighting: Nobody
Default position: Resting,NPC flags: SENTINEL ISNPC STAY-ZONE ,Timer [0] 

Mobile Special procedure : None
NPC Bare Hand Damage 20d20.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE
*/
