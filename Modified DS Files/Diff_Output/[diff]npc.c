--- /home/ccoker/Muds/ds3.9/lib/lib/npc.c
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/npc.c
@@ -4,6 +4,10 @@
  *    created by Descartes of Borg 950323
  *    Version: @(#) npc.c 1.11@(#)
  *    Last Modified: 96/12/21
+ *    Modified by Lash 11/10/31 (10/31/11) 
+ *      addition of ActionsMap for npc's
+ *      code copy and pasted from Dead Souls
+ *      mudlib LIB_ROOM file
  */
 
 #include <lib.h>
@@ -42,6 +46,8 @@
 private int VisibleRiders = 1;
 private int actions_enabled = 1;
 mapping Equipped = ([]);
+private mapping ActionsMap = ([]); /* added by Lash */
+private int tick_resolution = 5; /* added by Lash */
 
 int eventExtraAction(){ return 1; }
 
@@ -116,7 +122,13 @@
 static void init(){
     guard::init();
     CheckEncounter();
-}
+    /* added by Lash */
+    if((Action && (sizeof(Action) || functionp(Action)))
+            || sizeof(ActionsMap)){
+        set_heart_beat(tick_resolution);
+    }
+}
+/* end add */
 
 static void heart_beat(){
     int position;
@@ -136,6 +148,18 @@
                 !RACES_D->GetLimblessRace(this_object()->GetRace()) ) 
             eventForce("stand up");
     }
+
+    /* added by lash */
+    if( !GetInCombat() && sizeof(ActionsMap)){
+        foreach(mixed key, mixed val in ActionsMap){
+            if( val > random(100) ){
+                if(functionp(key)) evaluate(key);
+                else eventPrint(key);
+            }
+        }
+    }
+    /* end add */
+
     if( !GetInCombat() && actions_enabled && ActionChance > random(100) ){
         int x;
 
@@ -238,7 +262,6 @@
 
 int eventDestruct(){
     mixed array worn = ({});
-    if(!valid_event(previous_object(), this_object())) return 0;
     if(room_environment() && room_environment()->GetPersistent()){
         if(!Equipped) Equipped = ([]);
         worn = this_object()->GetWorn();
@@ -631,6 +654,17 @@
 
 mixed GetAction(){ return Action; }
 
+/* added by Lash */
+mapping SetActionsMap(mapping ActMap){
+    if(ActMap && sizeof(ActMap)) ActionsMap = ActMap;
+    return copy(ActionsMap);
+}
+
+mapping GetActionsMap(){
+    return copy(ActionsMap);
+}
+/* end add */
+
 void SetCombatAction(int chance, mixed val){
     CombatActionChance = chance;
     if( stringp(val) ) val = ({ val });

