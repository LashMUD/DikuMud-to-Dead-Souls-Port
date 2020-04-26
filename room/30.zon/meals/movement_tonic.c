#include <lib.h>
#include <vendor_types.h>
#include <meal_types.h>

inherit LIB_POTION;

static void create() {
    potion::create();
    SetKeyName("adam tonic");
    SetId( ({ "bottle", "liquid", "adam", "tonic"}) );
    SetAdjectives( "adam", "glowing","liquid", "red" );
    SetShort("a bottle of Adam");
    SetLong("A bottle of glowing red liquid. It has a label on it featuring "+
            "the silhouette of a curvacious woman sitting down with her knee bent.");
    SetEmptyLong("An empty bottle. It has a label on it featuring "+
            "a curvacious woman sitting down with her knee bent."); 
    SetMass(60);
    SetMealType(MEAL_DRINK);
    SetStrength(5);
    SetMealMessages("You drink a potion.",
            "$N drinks a potion.");
    SetBaseCost("silver",500);
    SetPoints( ([ "SP" : 500 ]) );
    SetVendorType(VT_MAGIC);
    SetItems(([
                ({"label"}) : "A label affixed to the bottle.",
                ]));
    SetRead( ({"label"}),  "Invigorating ADAM! Stay mobile!" );
}
void init(){
    ::init();
}
