/*
curses  wrapper
author jieyang
see mit licenses
 */
#include <curses.h>
#include <unistd.h>
#include <string.h>
#include "colors.h"
#include "photoes.h"
#include "options.h"
#define PREPARE_FRAME initscr();curs_set(0);
#define DESTORY_FRAME endwin();
void play(int element,int  colorful);

