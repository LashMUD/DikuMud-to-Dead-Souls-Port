153a154,155
>         mapping myspells = me->GetSpellBook();
>         mapping playerspells = who->GetSpellBook();;
160c162
<         if(!ob){
---
>         if(!ob || !myspells[skill]){
168a171,175
> 
>         if(playerspells[skill]){
>             me->eventForce("say You already know that spell.");
>             return 1;
>     }
