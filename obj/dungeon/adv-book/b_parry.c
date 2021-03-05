#include <ansi.h>
inherit "/obj/dungeon/draft.c";

void create()
{
        set_name("高级招架之技", ({ "book" }));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "本");
                set("long",
"小册子上画着许多小人，分成两人一组，一个攻击，另一个在
招架，你可以试着去领悟它。（master）\n");
                set("value", 1000);
                set("no_get", 1);
                set("no_drop",1);
                set("no_sell",1);
                set("material", "paper");
                
                set("teaching", "advanced-parry");
		set("teaching_limit", 200);
		set("required_exp", 5000000);
        }
}