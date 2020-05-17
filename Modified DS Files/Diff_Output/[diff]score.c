--- /home/ccoker/Muds/ds3.9/lib/cmds/players/score.c
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/score.c
@@ -2,6 +2,7 @@
  *  from the Dead Souls Library
  *  Displays a list of score and related info
  *  created by Blitz@Dead Souls
+ *  modified by Lash 11-07-2014
  */
 
 #include <lib.h>
@@ -21,9 +22,9 @@
 }
 
 static string *FoodDegree =
-({ "starving!", "very hungry.",
- "hungry.", " partially hungry.",
- "feeling full.", "quite full." });
+({ "starving!", "very hungry",
+ "hungry", "partially hungry",
+ "feeling full", "quite full" });
 
 static string *DrunkDegree =
 ({ "sober", "tipsy", "drunk", "blitzed",
@@ -40,7 +41,7 @@
 
 varargs mixed eventScore(string arg) {
     string *str;
-    int birth, age, x, y, z, qp, xp, dbt;
+    int birth, age, x, y, z, qp, xp;
     string *tmp;
     mapping lev;
     object who;
@@ -67,41 +68,28 @@
         qual = "qualifies";
         cnj = "s";
     }
-    str  = ({ capitalize(prn)+" "+be+" "+who->GetShort() + " (" +
-        who->GetMoralityDescription() + ")." });
-    str += ({ sprintf(capitalize(prn)+" "+be+" a level %d %s%s %s.",
-                who->GetLevel(),
-                ( who->GetUndead() ? "undead " : ""),
-                capitalize(who->GetRace() || "nothing"),
-                capitalize(who->GetClass() || "commoner")) });
-    str += ({ capitalize(poss)+" native town is "+who->GetTown()+", and "+
-            prn+" "+be+" "+ (who->GetReligion() ||
-                "agnostic") + " in faith." });
-    str += ({ sprintf(capitalize(prn)+" "+haben+" solved %s, and "+haben+" %s."+
-                " (%d Quest Points)",
+    /* revised by Lash */
+    str  = ({ "\nName              "+who->GetShort()});
+    str += ({ sprintf("Level             Level %d %s%s %s",
+              who->GetLevel(), ( who->GetUndead() ? "undead " : ""), capitalize(who->GetRace() || "nothing"),
+              capitalize(who->GetClass() || "commoner")) });
+    str += ({ "Money             "+who->GetCurrency("gold")+" Gold Coins" });
+    str += ({ "Morality          "+who->GetMoralityDescription()+" "+"("+who->GetMorality()+")" });               
+    str += ({ "Faith             "+(who->GetReligion() ||"Agnostic") + "\nNative Town       "+who->GetTown() });
+    str += ({ sprintf("Quests Solved     %s\nTitles            %s",
                 consolidate(sizeof(who->GetQuests()),
                     "one quest"),
                 consolidate(sizeof(who->GetTitles()),
-                    "one title"), who->GetQuestPoints() ) });
+                    "one title") ) });
     birth = who->GetBirth();
     age = ( query_year(time()) - query_year(birth) );
-    str += ({ sprintf(capitalize(prn)+" "+past+
-                " born on the %d%s day of %s, year %d. "
-                "(%d years old)", query_date(birth), ordinal(query_date(birth)),
+    str += ({ sprintf("Birth Date        %d%s day of %s, year %d (%d years old)", query_date(birth), ordinal(query_date(birth)),
                 query_month(birth), query_year(birth), age) });
-    if( x = who->GetTrainingPoints() < 1 ) {
-        y = who->GetLevel() + 1 + (x / -4);
-        str += ({ "Training points await "+(who == this_player() ? "you" :
-                    objective(who))+" at level " + y + "." });
-    }
-    else str += ({ capitalize(prn)+" "+haben+" " + consolidate(
-                who->GetTrainingPoints(),
-                "one training point") + "." });
     if( who->GetWimpy() )
-        str += ({ capitalize(prn)+" "+be+" feeling wimpy." }); else
-            str += ({ capitalize(prn)+" "+be+" feeling brave." });
+        str += ({ "Wimpy             On "+"("+who->GetWimpy()+"%)" }); 
+        else str+= ({ "Wimpy             Off" });
     if( who->GetPoison() > 0 )
-        str += ({ capitalize(prn)+" "+be+" poisoned." });
+        str += ({ "Poison Status     Yes!" });
     x = who->GetFood() / 17;
     if( x > sizeof(FoodDegree) - 1 ) x = (sizeof(FoodDegree) - 1);
     y = who->GetDrink() / 17;
@@ -109,41 +97,45 @@
     z = who->GetAlcohol();
     if(z) z = (z/17) + 1;
     if( z > sizeof(DrunkDegree) - 1 ) z = (sizeof(DrunkDegree) - 1);
-    str += ({ capitalize(prn)+" "+be+" "+FoodDegree[x] });
-    str += ({ sprintf(capitalize(prn)+" "+be+
-                " %s and %s.", DrinkDegree[y], DrunkDegree[z]) });
+    str += ({ "Hunger            "+FoodDegree[x] });
+    str += ({ sprintf("Thirst            %s and %s", DrinkDegree[y], DrunkDegree[z]) });
     x = who->GetCustomStats();
 
     tmp = ({});
     qp = who->GetQuestPoints();
     xp = who->GetExperiencePoints();
-    dbt = who->GetExperienceDebt();
     lev = PLAYERS_D->GetLevelList()[(who->GetLevel()) + 1];
 
-    if(dbt){
-        str += ({ capitalize(prn)+" have "+dbt+" points of "+
-                "experience debt." });
+    if(x){
+        str += ({ "Custom Points     "+x+
+                " customization points left. Type: help customize" });
     }
 
     if(lev){
         if(REQUIRE_QUESTING){
             qp = lev["qp"] - qp;
-            if(qp > 0) tmp += ({capitalize(prn)+" require"+cnj+" "+
+            if(qp > 0) tmp += ({"Quest Points      "+capitalize(prn)+" require"+cnj+" "+
                     comma(qp)+" more quest points to advance."});
         }
-
+    
         xp = lev["xp"] - xp;
-        if(xp > 0) tmp += ({capitalize(prn)+" require"+cnj+" "+
+        if(xp > 0) tmp += ({"Advancement       "+capitalize(prn)+" require"+cnj+" "+
                 comma(xp)+" more experience points to advance."});
-        if(!sizeof(tmp)) tmp = ({capitalize(prn)+" "+qual+
+        if(!sizeof(tmp)) tmp = ({"Advancement       "+capitalize(prn)+" "+qual+
                 " to advance a level."});
         str += tmp; 
+        }    
+
+    if( x = who->GetTrainingPoints() < 1 ) {
+        y = who->GetLevel() + 1 + (x / -4);
+        str += ({ "Training points   "+(who == this_player() ? "Available" :
+                    objective(who))+" at level " + y + "." });
     }
+    else str += ({ "Training Points   "+capitalize(prn)+" "+haben+" " + consolidate(
+                who->GetTrainingPoints(),
+                "one training point") + "." });
 
-    if(x){
-        str += ({ "\n"+capitalize(prn)+" "+haben+" "+x+
-                " customization points left. Type: help customize" });
-    }
+    
     this_player()->eventPage(str, "info");
     return 1;
 }

