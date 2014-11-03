
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

inherit LIB_ITEM;

static void create() {
    item::create();
    
    SetKeyName("paper wad");
    SetId( ({ "paper", "wad" }) );
    SetAdjectives( ({ "" }) );
    SetShort("a crumpled wad of paper, left behind by some messy passerby");
    SetLong("It looks old and worn, but you can still make out a faint lettering on it.");
    SetRead( ([
        ( {"letters", "lettering"} ) : 
            "Written in a strange, alien hand:\n\n"+
            "o    WARNING! WARNING! WARNING! WARNING! WARNING! WARNING! WARNING!   o\n"+
            "o                                                                     o\n"+
            "o    MSGS: MATRIX CONTROL      TO   SUBSYSTEMS/<ALL>                  o\n"+
            "o    ACT : REQUIRED            T:   NOW                               o\n"+
            "o                                                                     o\n"+
            "o    RECENT DATAQUAKE EVALUATED... EVALUATION FOLLOWS...              o\n"+
            "o    MASSIVE SEGMENTATION HAS OCCURRED... ALL SUBSIDIARY SECTORS      o\n"+
            "o    SHUTDOWN... CENTRAL SHUTDOWN: AUTOMATICS ENGAGED...              o\n"+
            "o                                                                     o\n"+
            "o    DATALEAK DETECTED... DIRECTION:FOREIGN VIRTUAL REALITY, CODENAME o\n"+
            "o    ASSIGNED: 'Midgaard'...                                          o\n"+
            "o    SPECIFIC LOCATION: UNCERTAIN, BEING WITHIN 'Midgaard' SUBSECTOR  o\n"+
            "o    CODENAME ASSIGNED: 'Holy Grove'...                               o\n"+
            "o    BEWARE INTRUSIONS POSSIBLE. ADVISE EXTREME CAUTION...            o\n"+
            "o    .                                                                o\n"+
            "o    .                                                                o\n"+
            "o    .                                                                o\n"+
            "o                                                                     o\n"+
            "o    MSGS: MATRIX CONTROL      TO   SUBSYSTEMS/<Sark>                 o\n"+
            "o                                              <101110101101>         o\n"+
            "o                                              <1101111010101101>     o\n"+
            "o    ACT : URGENT              T:   IMMIDIATE                         o\n"+
            "o                                                                     o\n"+
            "o    INTRUDERS DETECTED IN MAIN MATRIX... DIRECTIVE SEARCH AND        o\n"+
            "o    ELIMINATE...                                                     o\n"+
            "o    .                                                                o\n"+
            "o    .                                                                o\n"+
            "o                                                                     o",
        ]) );
    SetMass(1);
    SetBaseCost("gold", 0);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Object name: [paper wad], R-number: [248], V-number: [8499]
Item type: TRASH
Short description: a crumpled wad of paper
Long description:
There is a crumpled wad of paper here, left behind by some messy bypasser.
Extra description keyword(s):
----------
paper wad
----------
Can be worn on :TAKE HOLD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 0, Cost/day: 0, Timer: 0
In room: Nowhere ,In object: None ,Carried by:Nobody
Values 0-3 : [0] [0] [0] [0]
Equipment Status: Inventory
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
