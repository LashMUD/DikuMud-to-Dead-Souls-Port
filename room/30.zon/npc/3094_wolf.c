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

//inherit LIB_SENTIENT;
inherit LIB_NPC;

int Scavenge();
int RemoveProp();
object ob = this_player();

static void create() {
    //sentient::create();
    npc::create();
    SetKeyName("the Wolf");
    SetId( ({"wolf", "dog", "pet"}) );
    SetAdjectives(({"non-player", "non player"}));
    SetShort("A large, trained Wolf");
    SetLong("The Wolf looks like a strong, fearless fighter.");
    SetRace("dog");
    SetCanBite(1);
    SetLevel(4);
    SetStat("strength", 50);
    SetStat("agility", 50);
    SetStat("coordination", 50);
    SetStat("speed", 50);
    SetMelee(1);
    SetGender("neuter");
    SetMorality(0);
    SetAutoStand(0);
    SetAction(100, ( :Scavenge: ));
    SetDie( (:RemoveProp:) );
}

void init(){
    ::init();
    
    add_action("order", "order");
       
}

int Scavenge(){

    object env = environment(this_object());
    object *item, *cost;
    object fetched;
    int s, x;
   
    item = filter(all_inventory(env), (: !living($1) && (inherits(LIB_ITEM, $1) || inherits(LIB_ARMOR, $1)):) );
    cost = sort_array(item->GetBaseCost(), -1);
    s = sizeof(cost);
        if(s>0){
            foreach(object thing in item){
                if(thing->GetBaseCost() == cost[0]){
                    thing->eventMove(this_object());
                    tell_room(env, this_object()->GetShort()+" fetches "+thing->GetShort()+" for "+ob->GetShort()+".");
                    thing->eventMove(ob);
                    tell_player(ob, this_object()->GetShort()+" gives "+thing->GetShort()+" to you.");
                    break;                
                }
        }
    }
}


int order(string str){

    object env = environment(this_object());
    string petid, tell, noun, doit;
    string *stringarray;
    string *cardinal_dirs = ( ({"none", "north","south","east","west", "northeast","northwest","southeast","southwest","up","down", "out"}) );
    string fail_mssg = "The large, trained wolf has an indifferent look.";
               
    if(!stringp(str)) return notify_fail("Usage: order <pet> do something.");
        
    if(!str || !ob || !ob->GetProperty(this_object())) return 0;
    //tell_player("lash", "commands[0] is "+commands[0]);
    //tell_player("lash", "commands[1] is "+commands[1]);
    //tell_player("lash", "ob is "+ob);
    //tell_player("lash", "str is "+str);
    stringarray=explode(str, " ");
    //tell_player("lash", "sizeof(stringarray) is "+sizeof(stringarray));
    //for(y=0;y<sizeof(stringarray);y++)
    //    tell_player("lash", "stringarray["+y+"] is "+stringarray[y]);
    if(sizeof(stringarray)<2) return notify_fail("Usage: order <pet> do something.");   
    if(sizeof(stringarray) <3){
        tell = stringarray[1];
    }
    
    /* The following has to be added if using unmodified /lib/lib/lead.c or player may evade pet.
       With following code player re-establishes master/pet relationship:

    //if(ob && ob->GetProperty(this_object()) && ob != this_object()->GetLeader()) eventForce("follow "+ob->GetKeyName());
    */

    sscanf(str, "%s %s %s", petid, tell, noun);
    //tell_player("lash", "str is "+str);
    //tell_player("lash", "petid is "+petid);
    //tell_player("lash", "tell is "+tell);
    //tell_player("lash", "noun is "+noun);
    doit=tell+" "+noun;
    //tell_player("lash", "doit = "+doit);
    //tell_player("lash", "stringp(tell) is "+stringp(tell)+"; and str = "+str+"; petid = "+petid+"; tell = "+tell+"; noun = "+noun);
    //x = member_array(petid, this_object()->GetId());
        if(!stringp(tell) || !str || member_array(petid, this_object()->GetId()) == -1){
            tell_player(ob, fail_mssg);
            
        }
    if(noun != 0){
        int y;
        
        if(tell == "go" && member_array(noun, cardinal_dirs) == -1 || (member_array(noun, cardinal_dirs) != -1 && member_array(noun, (env->GetExits())))== -1){
            tell_player(ob, fail_mssg );
        }
        if(tell == "kill"){
            object *living = filter(get_livings(env), (:livings($1) && $1 !=this_object():));
            string *targets;

           foreach(object thing in living)
           targets = thing->GetId();
            //for(y=0;y<sizeof(targets);y++)
                //tell_player(ob, "targets["+y+"] is "+targets[y]);
            if(member_array(noun, targets) == -1){
                tell_player(ob, fail_mssg);
                
            }
         }        
        command(doit);
    }
    else{
        if(member_array(tell, cardinal_dirs) != -1 && member_array(tell, (env->GetExits())) == -1)tell_player(ob, fail_mssg);
        command(tell);
    }
    return 1;
} 

int RemoveProp(){

    if(ob && ob->GetProperty(this_object())){
        ob->RemoveProperty(this_object());
        //tell_player(ob, "Property removed.");
        return 1;
    }
   return 1;
}

/* Extra Information Original Diku Output
NEUTRAL-SEX MOB - Name : wolf [R-Number39], In room [3031] V-Number [3094]
Short description: the Wolf
Title: None
Long description: A large, trained Wolf is here.
Monster Class: Normal   Level [4] Alignment[0]
Birth : [1314974093]secs, Logon[1314974093]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+4]  Hit p.:[56/56+4]  Move p.:[50/50+4]
AC:[60/10], Coins: [0], Exp: [0], Hitroll: [3], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL SCAVENGER ISNPC, Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d8.
Carried weight: 1000   Carried items: 100
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [16] [16] [16] [16] [16]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'Lash'
Followers are:
Affected by: CHARM
*/
