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

    SetKeyName("a pair of gloves");
    SetId("gloves", "silver gloves");
    SetAdjectives( ({ " "," "}));
    SetShort("a pair of gloves");
    SetLong("The gloves are made of silver threads.");
    SetMass(140);
    SetBaseCost("silver", 900);
    SetDamagePoints(71);  //like studded leather
    SetProtection(BLUNT, 3); //change as necessary
    SetProtection(BLADE, 6); //change as necessary
    SetProtection(KNIFE, 6); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"right hand", "left hand"}));
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
Object name: [gloves], R-number: [210], V-number: [7219]
Item type: ARMOR
Short description: a pair of gloves
Long description: You can see a pair of gloves on the floor.
Extra description keyword(s):
----------
gloves
----------
Can be worn on: TAKE HANDS 
Set char bits: NOBITS
Extra flags: MAGIC BLESS ANTI-EVIL ANTI-NEUTRAL 
Weight: 14, Value: 900, Cost/day: 1000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [3]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: HITROLL By 1
    Affects: NONE By 0
*/
