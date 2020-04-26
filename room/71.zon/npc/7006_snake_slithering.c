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

    SetKeyName("sewer snake");
    SetId(({"snake", "slithering"}));
    SetAdjectives(({"", ""}));
    SetShort("the Slithering Snake");
    SetLong("The snake slithers towards you.");
    SetRace("viper"); //To add poison
    SetClass("npc_meleee");
    SetLevel(10);
    SetGender("neuter");
    AddCurrency("gold" , 1);
    SetMorality(-1250);
    SetWander(5);
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
            tell_room(env, "The Snake sinks its fangs into"+ob->GetShort()+"!", ({this_object(), ob}) );
            tell_object(ob, "The Snake sinks its fangs into you!");
            ob->AddPoison(25);
        }
    }
}    

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : snake [R-Number122], In room [3001] V-Number [7006]
Short description: The slithering snake
Title: None
Long description: The snake slithers towards you
Monster Class: Normal   Level [4] Alignment[-500]
Birth : [1313917810]secs, Logon[1313917810]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+4]  Hit p.:[48/48+4]  Move p.:[50/50+4]
AC:[70/10], Coins: [1], Exp: [1000], Hitroll: [4], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC ISNPC AGGRESSIVE, Timer [0] 
Mobile Special procedure : Exists
NPC Bare Hand Damage 1d9.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [16] [16] [16] [16] [16]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
