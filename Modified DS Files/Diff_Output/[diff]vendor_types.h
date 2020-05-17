--- /home/ccoker/Muds/ds3.9/lib/include/vendor_types.h
+++ /home/ccoker/Desktop/DikuMud-to-Dead-Souls-Port-master/Modified DS Files/vendor_types.h
@@ -11,10 +11,12 @@
 #define VT_FISHING     (1 << 8)
 #define VT_PLANT       (1 << 9)
 #define VT_HERB        (1 << 10)
-#define VT_CONTRABAND  (1 << 11)
+#define VT_BOAT        (1 << 11) // Added by Lash 12-16-08
+#define VT_CONTRABAND  (1 << 12)
+
 
 #define MAX_VENDOR_BIT VT_CONTRABAND
 
-#define VT_ALL        VT_TREASURE | VT_WEAPON | VT_ARMOR | VT_LIGHT | VT_FOOD | VT_DRINK | VT_MAGIC | VT_FISHING | VT_PLANT | VT_HERB | VT_CONTRABAND
+#define VT_ALL    VT_TREASURE | VT_WEAPON | VT_ARMOR | VT_LIGHT | VT_FOOD | VT_DRINK | VT_MAGIC | VT_FISHING | VT_PLANT | VT_HERB | VT_BOAT | VT_CONTRABAND
 
 #endif /* s_vendor_types_h */

