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

    SetKeyName("some leg plates");
    SetId("leg plates", "plates");
    SetAdjectives( ({ " "," "}));
    SetShort("some leg plates");
    SetLong("They seem to be made from silver or platinum. You see the outline of a rose.");
    SetMass(400);
    SetBaseCost("silver", 12500);
    SetDamagePoints(89);
    SetProtection(BLUNT, 18); //change as necessary
    SetProtection(BLADE, 24); //change as necessary
    SetProtection(KNIFE, 24); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"right leg", "left leg"}));
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
Object name: [plates leg], R-number: [209], V-number: [7218]
Item type: ARMOR
Short description: some leg plates
Long description: On the floor you see some leg plates.
Extra description keyword(s):
----------
leg plates
----------
Can be worn on: TAKE LEGS 
Set char bits: NOBITS
Extra flags: MAGIC BLESS ANTI-EVIL ANTI-NEUTRAL 
Weight: 40, Value: 12500, Cost/day: 5000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [8]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
