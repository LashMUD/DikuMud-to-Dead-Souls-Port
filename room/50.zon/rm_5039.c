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
#include <terrain_types.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetTerrainType(T_OUTDOORS);
    SetAmbientLight(30);
    SetShort("The Stones of G'harne");
    SetLong("   You are in the center of 7, 15 ft tall monolith like black stones.\n"+
        "In the center of the ring formed by the monolith you can't help \n"+
        "noticing a big sacrifice altar. The ground is covered with dirt, but the\n"+
        "altar shows no sign of such. West of here is the ancient path.");
    SetItems( ([ 
        "west" : "You see the ancient path and the wooden bridge here.",
        ({"stones", "g'harne", "monolith"}) : "The giant stones are made of a material you haven't seen before.\n"+
            "It resembles black marble, but somehow feels different.\n"+
            "The stones of G'harne towers above you in a height of 15 ft.",
        ({"altar", "sacrifice"}) : "You move closer to examine the sacrifice altar of G'harne.\n"+
            "The altar is about 3 ft high, 10 ft long and 4 ft wide.\n"+
            "It has engraved pictures of death rituals and horrifying worms.",
        ({"death", "rituals", "worms", "engraving", "picture"}) : "The pictures are depicting evil rituals.\n"+
            "You see druid's pouring blood over herbs on an alter like this one.\n"+
            "There are people calling giant worms into existance with dark\n"+
            "spells and other doom like symbols.",
        ] ));
    SetExits( ([
        "west" : "/domains/diku-alfa/room/50.zon/rm_5037",
        ] ));
    
}

void init(){
    ::init();
    add_action("recite_scroll", "recite");  
} 

mixed recite_scroll(string str){

    object array *pstuff, *rstuff, *ivy, *jar, *scroll, *people;
    
    tell_player("lash","In recite_scroll and this_player() is "+this_player()->GetShort());   
    if(this_player()){
        pstuff = all_inventory(this_player());
        rstuff = all_inventory(this_object());
  
        scroll = filter(pstuff, (: answers_to("jhyfrdow", $1):) );
        ivy = filter(rstuff, (: answers_to("poison ivy", $1):) );
        people = filter(rstuff, (:living($1):) );
        //jar = filter(rstuff, (: $1->GetShort("a dark red jar") && $1->GetFlaskUses() > 0 && $1->GetFlaskContents() == "blood" :) );
        jar = filter(rstuff, (: answers_to("red jar", $1) && $1->GetFlaskUses() > 0 && $1->GetFlaskContents() == "blood" :)  );
        }
            
    if(sizeof(scroll) <=0 || sizeof(ivy) <=0 || sizeof(jar) <=0 || sizeof(people) <=0 ){ 
        tell_player(this_player()), "You don't posses the proper materials for the ritual...";
        return 0;
    }
      
    tell_player(this_player(),"\nYou recite a scroll which dissolves.\n");
    tell_player(this_player(),"The poison ivy dissolves into thin air.\n");
    tell_player(this_player(),"A dark red jar is emptied from blood.\n");
    
    tell_room(this_object(), "\n"+this_player()->GetShort()+" recites a scroll.\n", ({this_player()}));
    tell_room(this_object(), "The poison ivy dissolves into thin air.\n", ({this_player()})); 
    tell_room(this_object(), "A dark red jar is emptied from blood.\n", ({this_player()}));        
    
    scroll[0]->eventDestruct();
    ivy[0]->eventDestruct();
    jar->SetFlaskUses(0);
    jar->SetFlaskContents("empty");
    foreach(object player in people){
        tell_player(player,"You feel yanked downwards.....\n");
        player->eventMove("/domains/diku-alfa/room/50.zon/rm_5040");
    }        
    
    return 1;
}               

/* Extra Information Original Diku Output 
Room name: The Stones of G'harne, Of zone : 9. V-Number : 5039, R-number : 306
Sector type : Field Special procedure : Exists
Room flags: NOBITS
Description:
   You are in the center of 7, 15 ft tall monolith like black stones.
In the center of the ring formed by the monolith you can't help 
noticing a big sacrifice altar. The ground is covered with dirt, but the
altar shows no sign of such. West of here is the ancient path.

Extra description keywords(s): 
death rituals worms engraving picture
altar sacrifice
stones g'harne monolith

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction west . Keyword : (null)
Description:
  You see the ancient path and the wooden bridge here.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 5037
*/
