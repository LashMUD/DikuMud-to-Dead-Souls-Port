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

inherit LIB_ITEM;

int WieldMe();

void create(){
    ::create();

    SetKeyName("a huge bastard sword");
    SetId("sword", "bastard");
    SetAdjectives( ({ " "," "}));
    SetShort("a huge bastard sword");
    SetLong("Quite a heavy weapon, with a pure white hilt.");
    SetMass(180);
    SetBaseCost("gold", 1700);
    SetClass(44);
    SetDamageType(BLADE);
    SetWeaponType("blade");
    SetHands(2);
    SetVendorType(VT_WEAPON);
    SetWield( (:WieldMe:) );
}

void init(){
    ::init();
}

int WieldMe(){

    if(this_player()->GetMorality() < 700){
       write("You are unable to wield this sword."); //player must be good, as defined in classes.c, to wear
       return 0;
    }
    else {
       write("You wield "+this_object()->GetShort());
    return 1;
    }
}


/* Extra Information Original Diku Output 
Object name: [sword bastard], R-number: [203], V-number: [7212]
Item type: WEAPON
Short description: a huge bastard sword
Long description: There is a huge bastard sword here.
Extra description keyword(s):
----------
bastard sword
----------
Can be worn on: TAKE WIELD 
Set char bits: NOBITS
Extra flags: MAGIC ANTI-EVIL ANTI-NEUTRAL 
Weight: 18, Value: 1700, Cost/day: 500, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 2D10
ToHit Modifier: 0
Damage: 2D10
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: DAMROLL By 3
    Affects: NONE By 0
*/
