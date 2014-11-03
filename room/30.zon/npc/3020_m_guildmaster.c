#include <lib.h>
#include <daemons.h>
#ifndef REQUIRE_QUESTING
#define REQUIRE_QUESTING 1
#endif

inherit LIB_SENTIENT;

int hint;

int AdvanceDude(mixed arg);
mapping advancement, Levels;
int TalkFunc(){
    string thing1, thing2, thing3, thing4, thing5;

    thing1 = "There's no shame in being wimpy. Live to fight another day. Death takes away valuable xp.";
    thing2 = "I wish I could see Princess Daphne again.";
    thing3 = "Don't fight drunk.";
    thing4 = "Learning spells from Herkimer is a good idea.";
    thing5 = "Food, drink, and caffeine help restore health and strength.";

    switch(hint){
    case 0 : eventForce("say "+thing1);break;
    case 1 : eventForce("say "+thing2);break;
    case 2 : eventForce("say "+thing3);break;
    case 3 : eventForce("say "+thing4);break;
    case 4 : eventForce("say "+thing5);break;
    default :  eventForce("smile");
    }

    if(hint == 4) hint = 0;
    else hint++;
    return 1;
}

static void create() {
    int i;
    sentient::create();
    Levels = PLAYERS_D->GetLevelList();
    advancement = ([]);
    SetKeyName("guildmaster");
    SetId(({"guild master", "mage guildmaster", "guildmaster"}));
    SetShort("your Guildmaster");
    SetLong("Even though your guildmaster looks old and tired, you can clearly see the\n"+
            "vast amount of knowledge she posesses. She is wearing fine magic clothing,\n"+
            "and you notice that she is surrounded by a blue shimmering aura.");
    SetPolyglot(1);
    SetLanguage("common", 100);
    SetDefaultLanguage("common");
    SetRace("human");
    SetLevel(24);
    SetGender("female");
    SetAction(5, (: TalkFunc :));
    AddTalkResponse("hello", "hi! Ask me for a tip!");
    AddTalkResponse("hi", "hi! Ask me for a tip!");
    SetCommandResponses( ([ 
        "advance": (: AdvanceDude :) 
      ]) );
    SetRequestResponses( ([
        ({ "a hint", "hints", "a clue", "clues", "a tip", "tips" }) : 
        (: TalkFunc :),
      ]) );
    SetConsultResponses( ([
        ({ "level", "levels", "leveling", "advancement", "advancing" }) :
        "To level, get some experience out there and then come back "+
        "and ask me to advance. For some levels you may need "+
        "some quest points to advance, not just experience.",
        ({ "xp", "XP", "experience" }) : "You can score experience "+
        "points by killing monsters or completing some quests. "+
        "Sometimes you'll get xp for completing some task you didn't "+
        "even know would give you points. Generally though, it's combat "+
        "that results in XP rewards, if you win.",
        ({ "points" }) : "It's how to keep track of your progress. The "+
        "kinds of points I care about are experience points and "+
        "quest points.",
        ({ "quests", "quest", "quest points" }) : "Quests are missions "+
        "you can try to complete that will usually reward you with "+
        "quest points if you solve them. "+
        "You'll need quest points to advance past a "+
        "certain level.",
      ]) );
    for(i=0;i<21;i++){
        advancement[i] = Levels[i];
    }
}

void init(){
    ::init();
}

int AdvanceDude(mixed arg){
    int level,xp,qp;
    int desired_level,required_xp,required_qp;
    mixed *statlist;
    mapping this_stat;
    int statclass, statlevel, i;

    statlist = this_player()->GetStats();

    if(this_player()->GetKeyName() == "guest"){
        this_object()->eventForce("say I don't promote temporary players.");
        return 1;
    }

    if(!level = this_player()->GetLevel()){
        this_object()->eventForce("say You are confusing me.");
        return 1;
    }

    if(level > 19){
        this_object()->eventForce("say Whoa there, big "
          "stuff. Advancement past level 20 is the "
          "purview of the Trans-Human Elder Guild. "
          "I'm sorry but I can't help you.");
        return 1;
    }

    xp = this_player()->GetExperiencePoints();
    if(!qp = this_player()->GetQuestPoints()) qp = 0;
    desired_level = level+1;
    required_xp = advancement[desired_level]["xp"];
    if(!required_qp = advancement[desired_level]["qp"]) required_qp = 0;
    if(!REQUIRE_QUESTING) required_qp = 0;
    this_object()->eventForce("say Level "+desired_level+" "
      "with the title of \""+advancement[desired_level]["title"]+"\" "
      "requires "+required_xp+" experience points and "+
      required_qp+" quest points.");

    if( xp > required_xp-1 && qp > required_qp-1){
        this_object()->eventForce("say Congratulations! "
          "You are promoted to level "+desired_level+" and "
          "have earned the name "+this_player()->GetName()+" "
          +advancement[desired_level]["title"]+".");

        this_player()->ChangeLevel(desired_level);
        this_player()->AddTrainingPoints(desired_level);
        this_player()->AddTitle(advancement[desired_level]["title"]);
        this_player()->RemoveTitle(advancement[desired_level-1]["title"]);

        this_player()->save_player((string)this_player()->GetKeyName());

        if(level == MAX_NEWBIE_LEVEL){
            write("\nDirk raises his hand and sternly points to you.\n");
            say("\nDirk raises his hand and sternly points to "+
              this_player()->GetName()+".\n");
            this_object()->eventForce("say "+this_player()->GetName()+","+
              " you are no longer a newbie. From now on, you will need"+
              " a light source to see in the dark. From now on, you will"+
              " not understand languages you haven't learned. You have"+
              " earned this promotion, and now face the future as a"+
              " real adventurer.");
        }

        return 1;
    }

    else this_object()->eventForce("say I'm sorry, "+
          this_player()->GetName()+", but you have not "
          "fulfilled all the requirements of level "+
          desired_level+". Please come back and try "
          "again once you have fulfilled them.");
    return 0;
}

string GetLevelTitle(int level){
    if(!level) level = 1;
    return advancement[level]["title"];
}

/* Extra Information Original Diku Output 
FEMALE MOB - Name : guildmaster master [R-Number12], In room [3001]
V-Number [3020]
Short description: the Guildmaster
Title: None
Long description: Your guildmaster is standing here.

Monster Class: Normal   Level [24] Alignment[1000]
Birth : [1313912677]secs, Logon[1313912677]secs, Played[0]secs
Age: [17] Years,  [0] Months,  [0] Days,  [0] Hours
Height [198]cm  Weight [200]pounds 
Hometown[0], Speaks[0/0/0], (STL[0]/per[19]/NSTL[0])
Str:[11/0]  Int:[11]  Wis:[11]  Dex:[11]  Con:[11]
Mana p.:[10/100+24]  Hit p.:[469/469+24]  Move p.:[50/50+24]
AC:[0/10], Coins: [8794], Exp: [100000], Hitroll: [20], Damroll: [4]
Position: Standing, Fighting: Nobody
Default position: Standing,NPC flags: SENTINEL ISNPC ,Timer [0] 

Mobile Special procedure : Exists
NPC Bare Hand Damage 3d8.
Carried weight: 0   Carried items: 0
Items in inventory: 0, Items in equipment: 0
Apply saving throws: [2] [2] [2] [2] [2]
Thirst: -1, Hunger: -1, Drunk: -1
Master is 'NOBODY'
Followers are:
Affected by: NOBITS
*/


