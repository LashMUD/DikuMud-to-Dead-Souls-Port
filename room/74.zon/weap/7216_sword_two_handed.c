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

    SetKeyName("a enormous two-handed sword.");
    SetId("sword", "two handed", "two handed sword");
    SetAdjectives( ({ " "," "}));
    SetShort("an enormous two-handed sword.");
    SetLong("You notice that there has been inscribed some runes and a sort of pattern,\n"+
        "which resembles flames running along the edge.");
    SetRead( ([
        "runes" : "On the blade you can read 'Flame And Strength United Are My Soul Power'.",
        ]) );
    SetMass(190);
    SetBaseCost("gold", 1800);
    SetClass(33); //normally 30  - +3 for damage roll
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
    if(this_player()->GetMorality() > 700 | this_player()->GetMorality() <-700){
       write("You are unable to wield this sword");//player must be less than good and more than evil, as defined in classes.c, to wear
       return 0;
    }
    else {
       write("You wield "+this_object()->GetShort());
    return 1;
    }
}

/* Extra Information Original Diku Output 
Object name: [sword two-handed], R-number: [207], V-number: [7216]
Item type: WEAPON
Short description: a two-handed sword
Long description: On the floor rests a enormous two-handed sword.
Extra description keyword(s):
----------
runes
two-handed sword
----------
Can be worn on: TAKE WIELD 
Set char bits: NOBITS
Extra flags: MAGIC ANTI-GOOD ANTI-EVIL 
Weight: 19, Value: 1800, Cost/day: 900, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
ToHit Modifier: 0
Damage: 3D4
ToHit Modifier: 0
Damage: 3D4
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: ARMOR By 15
    Affects: DAMROLL By 3
*/
