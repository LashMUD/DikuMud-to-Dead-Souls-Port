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

mapping AvailableSpells;

int CheckTrash(object ob);

static void create() {
    sentient::create();
    
    SetKeyName("the Janitor");
    SetId( ({"janitor", "the janitor"}) );
    SetAdjectives(({"non-player", "non player"}));
    SetShort("the Janitor");
    SetLong("A janitor walking around, cleaning up.");
    SetCanBite(0);
    SetRace("human");
    SetLevel(1);
    SetClass("fighter");
    SetGender("male");
    SetMorality(2250);
    AddCurrency("gold", 34);
    SetWander(5);
    SetAction(100, ( :CheckTrash: ));
    SetProperty("STAY_ZONE", 1);
}

void init(){
    ::init();
}

int CheckTrash(object ob){

    int pos = this_object()->GetPosition();
    int badpos;    
    object env = environment(this_object());
    object *things;
    things = all_inventory(env);
    
    badpos = (POSITION_NULL|POSITION_SITTING|POSITION_LYING|POSITION_KNEELING);

    if(this_object()->GetSleeping() || this_object()->GetParalyzed() || pos & badpos){
        return 0;
    }
        
    if(env){
       foreach(ob in things){
           // no picking up corpses of players
           if(ob && (base_name(ob) == LIB_CORPSE && ob->isPlayer()) ) return 0;
           else if(ob && (inherits(LIB_ITEM, ob) || inherits(LIB_ARMOR, ob) || base_name(ob) == LIB_CORPSE || ob->GetKeyName() == "pile")){
               ob->eventMove(load_object("/domains/diku-alfa/room/furnace"));
               tell_room(env, "The janitor picks up some trash.");
           }
       }
    }
    //below commented out becuse rm_3030 is a "no npc allowed" room
    /*if(base_name(env) == "/domains/diku-alfa/room/30.zon/rm_3030") this_object()->eventForce("drop all");
    return 1;*/
}

/* Extra Information Original Diku Output
MALE MOB - Name : janitor [R-Number28], In room [3001]
V-Number [3061]
Short description: the Janitor
Title: None
Long description: A janitor is walking around, cleaning up.
Monster Class: Normal   Level [1] Alignment[900]
Birth : [1317253851]secs, Logon [1317253851]secs, Played [0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+1]  Hit p.:[20/20+1]  Move p.:[50/50+1]
AC:[90/10], Coins: [34], Exp: [100], Hitroll: [0], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC ISNPC , Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 1d5.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [19] [19] [19] [19] [19]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
        
