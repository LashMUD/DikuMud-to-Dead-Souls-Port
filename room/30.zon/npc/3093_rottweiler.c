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
#include "/lib/include/pile.h"

inherit LIB_SENTIENT;

int Scavenge();
int RemoveProp();
object ob = this_player();

static void create() {
    sentient::create();
    
    SetKeyName("the Rottweiler");
    SetId( ({"rottweiler", "dog", "pet"}) );
    SetAdjectives(({"non-player", "non player"}));
    SetShort("A large, loyal Rottweiler");
    SetLong("The Rottweiler looks like a strong, fierce fighter.");
    SetRace("dog");
    SetPolyglot(1);
    SetLevel(4);
    SetStat("strength", 40);
    SetStat("agility", 40);
    SetStat("coordination", 40);
    SetStat("speed", 40);
    SetMelee(1);
    SetGender("neuter");
    SetMorality(1000);
    SetAutoStand(0);
    SetAction(100, ( :Scavenge: ));
    SetDie( (:RemoveProp:) );
    SetDie( (:RemoveProp:) );
}

void init(){
    ::init();
}

int Scavenge(){

    object env = environment(this_object());
    object *item;
        
    item = filter(all_inventory(env), (: (!living($1) && (inherits(LIB_ITEM, $1) 
           || inherits(LIB_ARMOR, $1))) :) );
    foreach(object thing in item){
      /* the "pets" do not have prehensile limbs so to get the pet to "fetch and give"
         to the owner player the following code is implemented*/
      if(thing->GetPreventGet() || base_name(thing) == LIB_CORPSE 
         || !ob->GetProperty("pet", this_object())) return 0;
      else{
          thing->eventMove(ob);
          tell_room(env, this_object()->GetShort()+" fetches "+thing->GetShort()+".");
          tell_player(ob, this_object()->GetShort()+" gives "+thing->GetShort()+" to you.");
          if(env && env != environment(ob)) this_object()->eventMove(environment(ob));
        }
    }
}

mixed eventTalkRespond(mixed args...){
    object ob;
    string cmd = "";
    string *punct = ({".",",","!","?",";"});
    ob = this_player();

    if(sizeof(args) > 3) cmd = args[3];
    cmd = lower_case(cmd);
    if(sizeof(cmd) && member_array(last(cmd, 1), punct) != -1){
        cmd = truncate(cmd, 1);
    }
    /*check for pet-player association as assigned in
      domains/diku-alfa/room/30.zon/rm_3031*/
    if(!ob->GetProperty("pet", this_object()) ) return 0;
    else this_object()->eventForce(cmd); return 1;
}

int RemoveProp(){

    if(ob && ob->GetProperty("pet", this_object())){
        ob->RemoveProperty("pet", this_object());
        //tell_player(ob, "Property removed.");
        return 1;
   }
}
