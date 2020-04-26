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

    SetKeyName("a silvery breast plate");
    SetId("plate", "breast", "breast plate");
    SetAdjectives( ({ " "," "}));
    SetShort("a silvery breast plate");
    SetLong("On the breast plate you notive a relief of large rose. The metal seems to be\n"+
        "some kind of silver or platinium.");
    SetMass(700);
    SetBaseCost("silver", 25000);
    SetDamagePoints(105);
    SetProtection(BLUNT, 21); //change as necessary
    SetProtection(BLADE, 40); //change as necessary
    SetProtection(KNIFE, 40); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"torso"}));
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
Object name: [plate breast], R-number: [208], V-number: [7217]
Item type: ARMOR
Short description: a silvery breast plate
Long description: There is a silvery breast plate on the floor.
Extra description keyword(s):
----------
plate breast
----------
Can be worn on: TAKE BODY 
Set char bits: NOBITS
Extra flags: MAGIC BLESS ANTI-EVIL ANTI-NEUTRAL 
Weight: 70, Value: 25000, Cost/day: 6000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [8]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
