#include <lib.h>
#include <damage_types.h>
#include "/domains/diku-alfa/etc/magic_user.h"


int SpellCombat(object ob){

    object env = environment(ob);
    object array *targets;
    
    int chance1, chance2, level;
    int q;

    chance1 = random(2);
    level = ob->GetLevel();
    
    //tell_room(env, "\nchance1 is "+chance1+"\n", ({ ob}));
    
    if(ob && (!ob->GetInCombat() || !ob->GetCurrentEnemy())) return 0;
    
    //find all 'living' objects in room
    
    targets = filter(get_livings(env), (: (!$1->GetInCombat() && !$1->GetSleeping()) || ($1->GetInCombat() && !$1->GetSleeping()) :));
    
    //tell_room(env, "\nsizeof(targets) is "+sizeof(targets)+"\n", ({ ob }));
    //for(q=0; q<sizeof(targets); q++)
    //tell_room(env, "\nTargets are "+targets[q]+"\n", ({ ob }));
    
    targets -= ({ob}); //removes 'caster' from targets so it is not a target
    
    //tell_room(env, "\nDeleted 'ob' now sizeof(targets) is "+sizeof(targets)+"\n", ({ ob }));
    //for(q=0; q<sizeof(targets); q++)
    //tell_room(env, "\nTargets are "+targets[q]+"\n", ({ ob }));
    if( sizeof(targets) < 1 ){
    //    tell_room(env, "\nNO TARGETS\n", ({ ob}));
        return 0;
    }
        
    if(ob->GetLevel() > 13 && sizeof(targets) >=1){
        chance2 = random(7);
        //tell_room(env, "\nchance2 SLEEP is "+chance2+"\n", ({ ob}));
            if(chance1 == 0 && chance2 == 0){
                say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'dilan oso'%^RESET%^");
                //ob->eventForce("say I'm casting sleep");
                sleep(ob, targets);
                return 1; 
            }
    }

    if(ob->GetLevel() > 12){
        chance2 = random(6); //6
        //tell_room(env, "\nchance2 CURSE is "+chance2+"\n", ({ ob}));
            if(chance1 == 0 && chance2 == 0){
                say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'gharia miwi'%^RESET%^");
                //ob->eventForce("say I'm casting curse");
                curse(ob);
                return 1; 
            }
    }

    if(ob->GetLevel() > 7){
        chance2 = random(5); //5
            //tell_room(env, "\nchance2 BLINDNESS is "+chance2+"\n", ({ ob}));
            if(chance1 == 0 && chance2 == 0){
                say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'koholian dia'%^RESET%^");
                //ob->eventForce("say I'm casting blindness");
                blindness(ob);
                return 1; 
            }
    }    

    if(ob->GetLevel() > 12 && ob->GetMorality() <= -200){
        chance2 = random(8);//8
        //tell_room(env, "\nchance2 DRAIN is "+chance2+"\n", ({ ob}));
            if(chance1 == 0 && chance2 == 0){
                say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'ib er dranker'%^RESET%^");
                //ob->eventForce("say I'm casting energy drain");
                energy_drain(ob);
                return 1; 
            }
    }
    //tell_room(env, "\nlevel[2] "+level+"\n", ({ ob}));
    if(chance1 == 0){
      switch (level) {
        case 1: //tell_room(env, "\nCASE 1\n", ({ ob})); break;
        case 2: //tell_room(env, "\nCASE 2\n", ({ ob})); break;
        case 3: //tell_room(env, "\nCASE 3\n", ({ ob})); break;
        case 4: //tell_room(env, "\nCASE 4\n", ({ ob})); 
            say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'hahili duvini'%^RESET%^");
            //ob->eventForce("say I'm casting missile");
            magic_missile(ob);
            break;
        case 5: //tell_room(env, "\nCASE 5\n", ({ ob})); break;
        case 6: //tell_room(env, "\nCASE 6\n", ({ ob})); break;
        case 7: //tell_room(env, "\nCASE 7\n", ({ ob})); break;
        case 8: //tell_room(env, "\nCASE 8\n", ({ ob})); 
            say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'grynt oef'%^RESET%^", ({ob}));
            //ob->eventForce("say I'm casting burning hands");
            burning_hands(ob);
            break;
        case 9: //tell_room(env, "\nCASE 9\n", ({ ob})); break;
        case 10: //tell_room(env, "\nCASE 10\n", ({ ob}));
            say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'sjulk divi'%^RESET%^", ({ob}));
            //ob->eventForce("say I'm casting lightning bolt");
            lightning_bolt(ob);
            break;
        case 11: //tell_room(env, "\nCASE 11\n", ({ ob})); break;
        case 12: //tell_room(env, "\nCASE 12\n", ({ ob})); break;
        case 13: //tell_room(env, "\nCASE 13\n", ({ ob})); break;
        case 14: //tell_room(env, "\nCASE 14\n", ({ ob})); 
            say(ob->GetShort()+" utters the words %^BOLD%^%^CYAN%^'nasson hof'%^RESET%^", ({ob}));
            //ob->eventForce("say I'm casting color spray");
            colour_spray(ob);
            break;
        default: //tell_room(env, "\nCASE DEFAULT\n", ({ ob})); 
            say(ob->GetShort()+" utters the word %^BOLD%^%^CYAN%^'tuborg'%^RESET%^");
            //ob->eventForce("say I'm casting fireball");
            fireball(ob);
            break;
      }
    return 1;
    }
}


