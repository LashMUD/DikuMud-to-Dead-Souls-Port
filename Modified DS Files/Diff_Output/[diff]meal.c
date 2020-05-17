--- /home/ccoker/Muds/ds3.9/lib/lib/meal.c
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/meal.c
@@ -1,5 +1,5 @@
 /*    /lib/meal.c
- *    from the Dead Souls LPC Library
+ *    from the Dead Souls LPC Library http://dead-souls.net
  *    standard food and drink code
  *    created by descartes of Borg 950603
  *    Version: @(#) meal.c 1.3@(#)
@@ -106,6 +106,13 @@
             who->eventPrint("That didn't seem to taste quite right.");
         who->AddPoison(x);
     }
+    /* added by Lash. Not originally present in eventDrink -
+     * was present in eventEat
+     */
+    if( (x = functionp(MealAction)) && !(x & FP_OWNER_DESTED) ){
+        evaluate(MealAction, who);
+    }
+    /* end add */
     Destruct();
     return 1;
 }

