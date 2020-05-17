--- /home/ccoker/Muds/ds3.9/lib/lib/combat.c
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/combat.c
@@ -576,7 +576,8 @@
         return 0;
     }
 
-    if( position == POSITION_LYING || position == POSITION_SITTING &&
+    /* parentheseses as per Nilrin 6/25/13 on Dead Souls message board in Bug Central */
+    if( (position == POSITION_LYING || position == POSITION_SITTING) &&
             RACES_D->GetLimblessCombatRace(this_object()->GetRace()) != 1){
         if(this_object()->CanFly()){
             this_object()->eventFly();
@@ -992,12 +993,21 @@
 void eventKillEnemy(object ob){
     int level;
     int reward;
+    int y;
 
     if( !ob ) return;
     level = ob->GetLevel();
     if(ob->GetCustomXP()) reward = ob->GetCustomXP();
     else reward = (level * 99);
 
+    /*added by Lash for delta morality based on killed NPC's morality */
+    y = ob->GetMorality();
+    SetMorality(GetMorality()-y);
+    if (GetMorality()>2500) SetMorality(2500);
+    if (GetMorality()<-2500) SetMorality(-2500);
+    /* end add */
+    
+        
     if(this_object()->GetParty()){
         int spoils;
         object *loot_sharers = ({ this_object() });
@@ -1040,6 +1050,8 @@
 }
 
 void eventEnemyDied(object ob){
+    int x;
+    x = ob->GetMorality();
     if( !ob ) return;
     Enemies -= ({ ob });
     Hostiles -= ({ ob });

