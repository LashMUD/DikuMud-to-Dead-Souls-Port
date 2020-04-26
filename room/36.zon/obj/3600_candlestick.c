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
    SetKeyName("candlestick");
    SetId( ({ "candle", "candlestick", "pewter" }) );
    SetAdjectives( ({ "pewter" }) );
    SetShort("a pewter candlestick");
    SetLong("It is a rather old-looking three-armed candlestick made from pewter. Its\n"+
        "candles are a yellowish white colour.");
    SetRadiantLight(7);
    SetFuelRequired(1);
    SetMaxFuel(750);
    SetFuelAmount(750);
    SetRefuelable(0);
    SetMass(50);
    SetBaseCost("gold",150);
    SetBurntValue(10);
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

/* Extra Information Original Diku Output
Object name: [candlestick], R-number: [114], V-number: [3600] Item type: LIGHT
Short description: a candlestick
Long description:
A pewter candlestick is standing here.
Extra description keyword(s):
----------
candlestick
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 5, Value: 150, Cost/day: 50, Timer: 0
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
