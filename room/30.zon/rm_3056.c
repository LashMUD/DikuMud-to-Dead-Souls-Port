#include <lib.h>
inherit LIB_BANK;

int ReadSign();
static void create() {
    bank::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Midgaard Central Bank");
    SetLong("This simple place is the hub of financial activity for all of Midgaard. Though "+
            "not at all a fancy institution, this bank is trusted by the citizenry as being "+
            "as safe as it gets for keeping their money.\n%^GREEN%^A sign you can read hangs here.%^RESET%^");
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/zoe" : ({60, 1})
      ]) );
    SetItems( ([
        "sign" : "A sign you can read.",
        ({"bank","Midgaard Central Bank"}) : "The primary financial "
        "institution in town.",
      ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/rm_3044",
      ]) );
    SetRead( ({"sign","sign hanging here"}) , (: ReadSign :) );
    SetProperty("no attack", 1);
}
int ReadSign(){
    write( @EndText
- This bank requires a minimum balance to open an account.
To use any of the bank's services, you must first open an
account (see below as to how).

- This bank charges for certain transactions, such as
currency exchange.

To conduct business here:

request account from TELLER
request balance from TELLER
ask TELLER to deposit AMOUNT CURRENCY
ask TELLER to withdraw AMOUNT CURRENCY
ask TELLER to exchange AMOUNT CURRENCY for CURRENCY

examples:

request account from zoe
request balance from zoe
ask zoe to deposit 100 silver
ask zoe to withdraw 10 silver
ask zoe to exchange 10 gold for silver

EndText
    );
    return 1;
}

void init(){
    ::init();
}
