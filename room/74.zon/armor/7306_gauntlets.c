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
#include <vendor_types.h>
#include <armor_types.h>

inherit LIB_ARMOR;

int WearMe();

void create(){
    armor::create();

    SetKeyName("a pair of gauntlets");
    SetId("gauntlets");
    SetAdjectives( ({ " "," "}));
    SetShort("a pair of gauntlets");
    SetLong("A pair of gauntlets.");
    SetMass(40);
    SetBaseCost("silver", 900);
    SetDamagePoints(100);
    SetProtection(BLUNT, 9); //change as necessary
    SetProtection(BLADE, 18); //change as necessary
    SetProtection(KNIFE, 18); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"right hand", "left hand"}));
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
Object name: [gauntlets], R-number: [223], V-number: [7306]
Item type: OTHER
Short description: a pair of gauntlets
Long description:
You can see a pair of large gauntlets on the floor.
Extra description keyword(s): None
Can be worn on :TAKE HANDS 
Set char bits  :NOBITS
Extra flags: ANTI-GOOD ANTI-EVIL 
Weight: 4, Value: 900, Cost/day: 1000, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [9] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
