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

    SetKeyName("the shield of the rose");
    SetId("shield", "rose");
    SetAdjectives( ({ " "," "}));
    SetShort("the shield of the rose");
    SetLong("On the shield you see a clear and perfect painting of a dark red rose on a white\n"+
        "background. You also notice the inscription :'Pax Est Sanctuum'.");
    SetMass(600);
    SetBaseCost("silver", 15000);
    SetDamagePoints(115);
    SetProtection(BLUNT, 14); //change as necessary
    SetProtection(BLADE, 20); //change as necessary
    SetProtection(KNIFE, 20); //change as necessary
    SetArmorType(A_SHIELD);
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
Object name: [shield], R-number: [212], V-number: [7221]
Item type: ARMOR
Short description: the shield of the rose
Long description: The shield of the rose rests on the floor.
Extra description keyword(s):
----------
shield
----------
Can be worn on: TAKE SHIELD 
Set char bits: NOBITS
Extra flags: MAGIC BLESS ANTI-EVIL ANTI-NEUTRAL 
Weight: 60, Value: 15000, Cost/day: 1000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [10]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
