#include <lib.h>

inherit LIB_SENTIENT;

void CheckNPC();

static void create(){
    sentient::create();
    
    SetKeyName("the Ferocious R");
    SetId(({"rabbit", "killer"}));
    SetAdjectives(({"", ""}));
    SetShort("the Ferocious Rabbit");
    SetLong("A ferocious rabbit is here, glaring hungrily at you.");
    SetRace("rodent");
    SetClass("npc_melee"); 
    SetLevel(15);
    SetMorality(-375);
    SetWander(5);
    SetGender("neuter");
    SetProperty("STAY_ZONE", 1);
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
NEUTRAL-SEX MOB - Name : rabbit [R-Number100], In room [6900]
V-Number [6003]
Short description: the ferocious rabbit
Title: None
Long description: A ferocious rabbit is here, glaring hungrily at you.
Monster Class: Normal   Level [3] Alignment[-150]
Birth : [1313911910]secs, Logon[1313911910]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [12] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[46/100+3]  Hit p.:[30/30+3]  Move p.:[50/50+3]
AC:[60/10], Coins: [0], Exp: [350], Hitroll: [3], Damroll: [0]
Position: Sleeping, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC AGGRESSIVE STAY-ZONE, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [17] [17] [17] [17] [17]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/

