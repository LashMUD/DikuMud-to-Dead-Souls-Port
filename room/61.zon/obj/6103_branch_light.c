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
#include <vendor_types.h>

inherit LIB_TORCH;

void create(){
    torch::create();
    SetKeyName("a long grey branch");
    SetId( ({"branch", "long", "grey", "light"}) );
    SetAdjectives( ({"generic","sample","template"}) );
    SetShort("a long grey branch");
    SetLong("It is quite heavy and looks as if it has been dropped from great height.  It is\n"+
        "long dead and very dry.  Could probably be lighted quite easily.");
    SetMass(200);
    SetBaseCost("gold", 1);
    SetFuelRequired(1);
    SetFuelAmount(625);
    SetRefuelable(0);
    SetRadiantLight(13);
    SetBurntValue(1);
    SetVendorType(VT_LIGHT);
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

/* Extra Information Original Diku Output 
Object name: [branch], R-number: [165], V-number: [6103]
Item type: LIGHT
Short description: a long, grey branch
Long description:
A long, grey branch rests heavily on the ground.
Extra description keyword(s):
----------
branch
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 20, Value: 1, Cost/day: 3, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Colour : [0]
Type : [0]
Hours : [25]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
