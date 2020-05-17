--- /home/ccoker/Muds/ds3.9/lib/lib/bonus.c
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/bonus.c
@@ -1,5 +1,17 @@
+/* /lib/bonus.c
+ * from the dead souls mudlib http://www.dead-souls.net
+ *
+ * modified by Lash (ccoker) for use in The Brass Ring
+ * bug fix: bonus object wasn't being destructed
+ * 2014-12-12
+ * added functionality for setting resistances
+ * 2015-12-28
+ *
+ */
+
 #include <lib.h>
 #include ROOMS_H
+#include <damage_types.h>
 
 inherit LIB_ITEM;
 
@@ -11,6 +23,8 @@
 int Duration = 15;
 string bonusname;
 object whom;
+string brl = " "; //bonus resistance level
+int brt = 0; //bonus resistance type
 
 void create(){
     item::create();
@@ -31,14 +45,11 @@
 void heart_beat(){
     if(Duration){
         Duration--;
-        //tc(identify(this_object())+" Duration: "+Duration);
     }
     else {
-        //tc("destructing "+identify(this_object()));
         this_object()->eventDestruct();
     }
     if(whom && environment() != whom){
-        //tc("No longer on "+identify(whom)+", destructing","red");
         this_object()->eventDestruct();
     }
 }
@@ -88,12 +99,9 @@
 
 int SetBonuses(){
     whom = environment();
-    //tc("setting bonuses","yellow");
     if(!whom || ! living(whom)) return 0;
-    //tc("whom: "+identify(whom));
     if(sizeof(Stats))
         foreach(string key, int val in Stats){
-            //tc(key + " " +val, "green");
             whom->AddStatBonus(key, val);
         }
     if(sizeof(Skills))
@@ -102,7 +110,6 @@
         }
     if(sizeof(Points))
         foreach(string key, int val in Points){
-            //tc(key + " " +val, "cyan");
             switch(key){
                 case "HP" : whom->AddHP(val);break;
                 case "XP" : whom->AddExperiencePoints(val);break;
@@ -115,7 +122,14 @@
                 default : break;
             }
         }
-    return 1;
+    /* see /lib/lib/genetics.c for definition
+     * of the following function 
+     * -lash (ccoker)
+     */
+    if(brt !=0 && brl !=0)
+    whom->SetResistance(brt,brl);
+    
+    return 1;    
 }
 
 int RemoveBonuses(){
@@ -129,24 +143,24 @@
         foreach(string key, int val in Skills){
             whom->RemoveSkillBonus(key);
         }
+    whom->SetResistance(brt,"none");
+    
     return 1;
 }
 
 int eventMove(mixed dest){
     int ret;
-    //tc("moving "+identify(this_object())+" from "+identify(environment()));
     if(whom && environment() == whom){
-        //tc("removing bonuses from "+identify(whom),"white");
         RemoveBonuses();
         whom = 0;
     }
     ret = ::eventMove(dest);
-    //tc("current location: "+identify(environment()));
     return ret;
 }
 
 int eventDestruct(){
     if(!valid_event(previous_object(), this_object())) return 0;
+    RemoveBonuses();
     this_object()->eventMove(ROOM_FURNACE);
     return ::eventDestruct();
 }
@@ -159,6 +173,24 @@
     return bonusname = name;
 }
 
+/* reference lib/body.c and genetics.c 
+ * resistance to damage types (/lib/lib/body.c) in
+ * varargs int eventReceiveDamage(mixed agent, int type,
+ *      int x, int internal, mixed limbs)
+ * resistance to damage (x) is defined by level: 
+ * low - damage x = (3*x)/4
+ * medium - damage x /= 2
+ * high - damage x /= 4
+ * immune - damage x = 0
+ * types are defined in /lib/include/damage_types.h
+ * -lash (ccoker)
+ */
+
+varargs string SetResistance(int type, string level){
+    brt = type;
+    brl = level;    
+}
+
 mixed CanGet(object who){ return 0; }
 mixed CanGive(object who){ return 0; }
 mixed CanSell(object who){ return 0; }

