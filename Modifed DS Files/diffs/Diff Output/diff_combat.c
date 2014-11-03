942a943
>     
992a994
>     int x;
998a1001,1007
>     /*added by Lash for delta morality based on killed NPC's morality*/
>     x = ob->GetMorality();
>     SetMorality(GetMorality()-x);
>     if (GetMorality()>2500) SetMorality(2500);
>     if (GetMorality()<-2500) SetMorality(-2500);
>     
>         
1017,1027d1025
< 
<     if( member_array(ob, GetHostiles()) == -1 ){
<         int x;
< 
<         if(!estatep(ob)) eventTrainSkill("murder", GetLevel(), level, 1,GetCombatBonus(level)); 
<         x = ob->GetMorality();
<         if( x > 0 ) x = -x;
<         else if( GetMorality() > 200 ) x = 100;
<         else x = 0;
<         eventMoralAct(x);
<     }
1040a1039,1040
>     int x;
>     x = ob->GetMorality();
1045a1046
>     
