#include <lib.h>
#include <vendor_types.h>
#include <damage_types.h>
#include ROOMS_H
inherit LIB_ITEM;

varargs mixed eventRead(object reader, mixed str){
    object ob = str;
    string lang = this_object()->GetLanguage();
    string ret0, ret1;
    mapping omap = ([]); 
    int x = 0;
    int key = 0;
    int val = 0;
           
    if(!str || !objectp(str) || !ob){
        return ::eventRead(reader);
    }
    if(reader->GetLanguageLevel(lang) < 100){
        return ::eventRead(reader);
    }
    if(ob && !inherits(LIB_ARMOR, ob)){
        write("That is not an armor!");
        return 1;
    }
    tell_player(reader,"\nYou read a scroll of identify which dissolves.\n"+
                       "You feel informed:");
    omap = ob->GetProtectionMap();
    //tell_player(reader, "sizeof(omap) is "+sizeof(omap));
    tell_player(reader, "This is  "+ob->GetShort()+".");
    tell_player(reader, "It provides protection against the following damage types:");
    foreach(key, val in omap){
        switch(key){
           case BLUNT         : ret0 = "Blunt";                break;
           case BLADE         : ret0 = "Blade";                break;
           case KNIFE         : ret0 = "Knife";                break;
           case WATER         : ret0 = "Water";                break;
           case SHOCK         : ret0 = "Shock";                break;
           case COLD          : ret0 = "Cold";                 break;
           case HEAT          : ret0 = "Heat";                 break;
           case GAS           : ret0 = "Gas";                  break;
           case ACID          : ret0 = "Acid";                 break;
           case MAGIC         : ret0 = "Magic";                break;
           case POISON        : ret0 = "Poison";               break;
           case DISEASE       : ret0 = "Disease";              break;
           case TRAUMA        : ret0 = "Trauma";               break;
           case PIERCE        : ret0 = "Pierce";               break;
           case PSIONIC       : ret0 = "Psionic";              break;
           case ANOXIA        : ret0 = "Anoxia";               break;
           case DEATHRAY      : ret0 = "Deathray";             break;
           case EMOTIONAL     : ret0 = "Emotional";            break;
           case SONIC         : ret0 = "Sonic";                break;
           case EMP           : ret0 = "EMP";                  break;
           case OTHER         : ret0 = "Other";                break;
           case KARMA         : ret0 = "Karma";                break;
           case DRAMA         : ret0 = "Drama";                break;
           case OVERPRESSURE  : ret0 = "Overpressurization";   break;
           case UNDERPRESSURE : ret0 = "Underpressureization"; break;
           case INERTIA       : ret0 = "Inertia";              break;
           default            : ret0 = "Unknown";              break;
        }
        switch(val){
            case 0..5    : ret1 ="extraordinarily poor"; break;
            case 6..10   : ret1 = "extremely poor"; break;
            case 11..15  : ret1 = "very poor"; break;
            case 16..20  : ret1 = "poor"; break;
            case 21..25  : ret1 = "good"; break;
            case 26..30  : ret1 = "pretty good"; break;
            case 31..35  : ret1 = "very good"; break;
            case 36..40  : ret1 = "really good"; break;
            case 41..50  : ret1 = "extremely good"; break;
            default : ret1 = "extraordinarily good"; break;
        }
    tell_player(reader, ret0+" - "+ret1+"");
    }
    
    tell_player(reader, ob->GetItemCondition());
    this_object()->eventMove(ROOM_FURNACE);
}


void create(){
    string message = "This scroll allows you to identify an item. Read scroll at <obj>";
    ::create();
    SetKeyName("scroll");
    SetId(({"scroll of identify", "identify"}));
    SetAdjectives(({"none"}));
    SetShort("a scroll of identify");
    SetLong("The scroll has a magic formula drawn upon it:\n"+
            "  ???\n"+
            " ?   ?\n"+
            "   ?\n"+
            "   ?\n"+
            "   ?\n"+
            "   *\n"+
            "read identify at <obj>");
    SetMass(1);
    SetBaseCost("gold", 2000);
    SetVendorType(VT_MAGIC);
    SetReads( ([ "default" : message,
                ({ "words", "words written" }) : message,
                ]) );
    SetLanguage("common");
    SetProperty("magic item", 1);
}

void init(){
    ::init();
}
