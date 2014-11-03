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
#include <position.h>
#include <daemons.h>

inherit LIB_SENTIENT;

void time();
void checkgate();

int hour, minutes;
int *time_of_day;


static void create() {
    sentient::create();

    SetKeyName("the Mayor");
    SetId( ({"mayor"}) );
    SetAdjectives(({}));
    SetShort("the Mayor");
    SetLong("He is a stocky, middle-aged man with thin, grey hair.");
    SetInventory( ([
        "/domains/diku-alfa/room/31.zon/obj/key_3133" : 1,
        ]) );
    SetAutoStand(0);
    SetRace("human");
    SetClass("fighter");
    SetLevel(23);
    SetMelee(1);
    SetCanBite(0);
    AddCurrency("gold", 1000);
    SetGender("male");
    SetMorality(2250);
    SetUnique(1);
    SetPermitLoad(1);
    set_heart_beat(1);            
}

void wander(){
    eventForce("say hour "+hour+"; minutes "+minutes+".");
    if (hour == 5 & minutes == 50 | hour==23 & minutes==50){
        this_object()->SetWander(1, ({(:say("The Mayor awakens and groans loudly."):),
        "stand", "go west", 
        "say Hello Honey!", "smirk",
        "go west", "go north", "go north", "go west",
        "say What a view! I must get something done about that dump!",
        "go west", "go west", 
        "go north", "go north", "go north", 
        "look letters", "say Vandals! Youngsters nowadays have no respect for anything!",
        "go east", "go east", "go east",
        "say Good day, citizens!",
        "go north" ,
        "say Good day, citizens!",
        "go east", "go east", "go east",
        (:checkgate:),
        "go west", "go west", "go west", "go west", "go west", "go west", 
        (:checkgate:), 
        "go south", "go south", 
        "look letters", "say Vandals! Youngsters nowadays have no respect for anything!",
        "go south", "go south", "go south", "go east", "go east", "go south", "go south", 
        "go east", "go south", "go east", "go east", "go east", 
        "say Hello Honey!", "smirk", 
        "go east", "lie in chair", "sleep", 
        (:say("The mayor lies down and instantly falls asleep."):),
        (:SetWander(0):),}), 0);
    }
    
}
         

void time(){
    time_of_day = SEASONS_D->GetMudTime();
    hour = time_of_day[0];
    minutes = time_of_day[1];
    wander();
}

void checkgate(){
    if (hour>=5 | hour<23){
        this_object()->eventForce("unlock gate with key");
        this_object()->eventForce("open gate");
        this_object()->eventForce("say I hereby declare the bazaar open!");
    }
    else if (hour>=23 | hour<5){
        this_object()->eventForce("close gate");
        this_object()->eventForce("lock gate with key");
        this_object()->eventForce("say I hereby declare Midgaard closed!");
   }
} 

void heart_beat(){
    ::heart_beat();
    time();
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
MALE MOB - Name : mayor [R-Number49], In room [3054]
V-Number [3143]
Short description: the Mayor
Title: None
Long description: The Mayor is sitting in his huge chair, snoring loudly.
Monster Class: Normal   Level [23] Alignment[900]
Birth : [1316445230]secs, Logon[1316445230]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+23]  Hit p.:[428/428+23]  Move p.:[50/50+23]
AC:[20/10], Coins: [1000], Exp: [80000], Hitroll: [18], Damroll: [12]
Position: Sleeping, Fighting: Nobody
Default position: Sleeping,NPC flags: SPEC SENTINEL ISNPC ,Timer [0]
Mobile Special procedure : Exists
NPC Bare Hand Damage 1d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/
