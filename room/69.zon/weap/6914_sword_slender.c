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

    SetKeyName("a long, slender sword");
    SetId("sword", "slender", "rapier");
    SetAdjectives( ({ " "," "}));
    SetShort("a long, slender sword");
    SetLong("It is a long, slender sword that seems to be made from silver.  The name\n"+
        "'Isha' has been engraved on the hilt.");
    SetMass(40);
    SetBaseCost("gold", 30000);
    SetClass(44); //42+2 damage roll
    SetDamageType(BLADE);
    SetWeaponType("blade");
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

int WieldMe(){
    if(this_player()->GetMorality() > -200 ){
       write("You are too pure to wield this weapon."); ////player must be less than neutral, as defined in classes.c, to wield
       return 0;
    }
    else {
       write("You sense a presence of evilness as you wield the blade.");
    return 1;
    }
}

/* Extra Information Original Diku Output 
Object name: [sword long slender], R-number: [182], V-number: [6914]
Item type: WEAPON
Short description: a long, slender sword
Long description: A long, slender sword lies on the ground.
Extra description keyword(s):
----------
sword long slender
----------
Can be worn on: TAKE WIELD 
Set char bits: NOBITS
Extra flags: GLOW MAGIC ANTI-GOOD ANTI-NEUTRAL 
Weight: 4, Value: 30000, Cost/day: 10000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 3D6
ToHit Modifier: 0
Damage: 3D6
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: HITROLL By 2
    Affects: DAMROLL By 2
*/
