70,78c70,80
<     /* added by Lash */
<     str  = ({ "\nName              "+who->GetShort()});
<     str += ({ sprintf("Level             Level %d %s%s %s",
<               who->GetLevel(), ( who->GetUndead() ? "undead " : ""), capitalize(who->GetRace() || "nothing"),
<               capitalize(who->GetClass() || "commoner")) });
<     str += ({ "Money             "+who->GetCurrency("gold")+" Gold Coins" });
<     str += ({ "Morality          "+who->GetMoralityDescription()+" "+"("+who->GetMorality()+")" });               
<     str += ({ "Faith             "+(who->GetReligion() ||"Agnostic") + "\nNative Town       "+who->GetTown() });
<     str += ({ sprintf("Quests Solved     %s\nTitles            %s",
---
>     str  = ({ capitalize(prn)+" "+be+" "+who->GetShort() + " (" +
>         who->GetMoralityDescription() + ")." });
>     str += ({ sprintf(capitalize(prn)+" "+be+" a level %d %s%s %s.",
>                 who->GetLevel(),
>                 ( who->GetUndead() ? "undead " : ""),
>                 capitalize(who->GetRace() || "nothing"),
>                 capitalize(who->GetClass() || "commoner")) });
>     str += ({ capitalize(poss)+" native town is "+who->GetTown()+", and "+
>             prn+" "+be+" "+ (who->GetReligion() ||
>                 "agnostic") + " in faith." });
>     str += ({ sprintf(capitalize(prn)+" "+haben+" solved %s, and "+haben+" %s.",
85c87,89
<     str += ({ sprintf("Birth Date        %d%s day of %s, year %d (%d years old)", query_date(birth), ordinal(query_date(birth)),
---
>     str += ({ sprintf(capitalize(prn)+" "+past+
>                 " born on the %d%s day of %s, year %d. "
>                 "(%d years old)", query_date(birth), ordinal(query_date(birth)),
89c93
<         str += ({ "Training points   "+(who == this_player() ? "Available" :
---
>         str += ({ "Training points await "+(who == this_player() ? "you" :
96,97c100,101
<         str += ({ "Wimpy             On "+"("+who->GetWimpy()+"%)" }); 
<         else str+= ({ "Wimpy             Off" });
---
>         str += ({ capitalize(prn)+" "+be+" feeling wimpy." }); else
>             str += ({ capitalize(prn)+" "+be+" feeling brave." });
99c103
<         str += ({ "Poison Status     Yes!" });
---
>         str += ({ capitalize(prn)+" "+be+" poisoned." });
107,108c111,113
<     str += ({ "Hunger            "+FoodDegree[x] });
<     str += ({ sprintf("Thirst            %s and %s", DrinkDegree[y], DrunkDegree[z]) });
---
>     str += ({ capitalize(prn)+" "+be+" "+FoodDegree[x] });
>     str += ({ sprintf(capitalize(prn)+" "+be+
>                 " %s and %s.", DrinkDegree[y], DrunkDegree[z]) });
124,127c129,132
<         if(xp > 0) tmp += ({"Advancement       "+capitalize(prn)+" require"+cnj+" "+
<                 comma(xp)+" more experience points to advance.\n"});
<         if(!sizeof(tmp)) tmp = ({"Advancement       "+capitalize(prn)+" "+qual+
<                 " to advance a level.\n"});
---
>         if(xp > 0) tmp += ({capitalize(prn)+" require"+cnj+" "+
>                 comma(xp)+" more experience points to advance."});
>         if(!sizeof(tmp)) tmp = ({capitalize(prn)+" "+qual+
>                 " to advance a level."});
132,133c137,138
<         str += ({ "Custom Points     "+x+
<                 " customization points left. Type: help customize\n" });
---
>         str += ({ "\n"+capitalize(prn)+" "+haben+" "+x+
>                 " customization points left. Type: help customize" });
