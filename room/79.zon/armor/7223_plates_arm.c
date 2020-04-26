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

    SetKeyName("some arm plates");
    SetId("plates", "arm plates");
    SetAdjectives( ({ " "," "}));
    SetShort("some arm plates");
    SetLong("They seem to be made from silver or platinum. You see the outline of a rose.");
    SetMass(400);
    SetBaseCost("silver", 12500);
    SetDamagePoints(81);
    SetProtection(BLUNT, 11); //change as necessary
    SetProtection(BLADE, 16); //change as necessary
    SetProtection(KNIFE, 16); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"left arm", "right arm"}));
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
Object name: [plates arm], R-number: [214], V-number: [7223]
Item type: ARMOR
Short description: some arm plates
Long description:
On the floor you see some arm plates.
Extra description keyword(s):
----------
plates arm
----------
Can be worn on :TAKE ARMS 
Set char bits  :NOBITS
Extra flags: MAGIC BLESS ANTI-EVIL ANTI-NEUTRAL 
Weight: 40, Value: 12500, Cost/day: 7000, Timer: 0
In room: 7903 ,In object: None ,Carried by:Nobody
AC-apply : [8]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
