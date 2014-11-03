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
#include <rooms.h>

inherit LIB_SENTIENT;

int checkCombat();

static void create() {
    sentient::create();

    SetKeyName("the Cityguard");
    SetId(({"cityguard", "guard"}));
    SetAdjectives(({"non-player", "non player"}));
    SetShort("A Cityguard");
    SetLong("A big, strong, helpful, trustworthy guard.");
    SetCanBite(0);
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/weap/3022_longsword" : "wield sword",
        ]) );
    SetRace("human");
    SetClass("fighter");
    SetLevel(10);
    SetWimpy(30);
    SetGender("male");
    SetMorality(2500);
    AddCurrency("gold", 500);
    SetWander(5);
    SetAction(50, (:checkCombat:));
    SetProperty("STAY_ZONE", 1);
}

void init(){
    ::init();
}

int  checkCombat(){ 
    object array *tch;
    object array *evil;
    
    /*find out if there are combatants in the surrounding environment*/
    tch = filter(get_livings(environment(this_object())), 
        (: $1->GetInCombat() :));
    
    if( sizeof(tch) <= 0) return 0;

    /* sort out the bad guys */    
    evil = filter(tch, (: livings($1) && $1->GetMorality() < 700 :));
    if (sizeof(evil) <= 0) return 0;
    /* if the bad guy is killing a good guy then kill the bad guy */
    if (evil[0]->GetCurrentEnemy() && evil[0]->GetCurrentEnemy()->GetMorality() >=700){
        eventForce("kill "+evil[0]->GetKeyName());
        tell_room(environment(this_object()), 
            "%^BOLD%^%^GREEN%^%^A Cityguard screams 'PROTECT THE"+
            "INNOCENT!  BANZAI!!! CHARGE!!! ARARARAGGGHH!'%^RESET%^", ({this_object()}));
        return 1;
    }
}

/* Extra information Original Diku Output
MALE MOB - Name : cityguard guard [R-Number27], In room [3001]
V-Number [3060]
Short description: the Cityguard
Title: None
Long description: A cityguard stands here.
Monster Class: Normal   Level [10] Alignment[1000]
Birth : [1316441260]secs, Logon[1316441260]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+10]  Hit p.:[134/134+10]  Move p.:[50/50+10]
AC:[20/10], Coins: [500], Exp: [9000], Hitroll: [10], Damroll: [3]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC ISNPC STAY-ZONE WIMPY ,Timer [0] 
Mobile Special procedure : Exists
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [10] [10] [10] [10] [10]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
