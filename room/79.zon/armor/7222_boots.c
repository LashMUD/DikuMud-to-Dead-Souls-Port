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
#include <damage_types.h>
#include <armor_types.h>

inherit LIB_ARMOR;

int WearMe();

void create(){
    armor::create();

    SetKeyName("a pair of heavy plated boots");
    SetId("boots", "plated boots");
    SetAdjectives( ({ " "," "}));
    SetShort("a pair of heavy plated boots");
    SetLong("The boots are made from a silvery metal.");
    SetMass(400);
    SetBaseCost("silver", 2000);
    SetDamagePoints(81);
    SetProtection(BLUNT, 11); //change as necessary
    SetProtection(BLADE, 16); //change as necessary
    SetProtection(KNIFE, 16); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"right foot", "left foot"}));
    SetProperty("blessed", 1);
    SetWear( (:WearMe:) );
}

void init(){
    ::init();
}

int WearMe(){

    if(this_player()->GetMorality() < 700){
       write("You are unable to use this armor"); //player must be good, as defined in classes.c, to wear
       return 0;
    }
    else {
       write("You wear "+this_object()->GetShort());
    return 1;
    }
}

/* Extra Information Original Diku Output 
Object name: [boots], R-number: [213], V-number: [7222]
Item type: ARMOR
Short description: a pair of heavy plated boots
Long description: A pair of heavy plated boots stand on the floor.
Extra description keyword(s):
----------
boots
----------
Can be worn on: TAKE FEET 
Set char bits: NOBITS
Extra flags: MAGIC BLESS ANTI-EVIL ANTI-NEUTRAL 
Weight: 40, Value: 2000, Cost/day: 1000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [8]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