void sleep(object ob, object array targets){
  
    object env = environment(ob);
    object victim;
    int save, s_throw;

    //tell_room(env, "\nIN SLEEP FUNCTION\n", ({ ob }));
    
    foreach(victim in targets){
        save = victim->GetMagicResistance();
        s_throw = random(99)+1;
        
        //tell_room(env, "\ntarget is "+capitalize(victim->GetShort())+"\n", ({ ob}));
        //tell_room(env, "\nsave is "+save+" and s_throw is "+s_throw+"\n", ({ ob}));
            
        if (s_throw <= save){
            tell_room(env, "\n"+capitalize(victim->GetShort())+" resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, victim }));
            tell_object(victim, "\nYou resist "+ob->GetKeyName()+"'s magic attack!\n");
            victim->eventTrainSkill("magic defense",save,s_throw,1);
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
   
    //tell_room(env, "\nIN CURSE FUNCTION\n");
    //tell_room(env, "\ntarget is "+target->GetShort()+"\n", ({ ob}));
    //tell_room(env, "\nsave is "+save+" and s_throw is "+s_throw+"\n", ({ ob}));

    /*if(target->GetCursed()){
        tell_room(env, "\nTarget is Cursed already!\n");
        return;
    }
    if(!target->GetCursed()){
           tell_room(env, "\nTarget is NOT Cursed...\n");
    }
    tell_room(env, "\nsave = "+save+" and s_throw = "+s_throw+"\n");
    */
    if(s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou resist "+ob->GetKeyName()+"'s magic attack!\n");
        target->eventTrainSkill("magic defense",save,s_throw,1);
        return;
    }
    /* Note: Set up curse effects for individual classes. Primary skills and the luck stat
       will be targeted by the 'curse'
    */
    if(target->GetClass() == "mage"){
        target->eventCurse(target, 100, -1, 
                          ({"magic attack",
                            "magic defense",
                            "blunt defense", 
                            "blunt attack",
                            "melee attack",
                            "knife attack",
                            "knife defense",
                            "melee stack",
                            "melee defense",
                            "conjuring",
                          }),
                          ({"luck"}), 
                          "\nYou feel very uncomfortable.\n", 
                          "\nYou feel well again.\n");
        tell_room(env, capitalize(target->GetShort())+" briefly reveals a red aura!", ({ob, target}));
    }
    if(target->GetClass() == "fighter"){
        target->eventCurse(target, 100, -10, 
                          ({"blade attack",
                            "blade defense",
                            "blunt attack",
                            "blunt defense",
                            "multi-hand",
                            "multi-weapon",
                            "melee attack",
                            "melee defense",
                            "knife attack",
                            "knife defense"
                            "projectile attack"
                            "projectile defense",
                           }),
                           ({"luck"}),
                           "\nYou feel very uncomfortable.\n",
                           "\nYou feel well again.\n");
        tell_room(env, capitalize(target->GetShort())+" briefly reveals a red aura!", ({ob, target}));
    }
    if(target->GetClass() == "cleric"){
        target->eventCurse(target, 100, -10,
                          ({"melee attack",
                            "blunt attack",
                            "projectile attack",
                            "magic attack",
                            "melee defense",
                            "blade defense",
                            "knife defense",
                            "projectile defense",
                            "conjuring",
                            "stealth",
                            "blunt defense",
                            "magic defense",
                            "faith",
                            "healing",
                          }),
                          ({"luck"}),
                          "\nYou feel very uncomfortable.\n",
                          "\nYou feel well again.\n");
        tell_room(env, capitalize(target->GetShort())+" briefly reveals a red aura!", ({ob, target}));
    }
    if(target->GetClass() == "thief"){
        target->eventCurse(target, 100, -10,
                          ({"knife attack",
                            "projectile attack",
                            "stealth",
                            "stealing",
                            "detection",
                            "concealment",
                            "murder"
                            "melee defense",
                            "blade defense",
                            "knife defense"
                            "projectile defense",
                          }),
                          ({"luck"}),
                          "\nYou feel very uncomfortable.\n",
                          "\nYou feel well again.\n");
        tell_room(env, capitalize(target->GetShort())+" briefly reveals a red aura!", ({ob, target}));
    }
    if(!target->GetClass() || target->GetClass() == "explorer"){
        //tell_room(env, "\nTrying to execute curse...\n");
        target->eventCurse(target, 100, -10,
                          ({"blunt attack",
                            "knife attack",
                            "projectile attack",
                            "blunt defense",
                            "knife defense",
                          }),
                          ({"luck"}),
                          "\nYou feel very uncomfortable.\n",
                          "\nYou feel well again.\n");
        tell_room(env, capitalize(target->GetShort())+" briefly reveals a red aura!", ({ob, target}));
    }
}
    
void blindness(object ob){

    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;

    //tell_room(env, "\nIN BLINDNESS FUNCTION\n");
    //tell_room(env, "\ntarget is "+target->GetShort()+"\n", ({ ob}));
    //tell_room(env, "\nsave is "+save+" and s_throw is "+s_throw+"\n", ({ ob}));

    if(target->GetBlind()){
    return;
    }
    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou resist "+ob->GetKeyName()+"'s magic attack!\n");
        target->eventTrainSkill("magic defense",save,s_throw,1);
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

    //tell_room(env, "\nIN ENERGY DRAIN FUNCTION\n");
    //tell_room(env, "\ntarget is "+target->GetShort()+"\n", ({ ob}));
    //tell_room(env, "\nsave is "+save+" and s_throw is "+s_throw+"\n", ({ ob}));

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou resist "+ob->GetKeyName()+"'s magic attack!\n");
        target->eventTrainSkill("magic defense",save,s_throw,1);
        return;
    }
    else{
        range = (ob->GetLevel()) - (ob->GetLevel()/2);
        xpdrain = random(range) * 100; //in Diku it 1000, but that is too much
        dam = random(9)+1;

        target->AddExperiencePoints(-xpdrain);
        target->AddMagicPoints(-(target->GetMagicPoints()/10));
        target->AddStaminaPoints(-(target->GetStaminaPoints()/10));
        target->eventReceiveDamage(ob, MAGIC, dam, 1,);
        
        tell_player(target, "\nYour life energy is drained!\n");
        //tell_room(env, "\nHP drained is: "+dam+" Range is "+range+" and XP drained is "+xpdrain+"\n");
        tell_room(env, "\n"+capitalize(ob->GetShort())+" drains "+target->GetKeyname()+" - what a waste of energy !\n", ({ob, target})); 
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

    //tell_room(env, "\nIN MAGIC MISSILE FUNCTION\n");
    //ell_room(env, "\ntarget is "+target->GetShort()+"\n", ({ ob}));
    //tell_room(env, "\nsave is "+save+" and s_throw is "+s_throw+"\n", ({ ob}));
    //tell_room(env, "\nlevel is "+level+"\n", ({ ob}));

    if(ob->GetLevel() == 0 || ob->GetLevel() >= 31){
        return;
    }

    range = dam_each[level] - dam_each[level]/2;
    roll = random(range);
    dam = dam_each[level]/2 + roll;
    //tell_room(env, "\nLEVEL is "+level+"\n");
    //tell_room(env, "\ndam_each[level] is "+dam_each[level]+"\n");
    //tell_room(env, "\nRANGE is "+range+"\n");
    //tell_room(env, "\nROLL is "+roll+"\n");
    //tell_room(env, "\nDAMAGE is "+dam+"\n");

    tell_player(target, "\nYou stagger as a magic missile from "+capitalize(ob->GetKeyName())+" hits you.\n");
    tell_room(env, "\n"+capitalize(ob->GetKeyName())+" throws a magic missile at "+target->GetKeyName()+" who staggers under the blow\n", ({ob, target}));

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" partially resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou partially resist "+ob->GetKeyName()+"'s magic attack!\n");
        dam = dam/2;
        target->eventTrainSkill("magic defense",save,s_throw,1);
        //tell_room(env, "\nDAMAGE is "+dam+"\n");
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

    //tell_room(env, "\nIN BURNING HANDS FUNCTION\n");
    //ell_room(env, "\ntarget is "+target->GetShort()+"\n", ({ ob}));
    //tell_room(env, "\nsave is "+save+" and s_throw is "+s_throw+"\n", ({ ob}));

    if(ob->GetLevel() <= 4 || ob->GetLevel() >= 31){
        //tell_room(env, "\nlevel is "+level+"\n", ({ ob}));
        return;
    }    

    range = dam_each[level] - dam_each[level]/2;
    roll = random(range);
    dam = dam_each[level]/2 + roll;
    //tell_room(env, "\nLEVEL is "+level+"\n");
    //tell_room(env, "\ndam_each[level] is "+dam_each[level]+"\n");
    //tell_room(env, "\nRANGE is "+range+"\n");
    //tell_room(env, "\nROLL is "+roll+"\n");
    //tell_room(env, "\nDAMAGE is "+dam+"\n");

    tell_player(target, "\nYou cry out in pain as "+capitalize(ob->GetKeyName())+" burns you.\n");
    tell_room(env, "\n"+capitalize(target->GetKeyName())+" cries out as "+capitalize(ob->GetKeyName())+" burns "+nominative(target)+".\n", ({ob, target}));

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" partially resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou partially resist "+ob->GetKeyName()+"'s magic attack!\n");
        dam = dam/2;
        target->eventTrainSkill("magic defense",save,s_throw,1);
        //tell_room(env, "\nDAMAGE is "+dam+"\n");
    }

  target->eventReceiveDamage(ob, MAGIC | HEAT, dam, 0, ({"torso"}));
  
}

