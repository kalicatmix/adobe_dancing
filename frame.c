#include "frame.h"
void show_icon()
{
  PREPARE_FRAME;
  int x, y, z = strlen(START_SHOW_ICON[0]);
  getmaxyx(stdscr, y, x);
  for (int i = 0; i < START_SHOW_ICON_PART_ONE; i++)
    mvprintw(i, (x - START_SHOW_ICON_COL * 2) / 2, "%s", START_SHOW_ICON[i]);

  for (int i = START_SHOW_ICON_PART_ONE; i < START_SHOW_ICON_ROW - 1; i++)
    mvprintw(i - START_SHOW_ICON_PART_ONE, x / 2, "%s", START_SHOW_ICON[i]);
  mvprintw(START_SHOW_ICON_PART_ONE, (x - START_SHOW_ICON_COL) / 2, "%s", START_SHOW_ICON[START_SHOW_ICON_ROW - 1]);

  refresh();
  sleep(5);
  clear();
  DESTORY_FRAME;
}
void dance(int element, int colorful)
{ 
  char**elem;int fg,bg;
  switch(element){
  case AfterEffects:
  elem=AFTEREFFECTS;
  fg=AE_FG;
  bg=AE_BG;
  break;
  case Audition:
  elem=AUDITION;
  fg=AD_FG;
  bg=AD_BG;
  break;
  case Flash:
  elem=FLASH;
  fg=FL_FG;
  bg=FL_BG;
  break;
  case Illustrator:
  elem=ILLUSTRATOR;
  fg=AI_FG;
  bg=AI_BG;
  break;
  case InDesign:
  elem=INDESIGN;
  fg=ID_FG;
  bg=ID_BG;
  break;
  case PhotoShop:
  elem=PHOTOSHOP;
  fg=PS_FG;
  bg=PS_BG;
  break;
  case Premiere:
  elem=PREMIERE;
  fg=PR_FG;
  bg=PR_BG;
  break;
  }
  if(colorful){START_WITH_COLOR_SHOW;BEGIN_WITH_COLOR_SHOW(fg,bg);}
  PREPARE_FRAME;
  int x, y, z = strlen(START_SHOW_ICON[0]);
  getmaxyx(stdscr, y, x);
  for(int i=0;i<ELEMENT_ROW;i++)
  mvprintw(i,0,"%s",elem[i]);
  refresh();
  sleep(5);
  if(colorful)END_COLOR_SHOW;
  clear();
  DESTORY_FRAME;

}
void show_end()
{
  PREPARE_FRAME;
  int x, y, z = strlen(END_SHOW_ICON[0]);
  getmaxyx(stdscr, y, x);
  for (int i = 0; i < END_SHOW_ICON_ROW; i++)
    mvprintw(i + 5, (x - z) / 2, "%s", END_SHOW_ICON[i]);

  z = strlen(END_SHOW_LINE[0]);

  for (int i = 0; i < END_SHOW_LINE_ROW; i++)
    mvprintw(20 + i, (x - z) / 2, "%s", END_SHOW_LINE[i]);

  refresh();
  sleep(5);
  clear();
  DESTORY_FRAME;
}
void play(int element, int colorful)
{
  show_icon(element, colorful);
  dance(element, colorful);
  show_end();
}