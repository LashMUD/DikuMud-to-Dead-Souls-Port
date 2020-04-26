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
    ::create();
    SetKeyName("iron sceptre");
    SetId( ({"sceptre", "iron", "iron sceptre"}) );
    SetAdjectives( ({"generic","sample","template"}) );
    SetShort("an iron sceptre");
    SetLong("It is a heavy sceptre made from solid iron.");
    SetMass(100);
    SetBaseCost("gold", 5000);
    SetRadiantLight(100);
    SetFuelRequired(0);
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
       SetLit(1);
       return torch::eventMove(dest);
    }
    if(objectp(dest) && !living(dest)){
        SetLit(0);
        return torch::eventMove(dest);
    }
    
}    

/* Extra Information Original Diku Output 
Object name: [sceptre iron], R-number: [175], V-number: [6113]
Item type: LIGHT
Short description: an iron sceptre
Long description:
An iron sceptre lies on the ground.
Extra description keyword(s):
----------
sceptre iron
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: MAGIC 
Weight: 10, Value: 5000, Cost/day: 1500, Timer: 0
In room: 6143 ,In object: None ,Carried by:Nobody
Colour : [0]
Type : [0]
Hours : [-1]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
