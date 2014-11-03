#include <lib.h>
#include <damage_types.h>
#include "/domains/diku-alfa/etc/magic_user.h"


int SpellCombat(object ob){

    object env = environment(ob);
    object array *targets;
    
    int chance1, chance2, level;

    chance1 = random(2);
    level = ob->GetLevel();

    
    if(ob && (!ob->GetInCombat() || !ob->GetCurrentEnemy())) return 0;

    targets = filter(get_livings(env), (: !$1->GetInCombat() && !$1->GetSleeping() :));
    tell_room(env, "\nsizeof(targets) is "+sizeof(targets)+"\n", ({ ob }));
    if( sizeof(targets) < 1 ){
        tell_room(env, "\nNO TARGETS\n", ({ ob}));
    }
        
    if(ob->GetLevel() > 13 && sizeof(targets) >=1){
        chance2 = random(7);
            if(chance1 == 0 && chance2 == 0){
                say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'dilan oso'%^RESET%^");
                ob->eventForce("say I'm casting sleep");
                sleep(ob, targets);
                return 1; 
            }
    }

    if(ob->GetLevel() > 12){
        chance2 = random(6); //6
            if(chance1 == 0 && chance2 == 0){
                say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'gharia miwi'%^RESET%^");
                ob->eventForce("say I'm casting curse");
                sleep(ob, targets);
                return 1; 
            }
    }

    if(ob->GetLevel() > 7){
        chance2 = random(5); //5
            if(chance1 == 0 && chance2 == 0){
                say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'koholian dia'%^RESET%^");
                ob->eventForce("say I'm casting blindness");
                sleep(ob, targets);
                return 1; 
            }
    }    

    if(ob->GetLevel() > 12 && ob->GetMorality() <= -700){
        chance2 = random(8);//8
            if(chance1 == 0 && chance2 == 0){
                say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'ib er dranker'%^RESET%^");
                ob->eventForce("say I'm casting energy drain");
                sleep(ob, targets);
                return 1; 
            }
    }
    if(chance1 == 0){
      switch (level) {
        case 1:
        case 2:
        case 3:
        case 4:
            say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'hahili duvini'%^RESET%^");
            //ob->eventForce("say I'm casting missile");
            magic_missile(ob);
            break;
        case 5:
        case 6:
        case 7:
        case 8:
            say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'grynt oef'%^RESET%^", ({ob}));
            //ob->eventForce("say I'm casting burning hands");
            burning_hands(ob);
            break;
        case 9:
        case 10:
            say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'sjulk divi'%^RESET%^", ({ob}));
            //ob->eventForce("say I'm casting lightning bolt");
            lightning_bolt(ob);
            break;
        case 11:
        case 12:
        case 13:
        case 14:
            say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'nasson hof'%^RESET%^", ({ob}));
            //ob->eventForce("say I'm casting color spray");
            colour_spray(ob);
            break;
        default:
            say(ob->GetShort()+" utters the word %^BOLD%^%^CYAN%^'tuborg'%^RESET%^");
            //ob->eventForce("say I'm casting fireball");
            sleep(ob, targets);
            break;
      }
    return 1;
    }
}


void sleep(object ob, object array targets){
  
    object env = environment(ob);
    object victim;
    int save, s_throw;

    tell_room(env, "\nIN SLEEP FUNCTION\n", ({ ob }));
    
    foreach(victim in targets){
        save = victim->GetMagicResistance();
        s_throw = random(99)+1;
        
        tell_room(env, "\ntarget is "+capitalize(victim->GetShort())+"\n", ({ ob}));
        tell_room(env, "\nsave is "+save+" and s_throw is "+s_throw+"\n", ({ ob}));
            
        if (s_throw <= save){
            tell_room(env, "\n"+capitalize(victim->GetShort())+" resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, victim }));
            tell_object(victim, "\nYou resist "+ob->GetKeyName()+"'s magic attack!\n");
            return;
        }
        else{
            tell_player(victim, "\nYou feel very sleepy ..... zzzzzz\n");
            tell_room(env, "\n"+capitalize(victim->GetKeyName())+" goes to sleep.\n", ({ob, victim}));
            victim->eventForce("sleep");
        }
    }
}    

void curse(object ob){

    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;

    if(target->GetCursed()){
        return;
    }
    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou resist "+ob->GetKeyName()+"'s magic attack!\n");
        return;
    }
    else{
        target->eventCurse(target, 10, -1, ({"melee attack"}), ({"luck"}), "\nYou feel very uncomfortable.\n", "\nYou feel well again.\n");
        tell_room(env, capitalize(target->GetShort())+" briefly reveals a red aura!", ({ob, target}));
    }
}
    
void blindness(object ob){

    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;

    if(target->GetBlind()){
    return;
    }
    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou resist "+ob->GetKeyName()+"'s magic attack!\n");
        return;
    }
    else{
    target->eventBlind(target, 300, ({"Where does this go?","\nYou feel a cloak of blindness disolve.\n"}));
    tell_player(target, "\nYou have been blinded!\n");
    tell_room(env, "\n"+capitalize(target->GetShort())+" seems to be blinded!\n", ({ob, target}));
    }
}

