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

    SetKeyName("lantern");
    SetId( ({"lantern"}) );
    SetAdjectives( ({"generic","sample","template"}) );
    SetShort("a lantern");
    SetLong("A brass lantern.");
    SetMass(20);
    SetBaseCost("gold",50);
    SetRadiantLight(30);
    SetFuelRequired(1);
    SetMaxFuel(500);
    SetFuelAmount(500);
    SetRefuelable(0);
    SetVendorType(VT_LIGHT);
}

void init(){
    ::init();
}

/* Torches amd other lights in Diku are automatically lit.
   The following code allows for a burnng light source if 
   a living object picks it up. Note that the light source 
   can be extinguished, dropped, picked up (using the 'get'
   command and will be relit. This code needs to be modified.
*/

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
Object name: [lantern], R-number: [14], V-number: [3031] Item type: LIGHT
Short description: a lantern
Long description:
A brass lantern.
Extra description keyword(s): None
Can be worn on :TAKE LIGHT-SOURCE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 50, Cost/day: 17, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Colour : [0]
Type : [0]
Hours : [96]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
