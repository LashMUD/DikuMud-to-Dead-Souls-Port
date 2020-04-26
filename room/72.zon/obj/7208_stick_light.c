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
    SetKeyName("small stick");
    SetId( ({"light", "small", "stick", "small stick"}) );
    SetAdjectives( ({"generic","sample","template"}) );
    SetShort("a small stick");
    SetLong("The small stick does not look interesting at all.  But just as you are going\n"+
        "to throw it away you notice some small letters.");
    SetMass(40);
    SetBaseCost("gold", 200);
    SetFuelRequired(1);
    SetFuelAmount(1200);
    SetRefuelable(0);
    SetRadiantLight(30);
    SetVendorType(VT_LIGHT);
    SetItems( ([    
        ({"letters", "letter"}) : "\nIt reads: 'Carry me.\n",
        ]) );    
    SetRead( ([
        ({"letters", "writing"}) : "\n\nIt reads: 'Carry me.\n",
        ]) );
    
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
Object name: [stick small light], R-number: [199], V-number: [7208]
Item type: LIGHT
Short description: a small stick
Long description:
A small stick lies here.
Extra description keyword(s):
----------
letters letter
small stick
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 4, Value: 200, Cost/day: 200, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Colour : [0]
Type : [0]
Hours : [120]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
