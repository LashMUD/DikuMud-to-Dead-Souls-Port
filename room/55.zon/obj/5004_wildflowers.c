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
#include <vendor_types.h>
#include <armor_types.h>

inherit LIB_ARMOR;

int WearMe(object who, mixed where);

void create(){
    armor::create();

    SetKeyName("wildflowers flowers");
    SetId( ({"flowers", "wild", "wildflowers"}) );
    SetAdjectives( ({"pretty","lush"}) );
    SetShort("a bunch of pretty wildflowers");
    SetLong("These wild flowers are really pretty.\n"+
        "Just like the flowers you would wear in your hair.");
    SetArmorType(A_CUSTOM);
    SetRestrictLimbs( ({"head"}) );
    SetWear( (: WearMe:) );
    SetMass(10);
    SetBaseCost("gold",10);
    SetVendorType(VT_TREASURE);
}

void init(){
    ::init();
}

int WearMe(object who, mixed where){
    object env = environment(who);
    
    if(this_player()->GetMorality() >= -199 ){
      write("You place a bunch of wildflowers on your head.");
        if(env) tell_room(env, who->GetName()+" wears "+GetShort()+
                ".", ({who}));
      return 1;
   
    }
    else {
      write("You must be pure of heart to wear the wildflowers." ); //player must not be evil
       
      return 0;
    }
}

/* Extra Information Original Diku Output 
Object name: [wild flowers], R-number: [142], V-number: [5004] Item type: WORN
Short description: wild flowers
Long description:
A bunch of pretty wild flowers is here.
Extra description keyword(s):
----------
wild flowers
----------
Can be worn on :TAKE HEAD HOLD 
Set char bits  :NOBITS
Extra flags: ANTI-EVIL 
Weight: 1, Value: 10, Cost/day: 50, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