void energy_drain(object ob){

    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int range, xpdrain, dam;

    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou resist "+ob->GetKeyName()+"'s magic attack!\n");
        return;
    }
    else{
        range = (ob->GetLevel()) - (ob->GetLevel()/2);
        xpdrain = random(range) * 1000;
        dam = random(9)+1;

        target->AddExperiencePoints(-xpdrain);
        target->AddMagicPoints(-(target->GetMagicPoints()/10));
        target->AddStaminaPoints(-(target->GetStaminaPoints()/10));
        target->eventReceiveDamage(ob, MAGIC, dam, 1,);
        
        tell_player(target, "\nYour life energy is drained! HP drained is: "+dam+" Range is "+range+" and XP drained is "+xpdrain+"\n");
        tell_room(env, "\n"+ob->GetKeyName()+" drains "+target->GetKeyname()+" - what a waste of energy !\n", ({ob, target})); 
    }
}

void magic_missile(object ob){

    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int range, roll, dam;
    int level = ob->GetLevel();
    int *dam_each =  
        ({ 0, 3, 3, 4, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
          6, 6, 6, 6, 6, 6, 6, 6, 6, 6
        });

    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;

    if(level == 0 || level >= 31){
        return;
    }

    range = dam_each[level] - dam_each[level]/2;
    roll = random(range);
    dam = dam_each[level]/2 + roll;

    tell_player(target, "\nYou stagger as a magic missile from "+capitalize(ob->GetKeyName())+" hits you.\n");
    tell_room(env, "\n"+capitalize(ob->GetKeyName())+" throws a magic missile at "+target->GetKeyName()+" who staggers under the blow\n", ({ob, target}));

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" partially resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou partially resist "+ob->GetKeyName()+"'s magic attack!\n");
        dam = dam/2;
    }
    target->eventReceiveDamage(ob, MAGIC | BLUNT, dam, 0, ({"torso"}));
}

void burning_hands(object ob){

    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int range, roll, dam;
    int level = ob->GetLevel();
    int *dam_each =
        ({ 0, 0, 0, 0, 0, 19, 17, 20, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
          19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19
        });

    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;

    if(level <= 4 || level >= 31){
        return;
    }    

    range = dam_each[level] - dam_each[level]/2;
    roll = random(range);
    dam = dam_each[level]/2 + roll;

    tell_player(target, "\nYou cry out in pain as "+capitalize(ob->GetKeyName())+" burns you.\n");
    tell_room(env, "\n"+capitalize(target->GetKeyName())+" cries out as "+capitalize(ob->GetKeyName())+" burns "+nominative(target)+".\n", ({ob, target}));

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" partially resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou partially resist "+ob->GetKeyName()+"'s magic attack!\n");
        dam = dam/2;
    }

  target->eventReceiveDamage(ob, MAGIC | HEAT, dam, 0, ({"torso"}));
  
}

void lightning_bolt (object ob){

    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int range, roll, dam;
    int level = ob->GetLevel();
    int *dam_each =
        ({ 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 46, 39, 35, 38, 36, 36, 36, 36, 36, 36,
           36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36
        });

    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;


    if(level <= 8 || level >= 31){
        return;
    }    

    range = dam_each[level] - dam_each[level]/2;
    roll = random(range);
    dam = dam_each[level]/2 + roll;

    tell_player(target, "\nYou are hit by lightning by "+capitalize(ob->GetKeyName())+", ouch.\n");
    tell_room(env, "\n"+capitalize(target->GetKeyName())+" screams in pain as lightning from "+
                   capitalize(ob->GetKeyName())+" penetrates "+nominative(target)+".\n", ({ob, target}));

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" partially resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou partially resist "+ob->GetKeyName()+"'s magic attack!\n");
        dam = dam/2;
    }
    target->eventReceiveDamage(ob, MAGIC | SHOCK, dam, 0, ({"torso"}));
}

void colour_spray (object ob){
  
    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int range, roll, dam;
    int level = this_object()->GetLevel();
    int *dam_each =
        ({ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 60, 57, 51, 47, 44, 44, 44, 44, 44,
           44, 44, 44, 44, 44, 44, 44, 44, 44, 44
        });
    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;

    if(level <= 10 || level >= 31){
        return;
    }
    
    range = (dam_each[level]+20) - (dam_each[level]-20);
    roll = random(range);
    dam = dam_each[level]-20 + roll;

    tell_player(target, "\nA sudden burst of colours sends you reeling.\n");
    tell_room(env, "\n"+capitalize(ob->GetKeyName())+" throws colours at "+capitalize(target->GetKeyName())+
                   " who in vain tries to escape.\n", ({ob, target}));

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" partially resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou partially resist "+ob->GetKeyName()+"'s magic attack!\n");
        dam = dam/2;
    }
    target->eventReceiveDamage(ob, MAGIC | EMOTIONAL, dam, 0, ({"torso"}));
}

void fireball(object ob){

    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int range, roll, dam;
    int level = ob->GetLevel();
    int *dam_each =
        ({ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 105, 88, 77, 71, 71,
           71, 71, 71, 71, 71, 71, 71, 71, 71, 71
        });

    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;

    if(level <= 14 || level >= 31){
        return;
    }
    
    range = (dam_each[level]+20) - (dam_each[level]-20);
    roll = random(range);
    dam = dam_each[level]-20 + roll;

    tell_player(target, "\nYou are enveloped in flames from a fireball sent by "+capitalize(ob->GetKeyName())+" - OUCH\n");
    tell_room(env, "\n"+capitalize(ob->GetKeyName())+" smirks as "+possessive(ob)+
                   " fireball explodes into the face of "+capitalize(target->GetKeyName())+".\n", ({ob, target}));

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" partially resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou partially resist "+ob->GetKeyName()+"'s magic attack!\n");
        dam = dam/2;
    }
    target->eventReceiveDamage(ob, MAGIC | HEAT, dam, 0, ({"torso"}));
}
