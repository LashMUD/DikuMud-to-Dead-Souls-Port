10c10
< #include "include/trainer.h"
---
> #include "/lib/include/trainer.h"
153a154,156
>        //added by Lash
>         mapping myspells = me->GetSpellBook();
>         mapping playerspells = who->GetSpellBook();
160c163,164
<         if(!ob){
---
>         //modified by Lash
>         if(!ob || !myspells[skill]){
168a173,177
>         //added by Lash
>         if(playerspells[skill]){
>             me->eventForce("say You already know that spell.");
>             return 1;
>     }