void lightning_bolt (object ob){

    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int range, roll, dam;
    int level = ob->GetLevel();
    int *dam_each =
        ({ 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
           36, 36, 36, 36, 36, 36, 36, 38, 39, 46, 59
        });

    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;

    //tell_room(env, "\nIN LIGHTNING BOLT FUNCTION\n");
    //tell_room(env, "\ntarget is "+target->GetShort()+"\n", ({ ob}));
    //tell_room(env, "\nsave is "+save+" and s_throw is "+s_throw+"\n", ({ ob}));


    if(ob->GetLevel() <= 8 || ob->GetLevel() >= 31){
        //tell_room(env, "\nlevel is "+level+"\n", ({ ob}));
        return;
    }    

    range = dam_each[level] - dam_each[level]/2;
    roll = random(range);
    dam = dam_each[level]/2 + roll;
    //tell_room(env, "\nLEVEL is "+level+"\n");
    //tell_room(env, "\ndam_each[level] is "+dam_each[level]+"\n");
    //tell_room(env, "\nRANGE is "+range+"\n");
    //tell_room(env, "\nROLL is "+roll+"\n");
    //tell_room(env, "\nDAMAGE is "+dam+"\n");

    tell_player(target, "\nYou are hit by lightning by "+capitalize(ob->GetKeyName())+", ouch.\n");
    tell_room(env, "\n"+capitalize(target->GetKeyName())+" screams in pain as lightning from "+
                   capitalize(ob->GetKeyName())+" penetrates "+nominative(target)+".\n", ({ob, target}));

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" partially resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou partially resist "+ob->GetKeyName()+"'s magic attack!\n");
        dam = dam/2;
        target->eventTrainSkill("magic defense",save,s_throw,1);
        //tell_room(env, "\nDAMAGE is "+dam+"\n");
    }
    target->eventReceiveDamage(ob, MAGIC | SHOCK, dam, 0, ({"torso"}));
}

