--- /home/ccoker/Muds/ds3.9/lib/secure/sefun/light.c
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/light.c
@@ -62,6 +62,12 @@
         }
     }
     light = who->GetEffectiveVision(env);
+    /* added by lash to let player know if they can't see
+     * due to being blinded */
+    if( who->GetBlind() ) {
+        return "\nYou can't see a damn thing - you've been blinded!\n";
+    }
+    /* end add */
     if( light < 3 ) {
         return "It's too dark to see.";
     }

