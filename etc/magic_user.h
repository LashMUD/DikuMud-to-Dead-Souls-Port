#ifndef l_magic_user_h
#define l_magic_user_h

int SpellCombat(object ob);
void magic_missile(object ob);
void blindness(object ob);
void burning_hands(object ob);
void lightning_bolt (object ob);
void colour_spray (object ob);
void fireball(object ob);
void curse(object ob);
void energy_drain(object ob);
void sleep(object ob, object array targets);
varargs mixed eventCurse(object who, int time, int howmuch, string *skaffected, string *staffected, string textin, string textout);


#endif l_magic_user_h
