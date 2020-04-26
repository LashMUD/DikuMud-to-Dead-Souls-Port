#include <lib.h>
#include <position.h>

inherit LIB_SENTIENT;

static void create(){
    sentient::create();

    SetKeyName("the pet dragon");
    SetId(({"dragon", "pet"}));
    SetAdjectives(({"", ""}));
    SetShort("the Pet Dragon");
    SetLong("Ravan's pet dragon is bouncing around here flapping her cute wings.");
    SetPosition(POSITION_FLYING);
    SetRace("dragon");
    SetClass("npc_melee"); 
    SetLevel(1);
    SetMorality(2500);
    SetGender("female");
    SetWimpy(30);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
FEMALE MOB - Name : dragon pet [R-Number96], In room [3015] V-Number [5050]
Short description: the pet dragon
Title: None
Long description: Ravan's pet dragon is bouncing around here flapping her cute
wings.
Monster Class: Normal   Level [1] Alignment[1000]
Birth : [1313893176]secs, Logon[1313893176]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+1]  Hit p.:[157/157+1]  Move p.:[50/50+1]
AC:[0/10], Coins: [0], Exp: [30000], Hitroll: [20], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL ISNPC WIMPY, Timer [0] 
Mobile Special procedure : None
NPC Bare Hand Damage 10d10.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [19] [19] [19] [19] [19]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE SANCTUARY CHARM 
*/

