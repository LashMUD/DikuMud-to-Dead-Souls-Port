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

inherit LIB_SENTIENT;

void Scavenge();

static void create() {
    sentient::create();
    
    SetKeyName("the Rottweiler");
    SetId( ({"rottweiler", "dog", "pet"}) );
    SetAdjectives(({"non-player", "non player"}));
    SetShort("A large, loyal Rottweiler");
    SetLong("The Rottweiler looks like a strong, fierce fighter.");
    SetRace("dog");
    SetCanBite(1);
    SetLevel(3);
    SetMelee(1);
    SetGender("neuter");
    SetMorality(1000);
    SetAutoStand(0);
    SetAction(10, ( :Scavenge: ));
}

void init(){
    ::init();
    add_action("order", "order");
}

void Scavenge(){

    object env = environment(this_object());
    object *item, *cost;
    int s;
    
    item = filter(all_inventory(env), (: !living($1) && (inherits(LIB_ITEM, $1) || inherits(LIB_ARMOR, $1)):) );
    cost = sort_array(item->GetBaseCost(), -1);
    s = sizeof(cost);
    if(s>0){
        foreach(object thing in item){
            if(thing->GetBaseCost() == cost[0]){
                thing->eventMove(this_object());
                tell_room(env, this_object()->GetShort()+" gets "+thing->GetShort(), ({this_object()}));
                break;
            }
        }
    }
}

int order(string str){
      
    string order;
    object ob = this_player();
    string petid;
        
    if(!str || !ob || !ob->GetProperty(this_object())) return 0;
    
    /* The following has to be added if using unmodified /lib/lib/lead.c or player may evade pet.
       With following code player re-establishes master/pet relationship

       if(ob && ob->GetProperty(this_object()) && ob != this_object()->GetLeader()) eventForce("follow "+ob->GetKeyName());
    */

    if(ob && ob->GetProperty(this_object())){
        sscanf(str, "%s %s", petid, order);
        tell_player("lash", "petid = "+petid+" order = "+order+" and str = "+str+" stringp(order) is "+stringp(order));
            if(!stringp(order) || !str || member_array(petid, this_object()->GetId()) == -1){
                tell_player(ob, "The large, loyal Rottweiler has an indifferent look.");
                return 1;
            }

    eventForce(order);
    return 1;
    }
}

/* Extra Information Original Diku Output
NEUTRAL-SEX MOB - Name : rottweiler [R-Number38], In room [3031] V-Number [3093]
Short description: the Rottweiler
Title: None
Long description: A large, loyal Rottweiler is here.
Monster Class: Normal   Level [3] Alignment[400]
Birth : [1314973630]secs, Logon[1314973630]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+3]  Hit p.:[43/43+3]  Move p.:[50/50+3]
AC:[70/10], Coins: [0], Exp: [0], Hitroll: [2], Damroll: [0]
Position: Standing, Fighting: Nobody
Default position: Standing, NPC flags: SENTINEL SCAVENGER ISNPC, Timer [0]
Mobile Special procedure : None
NPC Bare Hand Damage 1d7.
Carried weight: 1000   Carried items: 100
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [17] [17] [17] [17] [17]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'Lash'
Followers are:
Affected by: CHAR
*/
