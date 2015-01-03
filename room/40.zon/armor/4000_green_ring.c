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
#include <armor_types.h>
#include <damage_types.h>
#include <vendor_types.h>

inherit LIB_ARMOR;

mixed eventWearRing(object who);
int CheckRing(string stat);

static void create(){
    armor::create();

    SetKeyName("green_yellow_ring");
    SetId(({"ring","green", "yellow"}));
    SetAdjectives( ({"yellow", "green", "old"}) );
    SetShort("a yellow and green ring");
    SetLong("A ring, with yellow and green ornamentation. It looks very old.");
    SetMass(1);
    SetBaseCost("gold", 50);
    SetDamagePoints(100);
    SetArmorType(A_RING);
    SetWear( (:eventWearRing:) );
    SetVendorType(VT_TREASURE);
}

void init(){
    ::init();
}

mixed eventWearRing(object who){
    
    object env=environment(who);
    who->AddStatBonus("strength", (: CheckRing :) ); 
    who->eventPrint("The ring feels heavy.");
        if(env) tell_room(env, who->GetName()+" wears "+GetShort()+".", ({who}));
        return 1;
}

int CheckRing(string stat){
    if( !GetWorn() ) {
        this_object()->RemoveStatBonus("strength", this_object());
        return 0;
    }
    else
    return -5;        
}

/* Extra Information Original Diku Output
Object name: [ring yellow green], R-number: [124], V-number: [4000] Item type: ARMOR
Short description: a yellow and green ring
Long description:
A ring, with yellow and green ornamentation. It looks very old.
Extra description keyword(s):
----------
ring
----------
Can be worn on :TAKE FINGER HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 50, Cost/day: 20, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : STR By -2
    Affects : NONE By 0
*/
