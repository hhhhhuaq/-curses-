#include "asciiarttable.h"


const char *weather[][12] = {
    //晴 0
    {
        "    \\   /     ",
        "     .-.       ",
        " - (  晴  )-   ",
        "     `-`       ",
        "    /   \\     ",
    },
    //多云 1
    {
        "    .---.      ",
        "   (     )     ",
        ".-(CLOUDY).    ",
        "(___.__)__)    ",
        "               "
    },
    //阴 2
    {
        "    .---.      ",
        "   (       )   ",
        ".-(OVERCAST).  ",
        "(___.__)__)    ",
        "               "
    },
    //阵雨 3
    {
        "      .---.    ",
        "     (     )   ",
        "    (SHOWER).  ",
        "   (___(___)   ",
        "   '''''''     "
    },
    //雷阵雨 4
    {
        " THUNDERSHOWER ",
        "     .-.       ",
        "    (   ).     ",
        "   (___(__)    ",
        "   'Z''Z'''    "
    },

    //雷阵雨有冰雹5
    {
        "     .-.       ",
        "    (   ).     ",
        "   (___(__)    ",
        "   'Z''Z'''    ",
        "  '@'@''''     "
    },

    //雨夹雪6
    {
        "     .-.        ",
        "    (   ).      ",
        "   (___(__)     ",
        "   * ' * '*'    ",
        "  * '*' '* '    ",
    },

    //小雨7
    {
        "     .-.       ",
        "    (   ).     ",
        "   (___(__)    ",
        "   ' ' ' '     ",
        "  ' ' ' '      "
    },

    //中雨8
    {
        "     .-.       ",
        "    (   ).     ",
        "   (___(__)    ",
        "   '''''''     ",
        "  ''''''''     "
    },

    //大雨9
    {
        "     .-.       ",
        "    (   ).     ",
        "   (___(__)    ",
        "   '''''''     ",
        "  ;;;;;;;;     "
    },

    //暴雨 大暴雨 特大暴雨 10
    {
        "     .-.       ",
        "    (   ).     ",
        "   (___(__)    ",
        "   ;;;;;;;     ",
        "  ;;;;;;;;     "
    },

    //阵雪 11
    {
        "     .-.       ",
        "    (SHOWER).  ",
        "   (___(__)    ",
        "   * * * *     ",
        "  * * * *      "
    },
    // 小雪 12
    {
        "     .-.       ",
        "    (   ).     ",
        "   (___(__)    ",
        "   *  *  *     ",
        "  *  *  *      "
    },

    // 中雪 13
    {
        "     .-.       ",
        "    (   ).     ",
        "   (___(__)    ",
        "   *  *  *     ",
        "  * * * *      "
    },

    //大雪 14
    {

        "     .-.       ",
        "    (   ).     ",
        "   (___(__)    ",
        "   * * * *     ",
        "  * * * *      "
    },

    //暴雪 15
    {
        "     .-.       ",
        "    (   ).     ",
        "   (___(__)    ",
        "   *******     ",
        "  ********     "
    },

    //雾 16
    {
        " _ - _ - _ -   ",
        "_ - _ - _ -    ",
        "  _ - _ - _    ",
        "_ - _ - _ -    ",
        "               "
    },

    //冻雨 17
    {
        "     .-.       ",
        "    (   ).     ",
        "   (___(__)    ",
        "   '/'/'/'     ",
        "  '/'/'/'      "
    },

    //沙尘暴 18
    {
        " . ' .'. ' .   ",
        ". ' .'. ' .    ",
        " . ' .'. ' .   ",
        ". ' .'. ' .    ",
        "               "
    },

    //小雨-中雨 19
    {
        "      .-.      ",
        "    (小-中).    ",
        "   (___(__)    ",
        "   '''''''     ",
        "  ''''''''     "
    },

    //中雨-大雨 20
    {
        "      .-.      ",
        "    (中-大).    ",
        "   (___(__)    ",
        "   '''''''     ",
        "  ''''''''     "
    },

    //大雨-暴雨 21
    {
        "      .-.      ",
        "    (大-暴).    ",
        "   (___(__)    ",
        "   '''''''     ",
        "  ''''''''     "
    },

    //暴雨-大暴雨 22
    {
        "      .-.      ",
        "    (暴-大暴).  ",
        "   (___(__)    ",
        "   '''''''     ",
        "  ''''''''     "
    },

    //大暴雨-特大暴雨 23
    {
        "      .-----.  ",
        "    (大暴-特暴).",
        "   (___(____)  ",
        "   ''''''''''  ",
        "  ''''''''''   "

    },

    //小雪-中雪
    {
        "     .-.       ",
        "    (小-中).    ",
        "   (___(__)    ",
        "   *  *  *     ",
        "  * * * *      "
    },

    //中雪-大雪
    {
        "     .-.       ",
        "    (中-大).    ",
        "   (___(__)    ",
        "   *  *  *     ",
        "  * * * *      "
    },

    //大雪-暴雪
    {
        "     .-.       ",
        "    (大-暴).    ",
        "   (___(__)    ",
        "   *  *  *     ",
        "  * * * *      "
    },
    //浮尘 扬沙 强沙尘暴 霾
    {
        " .#.*.@.*.#    ",
        " .#.*.@.*.#    ",
        " .#.*.@.*.#    ",
        " .#.*.@.*.#    ",
        "               "
    },

  };
