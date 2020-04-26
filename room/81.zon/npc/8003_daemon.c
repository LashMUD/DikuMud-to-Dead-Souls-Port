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

    SetKeyName("daemon");
    SetId(({"", ""}));
    SetAdjectives(({"", ""}));
    SetShort("the Daemon");
    SetLong("The Daemon looks at you expressionlessly, from the comfort of its\n"+
        "chair (it feels that way, anyway... You can't see its eyes). Then its\n"+
        "attention returns to the screens.");
    SetRace("demon"); //check for appropriate race
    SetLevel(10);
    SetCanBite(0); 
    SetMelee(1);  // added to classes that aren't "fighters"
    SetGender("neuter");
    SetInventory( ([
        "/domains/diku-alfa/room/81.zon/obj/key_8100" : 1,
        ]) );
    SetMorality(1000);
    SetPosition(POSITION_SITTING);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : daemon [R-Number144], In room [3001] V-Number [8003]
Short description: the Daemon
Title: None
Long description: The Daemon looks at you expressionlessly, from the comfort of
its chair (it feels that way, anyway... You can't see its eyes). Then its
attention returns to the screens.
Monster Class: Normal   Level [10] Alignment[400]
Birth : [1313969004]secs, Logon[1313969004]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+10]  Hit p.:[127/127+10]  Move p.:[50/50+10]
AC:[0/10], Coins: [0], Exp: [9000], Hitroll: [10], Damroll: [8]
Position: Resting, Fighting: Nobody
Default position: Resting, NPC flags: SENTINEL ISNPC, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [10] [10] [10] [10] [10]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/
