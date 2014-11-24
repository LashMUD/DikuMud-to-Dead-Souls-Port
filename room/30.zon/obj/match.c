//From the Dead Souls Mudlib

#include <lib.h>

inherit LIB_MATCH;

static void create() {
    match::create();
    SetKeyName("match");
    SetId("match");
    SetAdjectives( ({ "wooden" }) );
    SetShort("a wooden match");
    SetLong("A wooden match that might light if you strike it.");
    SetMass(1);
    SetRadiantLight(2);
    SetStrikeChance(50);
    SetMinHeat(10);
    SetFuelRequired(1);
    SetMaxFuel(2);
    SetFuelAmount(2);
    SetRefuelable(0);
    SetMass(1);
    SetBaseCost("gold", 0);
    SetBurntValue(0);
}

void init(){
    ::init();
}

/* If you drop a match it goes out. */

mixed eventMove(mixed dest){
   
    if(objectp(dest) && living(dest)){
        return match::eventMove(dest);
    }
    if(objectp(dest) && !living(dest) && this_object()->GetLit() ==1){
        eventExtinguish();
        return match::eventMove(dest);
    }
    if(objectp(dest) && !living(dest) && this_object()->GetLit() !=1){
        return match::eventMove(dest);
    } 
} 
