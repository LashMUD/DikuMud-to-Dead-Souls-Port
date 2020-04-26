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

void CheckNPC();

static void create(){
    sentient::create();

    SetKeyName("green dragon");
    SetId(({"dragon", "green", "beast"}));
    SetAdjectives(({"", ""}));
    SetShort("the Huge Green Dragon");
    SetLong("A huge green dragon is here, its narrow yellow eyes glowing with rage.");
    SetRace("dragon"); 
    SetClass("npc_melee");
    SetLevel(20);
    SetInventory( ([
        "/domains/diku-alfa/room/61.zon/armor/6112_crown_iron" : 1,
        ] ));
    SetMorality(-2500);
    AddCurrency("gold" , 10000);
    SetGender("neuter");
    SetPosition(POSITION_FLYING);
    SetEncounter( (:CheckNPC:) );
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
NEUTRAL-SEX MOB - Name : dragon green [R-Number109], In room [3001] V-Number [6112]
Short description: the huge, green dragon
Title: None
Long description: A huge green dragon is here, its narrow yellow eyes glowing
with rage.
Monster Class: Normal   Level [20] Alignment[-1000]
Birth : [1313904741]secs, Logon[1313904741]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+20]  Hit p.:[251/251+20]  Move p.:[50/50+20]
AC:[0/10], Coins: [0], Exp: [40000], Hitroll: [19], Damroll: [4]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL ISNPC AGGRESSIVE STAY-ZONE, Timer[0] 
Mobile Special procedure : None
NPC Bare Hand Damage 3d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/
