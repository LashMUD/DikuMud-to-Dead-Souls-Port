
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

static void create() {
    item::create();
    
    SetKeyName("the sign");
    SetId( ({ "sign", "metal sign" }) );
    SetAdjectives( ({ "metal" }) );
    SetShort("the sign");
    SetLong("There is a heavy metal sign, mounted on a pole set in a block of cement,\n"+
            "standing here next to the tree structures. Large unpleasantly-purple\n"+
            "letters disgrace its otherwise shiningly polished surface.");
    SetRead( ([
        ( {"sign", "letters"} ) : "Written on the sign, with purple spray paint using a letter template, is:\n\n"+
           "                ====================================\n"+
           "                           N O   E N T R Y\n\n"+
           "                      ACCESS TEMPORARILY CLOSED\n"+
           "                         SECTOR UNDER REPAIR\n\n"+
           "                                  / MATRIX CONTROL\n"+
           "                ====================================",
        ]) );
    SetMass(200);
    SetWeaponType("blunt");
    SetDamageType(BLUNT);
    SetClass(36);
    SetBaseCost("gold", 10);
    SetVendorType(VT_WEAPON);    
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [sign], R-number: [251], V-number: [8900]
Item type: WEAPON
Short description: the sign
Long description:
There is a heavy metal sign, mounted on a pole set in a block of cement,
standing here next to the tree structures. Large unpleasantly-purple
letters disgrace its otherwise shiningly polished surface.
Extra description keyword(s):
----------
sign letters
----------
Can be worn on :TAKE WIELD HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 200, Value: 10, Cost/day: 2000, Timer: 0
In room: 3016 ,In object: None ,Carried by:Nobody
Tohit : 0
Todam : 2D8
Type : 7
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : HITROLL By -2
    Affects : NONE By 0
*/
