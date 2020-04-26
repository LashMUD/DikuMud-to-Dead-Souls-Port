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
void CheckPoison(object ob);

static void create(){
    sentient::create();

    SetKeyName("spider Queen");
    SetId(({"spider", "Queen", "queen"}));
    SetAdjectives(({"", ""}));
    SetShort("the Queen Spider");
    SetLong("The huge, bulky Queen Spider is here.");
    SetRace("arachnid");
    SetClass("npc_melee");
    SetLevel(20);
    SetInventory( ([
        "/domains/diku-alfa/room/61.zon/obj/6113_sceptre_iron" : 1,
        ] ));
    SetMorality(-2500);
    AddCurrency("gold", 10000);
    SetGender("female");
    SetEncounter( (:CheckNPC:) );
    SetCombatAction(100, (:CheckPoison:));
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

void CheckPoison(object ob){

    int chance; 
    object env = environment(this_object());

    if(this_object()->GetInCombat()){
        ob = this_object()->GetCurrentEnemy();     
        chance = random(32)-this_object()->GetLevel();
        
        if(chance == 0){
            tell_room(env, "The Spider sinks its fangs into "+ob->GetShort()+"!", ({this_object(), ob}) );
            tell_object(ob, "The Spider sinks its fangs into you!");
            ob->AddPoison(50);
        }
    }
}    


/* Extra Information Original Diku Output 
FEMALE MOB - Name : queen spider [R-Number111], In room [3001] V-Number [6114]
Short description: the Queen Spider
Title: None
Long description: The huge, bulky Queen Spider is here.
Monster Class: Normal   Level [15] Alignment[-1000]
Birth : [1313905252]secs, Logon[1313905252]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+15]  Hit p.:[187/187+15]  Move p.:[50/50+15]
AC:[10/10], Coins: [0], Exp: [28000], Hitroll: [14], Damroll: [2]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC SENTINEL ISNPC AGGRESSIVE STAY-ZONE, Timer [0] 
Mobile Special procedure : Exists
NPC Bare Hand Damage 2d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [5] [5] [5] [5] [5]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/
