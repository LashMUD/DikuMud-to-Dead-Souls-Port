--- /home/ccoker/Muds/ds3.9/lib/lib/potion.c
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/potion.c
@@ -1,11 +1,13 @@
 #include <lib.h>
+#include <damage_types.h>
 
 inherit LIB_MEAL;
 
 mapping Skills = ([]);
 mapping Stats = ([]);
 mapping Points = ([]);
-
+string brl = " ";
+int brt = 0;
 int Duration;
 
 void create(){
@@ -48,12 +50,22 @@
     return Duration;
 }
 
+/* brt = bonus resistance type
+ * brl = bonus resistance level
+ * reference lib/body.c, genetics.c, bonus.c
+ */
+varargs string SetResistance(int type, string level){
+    brt = type;
+    brl = level;
+}
+
 mixed eventDrink(object who){
     object ob=new(LIB_BONUS);
     ob->SetPoints(Points); 
     ob->SetStats(Stats); 
     ob->SetSkills(Skills); 
     ob->SetBonusDuration(Duration);
+    ob->SetResistance(brt, brl);
     ob->eventMove(who);
     return meal::eventDrink(who);
 }
@@ -64,6 +76,7 @@
     ob->SetStats(Stats);
     ob->SetSkills(Skills);
     ob->SetBonusDuration(Duration);
+    ob->SetResistance(brt, brl);
     ob->eventMove(who);
     return meal::eventEat(who);
 }

