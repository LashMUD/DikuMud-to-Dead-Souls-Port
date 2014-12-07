#include <lib.h>
#include <daemons.h>

inherit LIB_DAEMON;

mixed cmd(mixed args) {
    int *mudtime;
    int integer, hours, minutes, ret;
    string meridiem = " am";
    string nulle = "";

    if(!archp(previous_object())) return 0;
    if(!args) args = 0;
    if(stringp(args)){
        if(sscanf(args,"%d",integer) != 1) return "Failed.";
        args = integer;
    }
    //tc("pre: "+SEASONS_D->GetCurrentTime());
    //tc("pre: "+identify(SEASONS_D->GetMudTime()));
    if(args != 0 || SEASONS_D->GetTickTock()){
        ret = SEASONS_D->eventTickTock(args);
    }
    //tc("post: "+SEASONS_D->GetCurrentTime());
    //tc("post: "+identify(SEASONS_D->GetMudTime()));

    mudtime = SEASONS_D->GetMudTime();
    hours = mudtime[0];
    minutes = mudtime[1];

    //tod = SEASONS_D->GetTimeOfDay();

    if(hours >= 10  && hours != 20) {
        if(hours != 10) hours -= 10;
        meridiem = " pm";
    }

    if(!hours || hours == 0) hours = 10;

    if(minutes < 10) nulle = "0";

    write("In the MUD, the time is "+hours+":"+nulle+minutes+meridiem+"."); 

    return 1;

}

string GetHelp(){
    return ("Syntax: ticktock <seconds>\n\n"
            "Changes in-game mud time by the number of seconds "
            "specified. This is useful for changing night to "
            "day and vice versa, when testing ambient light and "
            "variable room descriptions. The timeshift does not "
            "persist between reboots. In this MUD the day length is "
             +DAY_LENGTH+" hrs and the hour length is "+HOUR_LENGTH+".");
}
