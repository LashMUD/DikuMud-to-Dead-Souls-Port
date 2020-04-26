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

static void create() {
    sentient::create();

    SetKeyName("the brown snake");
    SetId( ({"snake", "brown"}) );
    SetAdjectives(({"non-player", "non player", "brown"}));
    SetShort("a brown snake, watching you,");
    SetLong("The snake looks quite mean");
    SetRace("viper"); //To add poison
    SetClass("fighter");
    SetLevel(100);
    SetGender("neuter");
    SetMorality(-1500);
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
        chance = random(/*32*/5)-this_object()->GetLevel();
        
        if(chance >= 0){
            tell_room(env, "%^BOLD%^%^GREEN%^The Snake sinks its fangs into "+ob->GetShort()+"!%^RESET%^\n", ({this_object(), ob}) );
            tell_object(ob, "%^BOLD%^%^GREEN%^The Snake sinks its fangs into you!%^RESET%^\n");
            ob->AddPoison(25);
        }
    }
}    

/* Extra Information Original Diku Output
NEUTRAL-SEX MOB - Name : snake [R-Number64], In room [3001] V-Number [4053]
Short description: the snake
Title: None
Long description: A brown snake watches you.
Monster Class: Normal   Level [10] Alignment[-600]
Birth : [1316450110]secs, Logon[1316450110]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+10]  Hit p.:[61/61+10]  Move p.:[50/50+10]
AC:[40/10], Coins: [0], Exp: [10000], Hitroll: [10], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SPEC SENTINEL ISNPC AGGRESSIVE ,Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 3d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [10] [10] [10] [10] [10]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
