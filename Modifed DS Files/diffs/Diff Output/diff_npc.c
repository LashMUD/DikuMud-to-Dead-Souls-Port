45,46d44
< private mapping ActionsMap = ([]); /* added by Lash */
< private int tick_resolution = 5; /* added by Lash */
121,125d118
<     /* added by Lash */
<     if((Action && (sizeof(Action) || functionp(Action)))
<             || sizeof(ActionsMap)){
<         set_heart_beat(tick_resolution);
<     }
146,156d138
< 
<     /* added by lash */
<     if( !GetInCombat() && sizeof(ActionsMap)){
<         foreach(mixed key, mixed val in ActionsMap){
<             if( val > random(100) ){
<                 if(functionp(key)) evaluate(key);
<                 else eventPrint(key);
<             }
<         }
<     }
< 
650,659d631
< 
< /* added by Lash */
< mapping SetActionsMap(mapping ActMap){
<     if(ActMap && sizeof(ActMap)) ActionsMap = ActMap;
<     return copy(ActionsMap);
< }
< 
< mapping GetActionsMap(){
<     return copy(ActionsMap);
< }
