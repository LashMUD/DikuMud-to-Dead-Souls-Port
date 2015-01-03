/*
* Some info about variables associated
* with timekeeping in the Mud
* version 1.0 20111013
* Added by Lash
*/


#include <lib.h>
#include <daemons.h>

inherit LIB_DAEMON;



mixed cmd() {
    int *mudtime;
    int integer, hours, minutes;
    string meridiem = " am";
    string nulle = "";
    int daynum = query_date();

    if(!archp(previous_object())) return 0;
    write("\ntime() is "+time()+"\n");
    write("ctime() is "+ctime()+"\n");
    write("SEASONS_D->GetTime(time()) is "+SEASONS_D->GetTime(time())+"\n");
    write("SEASONS_D->GetTime(time()) % (DAY_LENGTH * HOUR_LENGTH) is "+SEASONS_D->GetTime(time())% (DAY_LENGTH * HOUR_LENGTH)+"\n");
    write("SEASONS_D->GetCurrentTime() is "+SEASONS_D->GetCurrentTime()+"\n");
    write("SEASONS_D->GetHour(time()) is "+SEASONS_D->GetHour(time())+"\n");
    write("SEASONS_D->GetMinutes(time()) is "+SEASONS_D->GetMinutes(time())+"\n");
    write("SEASONS_D->GetTime(time())/(DAY_LENGTH * HOUR_LENGTH) is "+SEASONS_D->GetTime(time())/(DAY_LENGTH * HOUR_LENGTH)+"\n");
    write("DAY_LENGTH is "+DAY_LENGTH+" and HOUR_LENGTH is "+HOUR_LENGTH+"\n");
    write("DAY_LENGTH * HOUR_LENGTH is "+DAY_LENGTH * HOUR_LENGTH+"\n");
        
    mudtime = SEASONS_D->GetMudTime();
    hours = mudtime[0];
    minutes = mudtime[1];

    if(hours >= 10  && hours != 20) {
        if(hours != 10) hours -= 10;
        meridiem = " pm";
    }

    if(!hours || hours == 0) hours = 10;

    if(minutes < 10) nulle = "0";

    write("In the MUD, the time is "+hours+":"+nulle+minutes+meridiem+".\n");
    write("It is "+query_day_name()+", "+daynum+ordinal(daynum)+" day of "+
            query_month()+", in "+query_season()+" in the year "+query_year()+".\n"); 

    return 1;

}

string GetHelp(){
    return ("Syntax: timeinfo \n\n"
            "Gives the current state of some of the variables\n"+
            "used in time functions.");
}