void colour_spray (object ob){
  
    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int range, roll, dam;
    int level = ob->GetLevel();
    int *dam_each =
        ({ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
           44, 44, 44, 44, 44, 47, 51, 57, 60, 79
        });
    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;

    //tell_room(env, "\nIN COLOR SPRAY FUNCTION\n");
    //tell_room(env, "\ntarget is "+target->GetShort()+"\n", ({ ob}));
    //tell_room(env, "\nsave is "+save+" and s_throw is "+s_throw+"\n", ({ ob}));
    //tell_room(env, "\nob->GetLevel() "+ob->GetLevel()+"\n", ({ ob}));

    if(ob->GetLevel() <= 10 || ob->GetLevel() >= 31){
        return;
    }
    //tell_room(env, "\nLEVEL is "+level+"\n");
    //tell_room(env, "\ndam_each[level] is "+dam_each[level]+"\n");
    range = (dam_each[level]+20) - (dam_each[level]-20);
    //tell_room(env, "\nRANGE is "+range+"\n");
    roll = random(range);
    //tell_room(env, "\nROLL is "+roll+"\n");
    dam = dam_each[level]-20 + roll;
    //tell_room(env, "\nDAMAGE is "+dam+"\n");

    tell_player(target, "\nA sudden burst of colours sends you reeling.\n");
    tell_room(env, "\n"+capitalize(ob->GetKeyName())+" throws colours at "+capitalize(target->GetKeyName())+
                   " who in vain tries to escape.\n", ({ob, target}));
    

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" partially resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou partially resist "+ob->GetKeyName()+"'s magic attack!\n");
        dam = dam/2;
        target->eventTrainSkill("magic defense",save,s_throw,1);
        //tell_room(env, "\nDAMAGE is "+dam+"\n");
    }
    target->eventReceiveDamage(ob, MAGIC | EMOTIONAL, dam, 0, ({"torso"}));
}

