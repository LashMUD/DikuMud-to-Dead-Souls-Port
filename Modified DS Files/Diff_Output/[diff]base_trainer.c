--- /home/ccoker/Muds/ds3.9/lib/lib/base_trainer.c
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/base_trainer.c
@@ -151,21 +151,34 @@
 
     if( verb == "teach"){
         object ob = SPELLS_D->GetSpell(skill);
+        /*added by Lash - variables for checking npc and players known spells*/
+        mapping myspells = me->GetSpellBook();
+        mapping playerspells = who->GetSpellBook();
+        /* end add */
 
         if(!sizeof(me->GetSpellBook()) || me->GetNoSpells()){
             me->eventForce("speak I am not able to teach spells. I only train skills.");
             me->eventHelp();
             return 0;
         }
-        if(!ob){
+        /* modified by Lash if npc doesn't have spell in spell book*/
+        if(!ob || !myspells[skill]){
             me->eventForce("speak I've never heard of such a spell.");
             return 0;
         }
+        /* end mod */
 
         if( !who->eventLearnSpell(skill) ){
             me->eventForce("speak You are not prepared for that spell!");
             return 0;
         }
+
+        /*added by Lash - if in players spell book why reteach it?*/
+        if(playerspells[skill]){
+            me->eventForce("say You already know that spell.");
+            return 1;
+        }
+        /* end add */
 
         who->eventPrint(me->GetName() + " touches your forehead and gives "
                 "you knowledge of " + skill + ".");

