#include <lib.h>
#include <vendor_types.h>
#include <meal_types.h>

inherit LIB_POTION;

static void create() {
    potion::create();

    SetKeyName("potion");
    SetId( ({ "bottle", "black" "potion","potion of cure critical wounds" }) );
    SetAdjectives( "black", "healing","critcal healing" );
    SetShort("a black potion");
    SetLong("A thick black potion is here.");
    SetMass(10);
    SetMealType(MEAL_DRINK);
    SetStrength(5);
    SetMealMessages("You quaff a black potion which dissolves.",
        "$N drinks a black potion.");
    SetBaseCost("gold",100);
    SetPoints( ([ "HP" : random(100)+186 ]) );
    SetNoCondition(1);
    SetVendorType(VT_MAGIC);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [black potion], R-number: [135], V-number: [4150] Item type: POTION
Short description: a black potion
Long description:
A thick black potion is here.
Extra description keyword(s):
----------
potion black
----------
Can be worn on :TAKE 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 100, Cost/day: 35, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Spells : 15, 15, -1, -1
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
