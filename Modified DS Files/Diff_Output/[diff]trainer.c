--- /home/ccoker/Muds/ds3.9/lib/lib/trainer.c
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/trainer.c
@@ -1,6 +1,8 @@
 #include <lib.h>
 
-inherit LIB_BASE_TRAINER;
+/* modified by Lash for inclusion of modified base_trainer.c */
+inherit "/domains/diku-alfa/etc/base_trainer.c";
+/* end mod */
 inherit LIB_SENTIENT;
 
 static void create(){

