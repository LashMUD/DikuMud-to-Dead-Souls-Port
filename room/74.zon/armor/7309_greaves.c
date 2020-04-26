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

int WearMe();

inherit LIB_ARMOR;

void create(){
    armor::create();

    SetKeyName("a pair of heavily plated greaves");
    SetId("greaves");
    SetAdjectives( ({ " "," "}));
    SetShort("a pair of heavily plated greaves");
    SetLong("The greaves are made from solid steel, presumably. These are plated guards\n"+
        "to be set in front of your shins, so that these will be well protected.\n"+
        "Go ahead - wear them.");
    SetMass(400);
    SetBaseCost("silver", 2000);
    SetDamagePoints(100);
    SetProtection(BLUNT, 16); //change as necessary
    SetProtection(BLADE, 27); //change as necessary
    SetProtection(KNIFE, 27); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"right leg", "left leg"}));
    SetWear( (:WearMe:) );
}


void init(){
    ::init();
}

int WearMe(){
    if(this_player()->GetMorality() > 700 | this_player()->GetMorality() <-700){
       write("You are unable to use this armor");//player must be less than good and more than evil, as defined in classes.c, to wear
       return 0;
    }
    else {
       write("You wear "+this_object()->GetShort());
    return 1;
    }
}

/* Extra Information Original Diku Output 
Object name: [greaves], R-number: [226], V-number: [7309] Item type: ARMOR
Short description: a pair of heavily plated greaves
Long description: A pair of heavy metal greaves lie on the floor.
Extra description keyword(s):
----------
greaves
----------
Can be worn on: TAKE FEET 
Set char bits: NOBITS
Extra flags: ANTI-GOOD ANTI-EVIL 
Weight: 40, Value: 2000, Cost/day: 1000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [9]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: DEX By -1
    Affects: NONE By 0
*/

