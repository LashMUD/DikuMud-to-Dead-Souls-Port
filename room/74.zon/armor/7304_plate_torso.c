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

    SetKeyName("a full armor torso plate");
    SetId("plate", "armor", "torso plate");
    SetAdjectives( ({ " "," "}));
    SetShort("a full armor torso plate");
    SetLong("On the polished steel you can just see the outline of a knight in battle.");
    SetMass(300);
    SetBaseCost("silver", 50000);
    SetDamagePoints(100); //plate mail
    SetProtection(BLUNT, 18); //change as necessary
    SetProtection(BLADE, 45); //change as necessary
    SetProtection(KNIFE, 45); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"torso"}));
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
Object name: [plate torso], R-number: [221], V-number: [7304]
Item type: ARMOR
Short description: a full armor torso plate
Long description: There is a steel torso plate on the floor.
Extra description keyword(s):
----------
plate torso
----------
Can be worn on: TAKE BODY 
Set char bits: NOBITS
Extra flags: ANTI-GOOD ANTI-EVIL 
Weight: 30, Value: 50000, Cost/day: 12000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [9]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: DEX By -1
    Affects: NONE By 0
*/
