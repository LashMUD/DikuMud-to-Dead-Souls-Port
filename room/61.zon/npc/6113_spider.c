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

    SetKeyName("huge poisonous spider");
    SetId(({"spider", "huge"}));
    SetAdjectives(({"", ""}));
    SetShort("the Huge Poisonous Spider");
    SetLong("A huge, poisonous spider is here.");
    SetRace("arachnid"); 
    SetClass("npc_melee");
    SetLevel(8);
    SetMorality(-875);
    SetGender("neuter");
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
            ob->AddPoison(25);
        }
    }
}    

/* Extra Information Original Diku Output 
NEUTRAL-SEX MOB - Name : spider poisonous [R-Number110], In room [3001] V-Number [6113]
Short description: the huge, poisonous spider
Title: None
Long description: A huge, poisonous spider is here.
Monster Class: Normal   Level [8] Alignment[-350]
Birth : [1313905009]secs, Logon[1313905009]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+8]  Hit p.:[109/109+8]  Move p.:[50/50+8]
AC:[20/10], Coins: [0], Exp: [6000], Hitroll: [7], Damroll: [1]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC SENTINEL ISNPC AGGRESSIVE STAY-ZONE, Timer [0] 
Mobile Special procedure : Exists
NPC Bare Hand Damage 2d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [12] [12] [12] [12] [12]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