void fireball(object ob){

    object target = ob->GetCurrentEnemy();
    object env = environment(ob);

    int range, roll, dam;
    int level = ob->GetLevel();
    int *dam_each =
        ({ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 71, 71, 77, 71, 71,
           71, 71, 71, 71, 71, 71, 77, 88, 105, 143
        });

    int save = target->GetMagicResistance();
    int s_throw = random(99)+1;

    //tell_room(env, "\nIN FIREBALL FUNCTION\n");
    //tell_room(env, "\ntarget is "+target->GetShort()+"\n", ({ ob}));
    //tell_room(env, "\nsave is "+save+" and s_throw is "+s_throw+"\n", ({ ob}));
    //tell_room(env, "\nob->GetLevel() "+ob->GetLevel()+"\n", ({ ob}));

    if(ob->GetLevel() <= 14 || ob->GetLevel() >= 31){
        return;
    }
    
    range = (dam_each[level]+20) - (dam_each[level]-20);
    roll = random(range);
    dam = dam_each[level]-20 + roll;
    dam = dam_each[level]/2 + roll;
    //tell_room(env, "\nLEVEL is "+level+"\n");
    //tell_room(env, "\ndam_each[level] is "+dam_each[level]+"\n");
    //tell_room(env, "\nRANGE is "+range+"\n");
    //tell_room(env, "\nROLL is "+roll+"\n");
    //tell_room(env, "\nDAMAGE is "+dam+"\n");

    tell_player(target, "\nYou are enveloped in flames from a fireball sent by "+capitalize(ob->GetKeyName())+" - OUCH\n");
    tell_room(env, "\n"+capitalize(ob->GetKeyName())+" smirks as "+possessive(ob)+
                   " fireball explodes into the face of "+capitalize(target->GetKeyName())+".\n", ({ob, target}));

    if (s_throw <= save){
        tell_room(env, "\n"+capitalize(target->GetShort())+" partially resists "+ob->GetKeyName()+"'s magic attack!\n", ({ ob, target }));
        tell_object(target, "\nYou partially resist "+ob->GetKeyName()+"'s magic attack!\n");
        dam = dam/2;
        target->eventTrainSkill("magic defense",save,s_throw,1);
        //tell_room(env, "\nDAMAGE is "+dam+"\n");
    }
    target->eventReceiveDamage(ob, MAGIC | HEAT, dam, 0, ({"torso"}));
}
