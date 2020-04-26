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

    SetKeyName("a white cloak");
    SetId("cloak", "white cloak");
    SetAdjectives( ({ " "," "}));
    SetShort("a white cloak");
    SetLong("This is a very fine made cloak from an unknown material, in a bright white\n"+
        "color.");
    SetMass(200);
    SetBaseCost("silver", 10000);
    SetDamagePoints(75); //arbitrary number
    SetProtection(BLUNT, 13); //change as necessary
    SetProtection(BLADE, 20); //change as necessary
    SetProtection(KNIFE, 20); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"neck"}));
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
Object name: [cloak white], R-number: [215], V-number: [7224]
Item type: OTHER
Short description: a white cloak
Long description:
A white cloak lies on the floor.
Extra description keyword(s):
----------
cloak white
----------
Can be worn on :TAKE ABOUT 
Set char bits  :NOBITS
Extra flags: MAGIC 
Weight: 20, Value: 10000, Cost/day: 5000, Timer: 0
In room: 7903 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : DEX By 2
    Affects : ARMOR By -10
*/
