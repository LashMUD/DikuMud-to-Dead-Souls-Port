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

void create(){
    item::create();

    SetKeyName("heavy mace");
    SetId("mace", "heavy", "heavy mace");
    SetAdjectives( ({ " "," "}));
    SetShort("Manxam's heavy mace");
    SetLong("A beautifully crafted mace of mithril.  You can see the owners name on the\n"+
        "adamantine handle.  The name, which is chiselled into the handle and then\n"+
        "filled with diamond dust, is Manxam.");
    SetMass(60);
    SetBaseCost("gold", 0);
    SetClass(14);
    SetDamageType(BLUNT);
    SetWeaponType("blunt");
    SetVendorType(VT_WEAPON);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [mace heavy], R-number: [93], V-number: [3304] Item type: WEAPON
Short description: Manxam's heavy mace
Long description:
Manxam's heavy mace is lying here.
Extra description keyword(s):
----------
mace
----------
Can be worn on :TAKE WIELD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 6, Value: 0, Cost/day: 1000000, Timer: 0
In room: Nowhere ,In object: None ,Carried by:Nobody
Tohit : 0
Todam : 1D6
Type : 7
Equipment Status: Inventory
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : DAMROLL By 2
    Affects : NONE By 0
*/
