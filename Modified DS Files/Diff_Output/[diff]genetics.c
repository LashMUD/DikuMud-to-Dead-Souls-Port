--- /home/ccoker/Muds/ds3.8.6lil/lib/lib/genetics.c
+++ /home/ccoker/Desktop/genetics.c
@@ -11,6 +11,7 @@
 #include <damage_types.h>
 #include <daemons.h>
 #include "include/genetics.h"
+inherit "/domains/diku-alfa/etc/curse.c";
 
 class blindness {
     int count;
@@ -48,6 +49,14 @@
         return 0;
     }
 }
+
+/*added by Lash 11-26-14
+  Added to change a players 'blind' status
+*/
+int SetBlind(int x){
+    return (Blind = x);
+}
+/* end add */
 
 static void RemoveBlindness(){
     mixed val = Blind->end;
@@ -361,4 +370,14 @@
             RemoveBlindness();
         }
     }
-}
+    /* added by Lash - this is for tracking duration of the npc 'curse' spell in
+       /domains/diku-alfa/etc/magic_user.c file
+    */
+    if(Cursed){
+        Cursed->duration--;
+        if(Cursed->duration < 1){
+            RemoveCurse();
+        }
+    }
+}
+/* end add */

