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

int CheckCorpse(object ob);

static void create() {
    sentient::create();
    
    SetKeyName("fido");
    SetId( ({"fido", "beastly"}) );
    SetAdjectives(({"non-player", "non player"}));
    SetShort("Beastly Fido");
    SetLong("Fido is a small dog that has a foul smell and pieces of rotted meat hanging around his teeth.");
    SetRace("dog");
    SetLevel(1);
    SetGender("male");
    SetMorality(-500);
    SetWimpy(30);
    SetWander(5);
    AddCurrency("gold", 10);
    SetAction(100, (: CheckCorpse :));
}

void init(){
    ::init();
}


int CheckCorpse(object ob){
    
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
           // no devouring corpses of players
           if (ob && (base_name(ob) == LIB_CORPSE && !ob->isPlayer()) ){
               ob->eventDestruct();
               tell_room(env, "The "+this_object()->GetShort()+" savagely devours a corpse.");
           }
       }           
    }
}

/* Extra Information Original Diku Output
MALE MOB - Name : fido dog [R-Number29], In room [3001] V-Number [3062]
Short description: the Beastly Fido
Title: None
Long description: Beastly Fido is here.
Monster Class: Normal   Level [0] Alignment[-200]
Birth : [1317253886]secs, Logon [1317253886]secs, Played [0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+0]  Hit p.:[9/9+0]  Move p.:[50/50+0]
AC:[100/10], Coins: [10], Exp: [25], Hitroll: [0], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SPEC ISNPC AGGRESSIVE WIMPY , Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 1d4.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [20] [20] [20] [20] [20]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
