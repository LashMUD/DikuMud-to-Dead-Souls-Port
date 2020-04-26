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

static void create(){
    sentient::create();

    SetKeyName("aruncus");
    SetId(({"druid", "aruncus"}));
    SetAdjectives(({"", ""}));
    SetShort("Aruncus the Druid");
    SetLong("Aruncus the Druid is walking around here, searching for herbs.");
    SetCanBite(0);
    SetInventory( ([" " : " "] ));
    SetRace("human");
    SetClass("cleric");
    SetLevel(13);
    SetMorality(-1250);
    AddCurrency("gold" , 500);
    SetGender("male");
    SetWimpy(30);
    SetWander(5);
    SetProperty("STAY_ZONE", 1);
    SetInventory( ([
        "domains/diku-alfa/room/50.zon/obj/5008_staff" : "wield staff",
        "domains/diku-alfa/room/50.zon/armor/5007_amulet" : "wear amulet",
        "domains/diku-alfa/room/50.zon/obj/5012_scroll_jhyfrdow" : 1,
        "domains/diku-alfa/room/50.zon/meals/5002_ivy_poison" : 1,
        ]) );
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
MALE MOB - Name : druid Aruncus [R-Number87], In room [5025] V-Number [5000]
Short description: Aruncus the Druid
Title: None
Long description: Aruncus the Druid is walking around here, searching for herbs.
Monster Class: Normal   Level [13] Alignment[-500]
Birth : [1313887417]secs, Logon[1313887417]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [16] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[100/100+13]  Hit p.:[166/166+13]  Move p.:[50/50+13]
AC:[20/10], Coins: [500], Exp: [15000], Hitroll: [12], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: ISNPC STAY-ZONE WIMPY, Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 3d5.
Carried weight: 2   Carried items: 2
Items in inventory: 2, Items in equipment: 2
Apply saving throws: [7] [12] [7] [7] [7]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/


