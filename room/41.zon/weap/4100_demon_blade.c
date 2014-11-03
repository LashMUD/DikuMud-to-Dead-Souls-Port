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

static void create() {
    item::create();
    SetKeyName("demon blade");
    SetId( ({"demon", "blade", "black" }) );
    SetAdjectives( ({ "long", "sharp", "evil", "demonic" }));
    SetShort("a black demon blade");
    SetLong("A black demon blade is here, you sense the forces of evil\n"+
        "controlling the weapon. You'll become as evil as the weapon,\n"+
        "if you use it!");
    SetMass(80);
    SetBaseCost("gold", 1000);
    SetVendorType(VT_WEAPON);
    SetClass(30);
    SetDamageType(PIERCE);
    SetWeaponType("knife");
    SetWield( (:WieldMe:) );
}

void init(){
    ::init();
}

int WieldMe(){
    if(this_player()->GetMorality() > -200 ){
       write("You are not evil enough to wield this weapon.");//player must be less than neutral, as defined in classes.c, to wield
       return 0;
    }
    else {
       write("You sense a presence of evilness as you wield the blade.");
    return 1;
    }
}

/* Extra Information Original Diku Output
Object name: [blade black demon], R-number: [130], V-number: [4100] Item type: WEAPON
Short description: a black demon blade.
Long description:
A black demon blade is here, you sense the forces of evil
controlling the weapon.
Extra description keyword(s):
----------
blade
----------
Can be worn on :TAKE WIELD 
Set char bits  :NOBITS
Extra flags: ANTI-GOOD ANTI-NEUTRAL 
Weight: 8, Value: 10000, Cost/day: 3500, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Tohit : 0
Todam : 3D4
Type : 11
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/

