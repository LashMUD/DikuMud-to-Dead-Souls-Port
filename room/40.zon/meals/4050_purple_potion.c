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
#include <meal_types.h>

inherit LIB_MEAL;

int potionfunc();

static void create() {
    meal::create();
    SetKeyName("potion");
    SetId( ({ "potion","philtrum","purple" }) );
    SetShort("a purple potion");
    SetLong("It looks rather strange!");
    SetMass(1);
    SetMealType(MEAL_DRINK | MEAL_POISON);// potion is poisoned for some reason
    SetStrength(0);
    SetMealAction((: potionfunc :));
    SetBaseCost("gold",500);
    SetNoCondition(1);
    SetPreventDrop("You can't drop it. It must be CURSED!");
    SetProperty("magic", "This potion cures blindnes and confers sanctuary. It is also poisoned!");
    
}

void init(){
    ::init();
}

int potionfunc(){
    object ob = this_player();
    int s = 300;
        
    if(ob && ob->GetBlind()) ob->SetBlind(0);    
    if(!ob->GetProperty("sanctuary")){
        ob->AddProperty("sanctuary", s);
    }
}

/* Extra Information Original Diku Output
Object name: [potion purple], R-number: [127], V-number: [4050] Item type: POTION
Short description: a purple potion
Long description:
A purple potion is here.
Extra description keyword(s):
----------
potion purple
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 500, Cost/day: 200, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Spells : 17, 14, 36, 33
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
