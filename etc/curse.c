class curse{
    object who;
    int duration;
    int modifier;
    string *skills;
    string *stats;
    string amessage;
    string emessage;
}

class curse Cursed = 0;

varargs mixed eventCurse(object who, int time, int howmuch, string *skaffected,
  string *staffected, string textin, string textout){ 

    Cursed = new(class curse);
      Cursed->who = who;
      Cursed->duration = time;
      Cursed->modifier = howmuch;
      Cursed->skills = skaffected;
      Cursed->stats = staffected;
      Cursed->amessage = textin;
      Cursed->emessage = textout;
    

    foreach(string sktype in skaffected){
        who->AddSkillBonus(sktype, howmuch);
    }
    foreach(string sttype in staffected){
        who->AddStatBonus(sttype, howmuch);
    }
    if(stringp(textin)){
        tell_player(who, textin);
    }
    else{
        who->eventPrint("\nYou feel very uncomfortable.\n");
    }
    return 1; 
}

int GetCursed(){
    if(Cursed){
        return 1;
    }
    else{
        return 0;
    }
}

void RemoveCurse(){

    object who = Cursed->who;
    string *skills = Cursed->skills;
    string *stats = Cursed->stats;
    string emess = Cursed->emessage;
        
    Cursed = 0;
       
    foreach(string sktype in skills){
        who->RemoveSkillBonus(sktype);
    }
    foreach(string sttype in stats){
        who->RemoveStatBonus(sttype);
    }
    if(stringp(emess)){
        tell_player(who, emess);
    }
    else{
        tell_player(who, "\nYou feel well again.\n");
    }
}

static void heart_beat(){

    object who = Cursed->who;
    
    if(Cursed){
        Cursed->duration--;
        if(Cursed->duration < 1){
            RemoveCurse();
        }
    }
}

