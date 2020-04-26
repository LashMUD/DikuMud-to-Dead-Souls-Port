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
    SetKeyName("the snake");
    SetId( ({"snake"}) );
    SetAdjectives(({"non-player", "non player", "dreadful"}));
    SetShort("the snake");
    SetLong("A large dreadful snake.\n"+
        "It looks hungry.");
    SetRace("viper"); //To add poison
    SetClass("fighter");
    SetLevel(20);
    SetGender("neuter");
    SetMorality(-500);
    SetEncounter( (:CheckNPC:) );
    SetInventory( ([
        "/domains/diku-alfa/room/40.zon/obj/4001_goblin_corpse" : 1,
        ]) );
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
            tell_room(env, "%^BOLD%^%^GREEN%^The Snake sinks its fangs into "+ob->GetShort()+"!%^RESET%^\n", ({this_object(), ob}) );
            tell_object(ob, "%^BOLD%^%^GREEN%^The Snake sinks its fangs into you!%^RESET%^\n");
            ob->AddPoison(50);
        }
    }
}    

/* Extra Information Original Diku Output
NEUTRAL-SEX MOB - Name : snake [R-Number55], In room [3001] V-Number [4000]
Short description: the snake
Title: None
Long description: A large dreadful snake.
Monster Class: Normal   Level [11] Alignment[-200]
Birth : [1316449298]secs, Logon[1316449298]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+11]  Hit p.:[78/78+11]  Move p.:[50/50+11]
AC:[40/10], Coins: [0], Exp: [12000], Hitroll: [13], Damroll: [0]
Position: Fighting, Fighting: Lash
Default position: Standing, NPC flags: SPEC SENTINEL ISNPC AGGRESSIVE ,Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 3d6.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [9] [9] [9] [9] [9]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: DETECT-INVISIBLE 
*/
