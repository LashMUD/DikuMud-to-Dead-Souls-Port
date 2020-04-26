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
#include <armor_types.h>
#include <damage_types.h>

inherit LIB_ARMOR;

int WearHelmet(object who);
int CheckHelmet(object who);
int bonus;

static void create(){
    armor::create();

    SetKeyName("bronze helmet");
    SetId(({"helmet","bronze","bronze helmet"}));
    SetAdjectives(({""}));
    SetShort("a bronze helmet");
    SetLong("A bronze helmet.");
    SetMass(80);
    SetBaseCost("silver",2500);
    SetDamagePoints(500);
    SetProtection(BLUNT,12);
    SetProtection(BLADE,18);
    SetProtection(KNIFE,18);
    SetArmorType(A_HELMET);
    SetWear( (:WearHelmet:) );
}

void init(){
    ::init();
}

int WearHelmet(object who){

    object env = environment(who);
    
    bonus = who->GetMagicResistance()/5;
    who->AddSkillBonus("magic defense", ( :CheckHelmet: ));

    who->eventPrint("You wear "+this_object()->GetShort());
    if(env) tell_room(env, who->GetName()+" wears "+GetShort()+".", ({who}));

    return 1;
}

int CheckHelmet(){    

    if( !GetWorn() ){
    previous_object()->RemoveSkillBonus("magic defense", this_object());
    return 0;
    }
    else return bonus;        
    
}

/* Extra Information Original Diku Output
Object name: [helmet metal], R-number: [128], V-number: [4051]
Item type: ARMOR
Short description: a metal helmet
Long description:
A metal helmet in here.
Extra description keyword(s):
----------
helmet metal
----------
Can be worn on :TAKE HEAD HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 4, Value: 3000, Cost/day: 1000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [3]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : SAVING_SPELL By -2
    Affects : SAVING_BREATH By -2
*/
