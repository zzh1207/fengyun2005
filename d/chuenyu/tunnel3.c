
inherit ROOM;

void create()
{
        set("short", "地牢");
        set("long", @LONG
这里黑黑暗暗，几乎伸手不见五指。唯一的光亮来自墙上忽明忽暗的松油灯。
地上和墙上布满了暗红色的血痕，散发出阵阵腥气。不断传来的哀嚎声在死沉的地
牢里回荡，令人毛骨耸然。
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
  		"southeast" : __DIR__"dungeon",
  		"south"   : __DIR__"tunnel2",
]));

	set("coor/x",-10);
	set("coor/y",40);
	set("coor/z",5);
	setup();
}
