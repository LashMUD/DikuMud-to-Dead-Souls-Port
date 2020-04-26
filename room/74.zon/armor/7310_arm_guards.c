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

    SetKeyName("steel arm guards");
    SetId("guards", "arm guards");
    SetAdjectives( ({ " "," "}));
    SetShort("steel arm guards");
    SetLong("Two steel arm guards.");
    SetMass(400);
    SetBaseCost("silver", 12500);
    SetDamagePoints(100);
    SetProtection(BLUNT, 9); //change as necessary
    SetProtection(BLADE, 18); //change as necessary
    SetProtection(KNIFE, 18); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"right arm", "left arm"}));
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
Object name: [arm guards], R-number: [227], V-number: [7310] Item type: ARMOR
Short description: steel arm guards
Long description: On the ground you see two steel arm guards.
Extra description keyword(s): None
Can be worn on: TAKE ARMS 
Set char bits: NOBITS
Extra flags: ANTI-GOOD ANTI-EVIL 
Weight: 40, Value: 12500, Cost/day: 7000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [9]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: DEX By -1
    Affects: NONE By 0
*/

