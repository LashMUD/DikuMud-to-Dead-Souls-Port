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

/*int AllowPass(object who, object what){
    if(!who) return 0;
    if(!objectp(who)) return 0;
    if(who->GetClass() == "thief" || adminp(who)) return 1; 
    return ::AllowPass(who, what);
}*/

static void create() {
    sentient::create();

    SetKeyName("the Assassin Guard");
    SetId(({"npc","mob","character","mobile", "assassin"}));
    SetAdjectives(({"non-player", "non player"}));
    SetShort("an Assassin");
    SetLong("He is a thief who has specialized in killing others as effectively as possible,\n"+
        "using all sorts of weapons.  His superior knowledge of how and where to use\n"+
        "them combined with his extraordinary stealth makes him a deadly opponent.");
    SetCanBite(0);
    SetRace("human");
    SetClass("thief");
    SetLevel(23);
    SetGender("male");
    SetMelee(1);
    SetMorality(2000);
    AddCurrency("gold", 2000);
    SetProperty("no bump", 1);
    //SetGuard("east" , "The guard humiliates you, and blocks your way.");
}



void init(){
    ::init();
}

/* Extra Information Original Diku Output
MALE MOB - Name : assassin [R-Number18], In room [3001] V-Number [3026]
Short description: the Assassin
Title: None
Long description: An assassin is guarding the entrance.
Monster Class: Normal   Level [23] Alignment[800]
Birth : [1317253458]secs, Logon [1317253458]secs, Played [0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+23]  Hit p.:[422/422+23]  Move p.:[50/50+23]
AC:[40/10], Coins: [2000], Exp: [80000], Hitroll: [16], Damroll: [12]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL ISNPC , Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
