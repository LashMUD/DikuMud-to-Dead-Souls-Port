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
                 "  Use 'inquire' to see the available pets\n"+
                 "  Use 'adopt <pet>' to adopt an animal\n\n"+
                 "  Instructions for having pets:\n\n"+
                 "  You can tell your pet to do things 'say <pet> <command>'\n"+
                 "  If you abuse your pet, it will no longer regard you as its master\n"+
                 "  You can only adopt one pet at a time\n\n"+
                 "  You can name the pet you adopt as : 'adopt <pet> <name>'\n\n"+
                 " Regards,\n\n"+
                 "  The Shopkeeper\n",
        "south" : "You see the Alley.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3095_pet_shop_boy" : 1,
	    ]) );
    SetExits( ([
                   "south" : "/domains/diku-alfa/room/30.zon/rm_3045",
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
    add_action("list","inquire");
    add_action("buy","adopt");
}

int list(string str){

    if(!str){
         tell_player(this_player(), "Available pets for ADOPTION are:\n\n"+
                                    "    Wolf       - 4800 gold\n"+
                                    "    Rottweiler - 2400 gold\n"+
                                    "    Beagle     - 600 gold\n"+
                                    "    Puppy      - 300 gold\n"+
                                    "    Kitten     - 300 gold\n");
         return 1;
    }
}

int buy(string str, string name){

    object ob;
    string  *list_items;
    string *tmpname = ({""});
    list_items = ({"the wolf", "the Wolf", "wolf", "Wolf",
                   "the rottweiler", "the Rottweiler", "rottweiler", "Rottweiler", "rott", "Rott",
                   "the beagle", "the Beagle", "beagle", "Beagle",
                   "the puppy", "the Puppy", "puppy", "Puppy", 
                   "the kitten", "the Kitten", "kitten", "Kitten"
                 });
    
    sscanf(str, "%s %s", str, name);
    //tell_player("lash", "name is "+name);
    
    if(!str){ 
        tell_player(this_player(), "\nThere is no such pet!\n");
    return 1;
    }         
    if(member_array(str, list_items) == -1){
       tell_player(this_player(), "\nThere is no such pet!\n");
    return 1;         
    }
    if(this_player()->GetProperty("pet")){
        tell_player(this_player(), "\nYou already own a pet! If you have more than one pet at a time\n"+
                               "they don't follow orders too well. Sorry!\n");
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
            if(!name){
                ob->SetId( ({"wolf", "dog", "pet", name, capitalize(name)}) );
                ob->SetShort( "a pet wolf named "+capitalize(name) );
                ob->SetLong("The  looks like a strong, fierce fighter.\n"+
                 "It belongs to "+this_player()->GetShort()+"\n");
            }
            if(name){
                ob->SetId( ({"wolf", "dog", "pet", name, capitalize(name)}) );
                ob->SetShort( "a pet wolf named "+capitalize(name) );
                ob->SetLong("The  looks like a strong, fierce fighter.\n"+
                 "A small sign on a chain around the neck says 'My Name is "
                    +capitalize(name)+"\nand I belong to "+this_player()->GetShort()+"'\n");
            }
            this_player()->AddCurrency("gold", -4800);
            ob->eventMove(this_object());
            ob->eventForce("follow "+this_player()->GetKeyName());
            this_player()->AddProperty("pet", ob);
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
            if(!name){
                ob->SetId( ({"rottweiler", "dog", "pet", name, capitalize(name)}) );
                ob->SetShort( "a pet rottweiler named "+capitalize(name) );
                ob->SetLong("The Rottweiler looks like a strong, fierce fighter.\n"+
                    "It belongs to "+this_player()->GetShort()+"\n");
            }
            if(name){
                ob->SetId( ({"rottweiler", "dog", "pet", name, capitalize(name)}) );
                ob->SetShort( "a pet rottweiler named "+capitalize(name) );
                ob->SetLong("The Rottweiler looks like a strong, fierce fighter.\n"+
                    "A small sign on a chain around the neck says 'My Name is "
                  +capitalize(name)+"\nand I belong to "+this_player()->GetShort()+"'\n");
            }
            ob->eventMove(this_object());
            this_player()->AddCurrency("gold", -2400);
            ob->eventForce("follow "+this_player()->GetKeyName());
            this_player()->AddProperty("pet", ob);
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
            //tell_player("lash", "name is "+name);
            if(!name){
                //tell_player("lash", "strcmp ==0");
                ob->SetId( ({"beagle", "dog", "pet"}) );
                ob->SetShort( "a pet beagle" );
                ob->SetLong("The Beagle looks like a fierce fighter.\n"+
                 "It belongs to "+this_player()->GetShort()+"\n");
            }
            if(name){
                //tell_player("lash", "strcmp !=0");
                ob->SetId( ({"beagle", "dog", "pet"}) );
                ob->SetShort( "a pet beagle" );
                ob->SetLong("The Beagle looks like a fierce fighter.\n"+
                 "A small sign on a chain around the neck says 'My Name is "
                  +capitalize(name)+"\nand I belong to "+this_player()->GetShort()+"'\n");
            }
            this_player()->AddCurrency("gold", -600);
            ob->eventMove(this_object());
            ob->eventForce("follow "+this_player()->GetKeyName());
            this_player()->AddProperty("pet", ob);
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
            if(!name){
                ob->SetId( ({"puppy", "dog", "pet", name, capitalize(name)}) );
                ob->SetShort( "a pet puppy named "+capitalize(name) );
                ob->SetLong("The Puppy looks like a cute, little, fierce fighter.\n"+
                    "It belongs to "+this_player()->GetShort()+"\n");
            }
            if(name){
                ob->SetId( ({"puppy", "dog", "pet", name, capitalize(name)}) );
                ob->SetShort( "a pet puppy named "+capitalize(name) );
                ob->SetLong("The Puppy looks like a cute, little, fierce fighter.\n"+
                    "A small sign on a chain around the neck says 'My Name is "
                  +capitalize(name)+"\nand I belong to "+this_player()->GetShort()+"'\n");
            }
            this_player()->AddCurrency("gold", -300);
            ob->eventMove(this_object());
            ob->eventForce("follow "+this_player()->GetKeyName());
            this_player()->AddProperty("pet", ob);
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
            if(!name){
                tell_player("lash", "name == 0\n");
                ob->SetId( ({"kitten", "cat", "pet", name, capitalize(name)}) );
                ob->SetShort( "a pet kitten named "+capitalize(name) );
                ob->SetLong("The Puppy looks like a cute, little, fierce fighter.\n"+
                    "It belongs to "+this_player()->GetShort()+"\n");
            }
            if(name){
               tell_player("lash", "name != 0\n");
                ob->SetId( ({"kitten", "cat", "pet", name, capitalize(name)}) );
                ob->SetShort( "a pet kitten named "+capitalize(name) );
                ob->SetLong("The Puppy looks like a cute, little, fierce fighter.\n"+
                    "A small sign on a chain around the neck says 'My Name is "
                  +capitalize(name)+"\nand I belong to "+this_player()->GetShort()+"'\n");
            }
            this_player()->AddCurrency("gold", -300);
            ob->eventMove(this_object());
            ob->eventForce("follow "+this_player()->GetKeyName());
            this_player()->AddProperty("pet", ob);
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
