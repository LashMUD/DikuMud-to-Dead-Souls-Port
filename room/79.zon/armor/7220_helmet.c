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

    SetKeyName("a silvery helmet");
    SetId("helmet", "silvery");
    SetAdjectives( ({ " "," "}));
    SetShort("a silvery helmet");
    SetLong("The helmet is made from platinum or silver and has a white fur brush attached\n"+
        "on the top.");
    SetMass(350);
    SetBaseCost("silver", 9000);
    SetDamagePoints(92);
    SetProtection(BLUNT, 23); //change as necessary
    SetProtection(BLADE, 27); //change as necessary
    SetProtection(KNIFE, 27); //change as necessary
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs(({"head"}));
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
Object name: [helmet], R-number: [211], V-number: [7220]
Item type: ARMOR
Short description: a silvery helmet
Long description: The silvery helmet lies here.
Extra description keyword(s):
----------
helmet
----------
Can be worn on: TAKE HEAD 
Set char bits: NOBITS
Extra flags: MAGIC BLESS ANTI-EVIL ANTI-NEUTRAL 
Weight: 35, Value: 9000, Cost/day: 3000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [9]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: NONE By 0
    Affects: NONE By 0
*/
