--- /home/ccoker/Muds/ds3.9/lib/secure/cmds/admins/ticktock.c
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/ticktock.c
@@ -29,12 +29,12 @@
 
     //tod = SEASONS_D->GetTimeOfDay();
 
-    if(hours >= 12  && hours != 24) {
-        if(hours != 12) hours -= 12;
+    if(hours >= 10  && hours != 20) {
+        if(hours != 10) hours -= 10;
         meridiem = " pm";
     }
 
-    if(!hours || hours == 0) hours = 12;
+    if(!hours || hours == 0) hours = 10;
 
     if(minutes < 10) nulle = "0";
 
@@ -50,5 +50,6 @@
             "specified. This is useful for changing night to "
             "day and vice versa, when testing ambient light and "
             "variable room descriptions. The timeshift does not "
-            "persist between reboots.");
+            "persist between reboots. In this MUD the day length is "
+             +DAY_LENGTH+" hrs and the hour length is "+HOUR_LENGTH+".");
 }

