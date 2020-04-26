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
    SetKeyName("ghoul");
    SetId( ({"ghoul", "undead", "ghastly"}) );
    SetAdjectives(({"non-player", "non player", "ghoul"}));
    SetShort("the Ghastly Ghoul");
    SetLong("It is a walking corpse with long fangs and long, sharp nails that most of\n"+
        "resemble claws. Its eyes are a dark yellow colour and glare hungrily at you.");
    SetInventory(([
        "/domains/diku-alfa/room/36.zon/obj/3612_silver_pendant" : 1,
        ]));
    SetRace("human");
    SetClass("fighter");
    SetLevel(6);
    SetUndead(1);
    SetUndeadType("ghoul");
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
NEUTRAL-SEX MOB - Name : ghoul [R-Number54], In room [3001]
V-Number [3602]
Short description: the ghastly ghoul
Title: None
Long description: A ghastly ghoul is here.

Monster Class: Normal   Level [6] Alignment[-750]
Birth : [1316448333]secs, Logon[1316448333]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+6]  Hit p.:[79/79+6]  Move p.:[50/50+6]
AC:[40/10], Coins: [0], Exp: [2000], Hitroll: [5], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SENTINEL ISNPC AGGRESSIVE ,Timer [0] 

Mobile Special procedure : None
NPC Bare Hand Damage 1d10.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [14] [14] [14] [14] [14]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
