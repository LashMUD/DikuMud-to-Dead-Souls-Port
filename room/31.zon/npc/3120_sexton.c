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

static void create() {
    sentient::create();

    SetKeyName("the Sexton");
    SetId( ({"sexton"}) );
    SetAdjectives(({""}));
    SetShort("a Sexton");
    SetLong("The Sexton looks like he is relaxing after another gravedigging job.\n"+
        "He frequents The Park Cafe to enjoy a nice cup of hot tea.");
    SetRace("human");    
    SetClass("fighter");
    SetLevel(5);
    SetPosition(POSITION_SITTING);
    SetAutoStand(0);
    SetCanBite(0);
    AddCurrency("gold", 13);
    SetGender("male");
    SetMorality(2000);
    SetInventory( ([
       "/domains/diku-alfa/room/31.zon/obj/key_3121" : 1,
    ]) );                
}

void init(){
    ::init();
}

/* Extra information Original Diku Output
MALE MOB - Name : sexton [R-Number41], In room [3001]
V-Number [3120]
Short description: the Sexton
Title: None
Long description: A Sexton is sitting here, drinking hot tea.
Monster Class: Normal   Level [3] Alignment[800]
Birth : [1316441624]secs, Logon[1316441624]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[13/100+3]  Hit p.:[39/39+3]  Move p.:[50/50+3]
AC:[70/10], Coins: [13], Exp: [350], Hitroll: [2], Damroll: [0]
Position: Sitting, Fighting: Nobody
Default position: Sitting, NPC flags: SENTINEL ISNPC ,Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d7.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [17] [17] [17] [17] [17]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
