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
#include <daemons.h>

inherit LIB_SENTIENT;

void time();

static string open_path =  "W3a3003b33000c111d0d111Oe333333Oe22c222112212111a1S.";
static string close_path = "W3a3003b33000c111d0d111CE333333CE22c222112212111a1S.";
static string path;

static int index;
static int movebool = 0;

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
    SetCanBite(0);
    AddCurrency("gold", 1000);
    SetGender("male");
    SetMorality(2250);
    SetUnique(1);
    SetPermitLoad(1);
    set_heart_beat(1);            
}

void wander(){
    if(movebool == 0) return;
    //eventForce("say hour "+hour+": minutes "+minutes);
    if((hour == 4 && minutes >=30) | (hour == 20 && minutes >=30)){
        switch (path[index]) {

        case '0': eventForce("go north");
        break;

        case '1': eventForce("go east");
        break;

        case '2': eventForce("go south");
        break;

        case '3': eventForce("go west");
        break;

        case 'W':
        tell_room(environment(this_object()), "The Mayor awakens and groans loudly.", ({this_object()}));
        eventForce("stand");
        break;

        case 'S':
        eventForce("lie in chair");
        tell_room(environment(this_object()),"The Mayor instantly falls asleep.", ({this_object()}));
        eventForce("sleep");
        break;

        case 'a':
        eventForce("say Hello Honey");
        eventForce("smirk");
        break;

        case 'b':
        eventForce("say What a view! I must get something done about that dump!");
        break;

        case 'c':
        eventForce("look letters");
        eventForce("say Vandals! Youngsters nowadays have no respect for anything!");
        break;

        
        case 'd':
        eventForce("say Good day, citizens!");
        break;

        case 'e':
        eventForce("say I hereby declare the bazaar open!");
        break;

        case 'E':
        eventForce("say I hereby declare Midgaard closed!");
        break;

        case 'O':
        eventForce("unlock gate with key");
        eventForce("open gate");
        break;

        case 'C':
        eventForce("close gate");
        eventForce("lock gate with key");
        break;

        case '.':
        movebool = 0;
        break;
    
        default : tell_room(environment(this_object()), "WHOOPS! DEFAULT LINE", ({this_object()}));
        break;

        }
      index++;
    }  
}

void time(){
    time_of_day = SEASONS_D->GetMudTime();
    hour = time_of_day[0];
    minutes = time_of_day[1];
            
    if (hour == 4 & minutes == 29) {
        movebool = 1;
        path = open_path;
        index = 0;
    }
    else if (hour == 20 & minutes == 29) {
        movebool = 1;
        path = close_path;
        index = 0;
    }
        wander();
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
