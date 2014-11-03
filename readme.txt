Readme 11-03-14

Introduction

This archive contains a port of the DikuMud Alfa areas (zones)
to the Dead Souls Mud Library Version 2 and above.
Read the installation instructions in this archive to configure 
Dead Souls for use of these files.

Release Numbering Nomenclature

Releases of this project will be indicated by project name, stage,
major release number, and the revision number. For example, 
dds_pa0.1r00 (diku to dead souls pre-alpha major release 0.1 revision 00).
- A MAJOR release indicates new areas (zones, npc's, objects, etc). 
- A REVISION will consist of minor corrections such as typos or tweaking
  the object files within the major release.
- A change log will be included with the release.

File system organization

DikuMud uses numbers to refer to objects and areas in its library in contrast
to LPMuds, which ususally use descriptive text. This release retains the zones
and room DikuMud numbering system, while npc's and objects use descriptive text 
as well as their respective DikuMud number. Room files are numbered and separated
into thier respective numbered zone directories. All other objects specific
for the zone are included in their own directories under the numbered zone directory.

What this is - 
An almost complete version of the Diku Alpha areas
ported to the Dead Souls Mudlib (http://dead-souls.net)
Included are all areas, mobs with their respictive functionality,
and maps (text files) of all areas except Zone 80 (unmappable, 
by me at least). To enable proper viewing of the Composite
Midgaard Map you may have to disable "text wrapping" in your
editor. What is NOT included is player magic (spells) or player leveling.

Contents -
diku-alfa folder - domain folder of areas. npc's,objects, etc.
Maps folder - area maps indexed by zon number
Modified DS files - folder with modified Dead Souls lib files
