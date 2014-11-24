#include <lib.h>
#include "/domains/diku-alfa/etc/pet_cmds.h"

int PetCommands(object ob, string str){

    object player = this_player();
    //string str;
    string petid;
    string cmd;
    string noun;
    string array commands;
    string doit;
    int x, y;

    commands = ({"go", "kill"});
                      
    //if(!str || !player || !player->GetProperty(this_object())) return 0;
    tell_player("lash", "commands[0] is "+commands[0]);
    tell_player("lash", "commands[1] is "+commands[1]);
    tell_player("lash", "ob is "+ob);
    tell_player("lash", "player is "+player);
    tell_player("lash", "str is "+str);
            
    /* The following has to be added if using unmodified /lib/lib/lead.c or player may evade pet.
       With following code player re-establishes master/pet relationship:

       if(ob && ob->GetProperty(this_object()) && ob != this_object()->GetLeader()) eventForce("follow "+ob->GetKeyName());
    */

    //if(player && player->GetProperty(this_object())){
        sscanf(str, "%s %s %s",petid, cmd, noun);
        tell_player("lash", "str is "+str);
        tell_player("lash", "petid is "+petid);
        tell_player("lash", "cmd is "+cmd);
        tell_player("lash", "noun is "+noun);
        doit=cmd+" "+noun;
        tell_player("lash", "doit = "+doit);
        tell_player("lash", " stringp(cmd) is "+stringp(cmd)+"; and str = "+str+"; petid = "+petid+"; cmd = "+cmd+"; noun = "+noun);
        x = member_array(petid, ob->GetId());
        y = member_array(cmd, commands);
        tell_player("lash", "x is "+x+" and y is "+y);
            if(!stringp(cmd) || !str || member_array(petid, ob->GetId()) == -1 || member_array(cmd, commands) == -1){
                /*tell_player(player, "The large, trained wolf has an indifferent look.");
                return 1;*/
                return notify_fail("The large, trained wolf has an indifferent look.");
            }
    //}
    doit==cmd+noun;
    ob->eventForce(doit);
    //tell_player("lash", "eventForce() = "+eventForce(doit));
    return 1;
} 
       

