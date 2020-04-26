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

    SetKeyName("the metal shield");
    SetId("shield", "metal");
    SetAdjectives( ({ " "," "}));
    SetShort("the metal shield");
    SetLong("A large metal shield.");
    SetMass(100);
    SetBaseCost("silver", 15000);
    SetDamagePoints(100);
    SetProtection(BLUNT, 10); //change as necessary see below; apply to AC or Protection
    SetProtection(BLADE, 10); //change as necessary
    SetProtection(KNIFE, 10); //change as necessary
    SetArmorType(A_SHIELD);
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
Object name: [shield], R-number: [225], V-number: [7308]
Item type: ARMOR
Short description: the metal shield
Long description: The large metal shield rests on the floor.
Extra description keyword(s): None
Can be worn on: TAKE SHIELD 
Set char bits: NOBITS
Extra flags: ANTI-GOOD ANTI-EVIL 
Weight: 10, Value: 15000, Cost/day: 1000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [10]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
