--- /home/ccoker/Muds/ds3.9/lib/lib/lead.c
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/lead.c
@@ -114,6 +114,17 @@
     foreach(ob in GetFollowers()){
         int pos = ob->GetPosition();
         follower = Followers[ob];
+
+        /* added by lash - this is a check to see if the follower of the player is
+         * present in player's Properties mapping as a "pet". If so, then we
+         * don't want the pet to be removed from the player's Followers mapping
+         * just because it is not in a 'stand' position. Note - need to add a
+         * check to see if the player is in combat with the pet, then the player
+         *  may actually want to 'evade' the pet
+         */
+        if(this_player()->GetProperty("pet") == ob && (ob->GetSleeping() || ob->GetParalyzed()
+            || pos & badpos)) return 0;
+        /* end add */              
         if(ob->GetSleeping() || ob->GetParalyzed() || pos & badpos
                 || this_object()->GetInvis() ){
             eventEvade(ob);
@@ -125,6 +136,13 @@
         followChance += ob->GetSkillLevel("tracking");
         followChance += follower["bonus"];
         if( ob->eventFollow(dest, followChance) ) follower["lost"] = 0;
+        /* added by lash - as above, so below. A check to make sure the "pet" cannot be
+         * evaded by the player and removed from players Followers mapping. Note - need
+         * to add a check to see if the player is in combat with the pet, then the player
+         *  may actually want to 'evade' the pet
+         */
+        if(this_player()->GetProperty("pet") == ob ) return 0;
+        /* end add */ 
         else if( follower["lost"]++ && eventEvade(ob) ){
             RemoveFollower(ob);
         }

