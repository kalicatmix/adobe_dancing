/*
curses color wrapper
        COLOR_BLACK   0
        COLOR_RED     1
        COLOR_GREEN   2
        COLOR_YELLOW  3
        COLOR_BLUE    4
        COLOR_MAGENTA 5
        COLOR_CYAN    6
        COLOR_WHITE   7
author jieyang
see mit licenses
*/
#include <curses.h>
#define START_WITH_COLOR_SHOW start_color()
#define BEGIN_WITH_COLOR_SHOW(fg_color, bg_color) \
        init_pair(1, fg_color, bg_color);         \
        attron(COLOR_PAIR(1))
#define END_COLOR_SHOW attroff(COLOR_PAIR(1))
