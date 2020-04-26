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

void CheckNPC();

static void create() {
    sentient::create();

    SetKeyName("zombie");
    SetId( ({"zombie", "corpse", "rotting"}) );
    SetAdjectives(({"non-player", "non player", "corpse"}));
    SetShort("a Rotting Corpse");
    SetLong("A rotting corpse is staggering towards you with outstretched hands.\n"+
        "Maggots crawl all over its decaying body.");
    SetInventory(([
        "/domains/diku-alfa/room/36.zon/obj/3611_amethyst" : 1,
        ]));
    SetRace("human");
    SetClass("fighter");
    SetLevel(4);
    SetUndead(1);
    SetUndeadType("zombie");
    SetGender("neuter");
    SetEncounter( (:CheckNPC:) );
    SetMorality(-1875);
}

void init(){
    ::init();
}

/*Do not attack other NPC's*/
void CheckNPC(object ob){
 
 object env=environment(this_object());
 if(ob && !inherits(LIB_NPC, ob)){
         eventForce("kill " +ob->GetKeyName());
 }
}

/* Extra Information Original Diku Output
NEUTRAL-SEX MOB - Name : corpse zombie [R-Number53], In room [3001]
V-Number [3601]
Short description: the rotting corpse
Title: None
Long description: A rotting corpse is staggering towards you with outstretched
hands.
Monster Class: Normal   Level [4] Alignment[-750]
Birth : [1316448195]secs, Logon[1316448195]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+4]  Hit p.:[65/65+4]  Move p.:[50/50+4]
AC:[50/10], Coins: [0], Exp: [1200], Hitroll: [4], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SENTINEL ISNPC AGGRESSIVE ,Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [16] [16] [16] [16] [16]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
