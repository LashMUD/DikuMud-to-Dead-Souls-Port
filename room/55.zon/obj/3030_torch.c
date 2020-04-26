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

inherit LIB_TORCH;

static void create() {
    torch::create();

    SetKeyName("torch");
    SetId( ({ "torch", "old torch", "wooden torch" }) );
    SetAdjectives( ({ "old", "wooden" }) );
    SetShort("a torch");
    SetLong("A large torch.");
    SetRadiantLight(7);
    SetFuelRequired(1);
    SetMaxFuel(500);
    SetFuelAmount(500);
    SetRefuelable(0);
    SetMass(10);
    SetBaseCost("gold",10);
    SetBurntValue(1);
    SetClass(10);
}

void init(){
    ::init();
}

mixed eventMove(mixed dest){
   
    if(stringp(dest)){
        dest = GetLastEnvironment();
        eventDestruct();
        return torch::eventMove(dest);
    }    
        
    if(objectp(dest) && living(dest)){
       eventBurn();
       return torch::eventMove(dest);
    }
    if(objectp(dest) && !living(dest)){
        eventExtinguish();
        return torch::eventMove(dest);
    }
    
}    

/*Extra Information Original Diku Output
Object name: [torch], R-number: [13], V-number: [3030] Item type: LIGHT
Short description: a torch
Long description:
A large torch.
Extra description keyword(s): None
Can be worn on :TAKE LIGHT-SOURCE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 10, Cost/day: 3, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Colour : [0]
Type : [0]
Hours : [24]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
