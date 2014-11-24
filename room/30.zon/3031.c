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

inherit LIB_ROOM;

int ReadSign();

static void create() {
    room::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Pet Shop");
    SetLong(" The Pet Shop is a small crowded store, full of cages and animals of\n"+
        "various sizes. There is a sign on the wall.");
    SetItems( ([
        "sign" : "The sign reads:\n\n"+
                 "  Use 'List' to see the available pets.\n"+
                 "  Use 'Buy <pet>' to buy yourself a pet.\n\n"+
                 "  Instructions for having pets:\n\n"+
                 "  You can use 'order <pet> <instructions>' to order your pets around.\n"+
                 "  If you abuse your pet, it will no longer regard you as its master.\n"+
                 "  If you have several pets you may use 'order followers <instructions>'\n\n"+
                 "  You can name the pet you buy as : \"buy <pet> <name>\"\n\n"+
                 " Regards,\n\n"+
                 "  The Shopkeeper",
        "south" : "You see the Alley.",
        ]) );
    SetExits( ([
        "south" : "/domains/diku-alfa/room/30.zon/3045",
        ]) );
    SetRead( ([
        "sign" : (:ReadSign:),
        ]) );
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/30.zon/txt/petshop.txt");
}

void init(){
    ::init();
    add_action("list", "list");
    add_action("buy", "buy");
}

int list(string str){

    if(!str){
         tell_player(this_player(), "Available pets are:\n"+
                                    "    4800 - the Wolf\n"+
                                    "    2400 - the Rottweiler\n"+
                                    "     600 - the Beagle\n"+
                                    "     300 - the Puppy\n"+
                                    "     300 - the Kitten\n");
         return 1;
    }
}

int buy(string str, string name){

    object ob;
    string  *list_items;

    list_items = ({"the wolf", "the Wolf", "wolf", "Wolf",
                   "the rottweiler", "the Rottweiler", "rottweiler", "Rottweiler", "rott", "Rott",
                   "the beagle", "the Beagle", "beagle", "Beagle",
                   "the puppy", "the Puppy", "puppy", "Puppy", 
                   "the kitten", "the Kitten", "kitten", "Kitten"
                 });

    if(!str){ 
        tell_player(this_player(), "\nThere is no such pet!\n");
        return 1;         
    }

    sscanf(str, "%s %s", str, name);

    if(member_array(str, list_items) == -1){
        tell_player(this_player(), "\nThere is no such pet!\n");
        return 1;         
    }

    switch(str){
        case "the wolf" :
        case "the Wolf" :
        case "wolf" :
        case "Wolf" :
            if(this_player()->GetCurrency("gold") < 4800){
                tell_player(this_player(), "You don't have enough gold!\n");
                return 1;
            }
            ob = new("/domains/diku-alfa/room/30.zon/npc/3094_wolf");
            if(name){
                ob->SetId( ({"wolf", "dog", "pet", name, capitalize(name)}) );
                ob->SetLong("The Wolf looks like a strong, fearless fighter.\n"+
                    "A small sign on a chain around the neck says 'My Name is "+capitalize(name)+"'");
            }
            this_player()->AddCurrency("gold", -4800);
            ob->eventMove(this_object());
            ob->eventForce("follow "+this_player()->GetKeyName());
            this_player()->AddProperty(ob, 1);
            break;
         
        case "the rottweiler" :
        case "the Rottweiler" :
        case "rottweiler" :
        case "Rottweiler" :
        case "rott" :
        case "Rott" :
            if(this_player()->GetCurrency("gold") < 2400){
                tell_player(this_player(), "You don't have enough gold!\n");
                return 1;
            }
            ob = new("/domains/diku-alfa/room/30.zon/npc/3093_rottweiler");
            if(name){
                ob->SetId( ({"rottweiler", "dog", "pet", name, capitalize(name)}) );
                ob->SetLong("The Rottweiler looks like a strong, fierce fighter.\n"+
                    "A small sign on a chain around the neck says 'My Name is "+capitalize(name)+"'");
            }
            ob->eventMove(this_object());
            this_player()->AddCurrency("gold", -2400);
            ob->eventForce("follow "+this_player()->GetKeyName());
            this_player()->AddProperty(ob, 1);
            break;

        case "the beagle" :
        case "the Beagle" :
        case "beagle" :
        case "Beagle" :
            if(this_player()->GetCurrency("gold") < 600){
                tell_player(this_player(), "You don't have enough gold!\n");
                return 1;
            }
            ob = new("/domains/diku-alfa/room/30.zon/npc/3092_beagle");
            if(name){
                ob->SetId( ({"beagle", "dog", "pet", name, capitalize(name)}) );
                ob->SetLong("The Beagle looks like a fierce fighter.\n"+
                    "A small sign on a chain around the neck says 'My Name is "+capitalize(name)+"'");
            }
            this_player()->AddCurrency("gold", -600);
            ob->eventMove(this_object());
            ob->eventForce("follow "+this_player()->GetKeyName());
            this_player()->AddProperty(ob, 1);
            break;

        case "the puppy" :
        case "the Puppy" :
        case "puppy" :
        case "Puppy" :
            if(this_player()->GetCurrency("gold") < 300){
                tell_player(this_player(), "You don't have enough gold!\n");
                return 1;
            }
            ob = new("/domains/diku-alfa/room/30.zon/npc/3091_puppy");
            if(name){
                ob->SetId( ({"puppy", "dog", "pet", name, capitalize(name)}) );
                ob->SetLong("The Puppy looks like a cute, little, fierce fighter.\n"+
                    "A small sign on a chain around the neck says 'My Name is "+capitalize(name)+"'");
            }
            this_player()->AddCurrency("gold", -300);
            ob->eventMove(this_object());
            ob->eventForce("follow "+this_player()->GetKeyName());
            this_player()->AddProperty(ob, 1);
            break;

        case "the kitten" :
        case "the Kitten" :
        case "kitten" :
        case "Kitten" :
            if(this_player()->GetCurrency("gold") < 300){
                tell_player(this_player(), "You don't have enough gold!\n");
                return 1;
            }
            ob = new("/domains/diku-alfa/room/30.zon/npc/3090_kitten");
            if(name){
                ob->SetId( ({"kitten", "cat", "pet", name, capitalize(name)}) );
                ob->SetLong("The Kitten looks like a cute, little, fierce fighter.\n"+
                    "A small sign on a chain around the neck says 'My Name is "+capitalize(name)+"'");
            }
            this_player()->AddCurrency("gold", -300);
            ob->eventMove(this_object());
            ob->eventForce("follow "+this_player()->GetKeyName());
            this_player()->AddProperty(ob, 1);
            break;
    }
    tell_player(this_player(), "\nMay you enjoy your pet.\n");
    tell_room(this_object(), "\n"+this_player()->GetShort()+" bought "+ob->GetShort()+" as a pet.\n", ({this_player()}));
    return 1;
}




/* Extra Information Original Diku Output 
Room name: The Pet Shop, Of zone : 1. V-Number : 3031, R-number : 37
Sector type : Inside Special procedure : Exists
Room flags: INDOORS 
Description:
   The Pet Shop is a small crowded store, full of cages and animals of
various sorts and sizes.  There is a sign on the wall.

Extra description keywords(s): 

sign

------- Chars present -------
pet shop boy(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see the Alley.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3045
*/
