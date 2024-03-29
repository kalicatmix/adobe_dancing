/*
the ascii icon
author jieyang
see mit licences
 */
#include <curses.h>

#define START_SHOW_ICON_ROW 33
#define START_SHOW_ICON_COL 54
#define START_SHOW_ICON_PART_ONE 16
static char* START_SHOW_ICON[]={
"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"OOOO    OOOO      OOOOOO      OO       OOOO         OO",
"OOOO    OOOO        OOO        O         OO         OO",
"OOOO    OOOO   OO    O    OO   O   OOO   OO    OOOOOOO",
"OOO     OOOO   OOO   O    OO       OOO    O    OOOOOOO",
"OOO      OOO   OOO       OOO       OOO    O    OOOOOOO",
"OOO      OOO   OOO       OOOO      OO    OO    OOOOOOO",
"OOO      OOO   OOOO      OOOO           OOO         OO",
"OO   O    OO   OOOO      OOOO      OO    OO    OOOOOOO",
"OO        OO   OOO       OOOO      OOO    O    OOOOOOO",
"OO   OO   OO   OOO       OOO       OOOO   O    OOOOOOO",
"O    OO   OO   OOO   O    OO       OOOO   O    OOOOOOO",
"O   OOO    O   OO    OO   OO   O   OOO    O    OOOOOOO",
"O   OOOO   O        OOO        O         OO          O",
"O   OOOO   O      OOOOOOO    OOO       OOOO          O",
"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"O      OOOOOOOO    OOO    OO    OOO     OOO         OO",
"O        OOOOOO    OOO    OO    OO       OO         OO",
"O   OO    OOOOO    OOO    OO    O   OO    O    OOOOOOO",
"O   OOO   OOOO     OOO     O        OOO   O    OOOOOOO",
"O   OOO    OOO      OO     O        OOO   O    OOOOOOO",
"O   OOO    OOO      OO             OOOOOOOO    OOOOOOO",
"O   OOOO   OOO      OO             OOOOOOOO         OO",
"O   OOOO   OO   O    O             OOOOOOOO    OOOOOOO",
"O   OOO    OO        O   O         OOOO   O    OOOOOOO",
"O   OOO    OO   OO   O   O         OOOO   O    OOOOOOO",
"O   OOO   OO    OO   O   OO         OOO   O    OOOOOOO",
"O   OO    OO   OOO       OO     O   OO   OO    OOOOOOO",
"O        OOO   OOOO      OOO    OO       OO          O",
"O      OOOOO   OOOO      OOO    OOO    OOOO          O",
"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"               Adobe SoftWare,We Can Dance!           "
};

#define END_SHOW_ICON_ROW 14
static char* END_SHOW_ICON[] ={                                                                                        
"    *** ***         **********     ***  *** ***    ",
"   *** **********   **      **      *** ***        ",
"   *** *********    **********         *********** ",
"  *******    ***    **      **         ***  **     ",
" ******** ** ***    **********    ********  **     ",
" *******  **                        *************  ",
"   ***  *******  ****************   **  **  **     ",
"   *** ********         **          **  **  **     ",
"   ****** ** ***    *** **          **  *********  ",
"   ****** **  ***   *** *******     ******  **     ",
"   *****  **  ***  **** **          ******  **     ",
"   ***    **       *******          *** ********** ",
"   ***  ****      ***  **********  ***  **         ",
"        **       ***                    **         ",
};
#define END_SHOW_LINE_ROW 4
static char* END_SHOW_LINE []={
"   ADOBE DANCING   ",
"   JUST MAKE FUN   ",
" 2868607141@qq.com ",
"      JIEYANG      " 
};
#define ELEMENT_ROW 20
#define ELEMENT_COL 39

#define AE_FG COLOR_RED
#define AE_BG COLOR_CYAN
static char* AFTEREFFECTS[]={
  "....+++++++++++++++++++++++++++++++:...",  
  "....+++++++;....+++++++++++++++++++:...",  
  "....+++++++.....'++++++++++++++++++:...", 
  "....+++++++..,..,++++++++++++++++++:...",  
  "....++++++;..'...++++++++++++++++++:...",  
  "....++++++...+...+++++++++'::'+++++:...",  
  "....++++++...+:..,++++++:......++++:...", 
  "....+++++'..:++...+++++,...,....+++:...", 
  "....+++++...+++...++++'..,+++;..,++:...",  
  "....+++++...+++:..,+++...+++++...++:...",  
  "....++++'..,++++...+++...'''''...++:...",  
  "....++++,..........+++...........++:...",  
  "....++++...........:+'...........++:...",  
  "....+++'...''''':...++...++++++++++:...",  
  "....+++,..,++++++...++...++++++++++:...", 
  "....+++...'++++++...:+:...+++++++++:...",  
  "....+++...+++++++:...++.........'++:...",  
  "....++,...++++++++...+++........:++:...",  
  "....++'''+++++++++'''+++++;:,:'++++:...",   
  "              AfterEffects             " 
};

#define AD_FG COLOR_GREEN
#define AD_BG COLOR_WHITE
static char *AUDITION[]={
  ",,,,+++++++,,,,:+++++++++++++++++++:,,,",  
  ",,,,+++++++,,,,,+++++++++++++++++++:,,,", 
  ",,,,++++++;,,,,,+++++++++++++++++++:,,,",   
  ",,,,++++++,,,;,,:++++++++++++++++++:,,,",   
  ",,,,++++++,,,+,,,+++++'''+++++'''++:,,,",   
  ",,,,+++++;,,;+,,,+++++,,,+++++,,,'+:,,,",  
  ",,,,+++++,,,++:,,:++++,,,+++++,,,'+:,,,",   
  ",,,,+++++,,,+++,,,++++,,,+++++,,,'+:,,,",   
  ",,,,++++',,;+++,,,++++,,,+++++,,,'+:,,,",   
  ",,,,++++,,,++++:,,;+++,,,+++++,,,'+:,,,",   
  ",,,,++++,,,,,,,,,,,+++,,,+++++,,,'+:,,,",   
  ",,,,+++',,,,,,,,,,,+++,,,+++++,,,'+:,,,",   
  ",,,,+++,,,;''''',,,;++,,,+++++,,,'+:,,,",   
  ",,,,+++,,,++++++:,,,++,,,;++++,,,'+:,,,",  
  ",,,,++',,,+++++++,,,++:,,,'+',,,,'+:,,,",   
  ",,,,++:,,:+++++++,,,;+',,,,,,,:,,'+:,,,",  
  ",,,,++,,,'+++++++:,,,++;,,,,,';,,'+:,,,",   
  ",,,,+++++++++++++++++++++++++++++++:,,,",   
  ",,,,+++++++++++++++++++++++++++++++:,,,",   
  "               Audition                "
};
#define FL_FG COLOR_RED
#define FL_BG COLOR_BLACK
static char* FLASH[]={ 
  "''''+++++++++'''''''''++'''+++++++++'''",  
  "''''+++++++++'''''''''++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''+++++++++'''''''''++'''+++++++++'''",   
  "''''+++++++++'''''''''++'''+++++++++'''",   
  "''''+++++++++'''++++++++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''+++++++++''+++++++++'''+++++++++'''",   
  "''''++++++++++++++++++++++++++++++++'''",   
  "''''++++++++++++++++++++++++++++++++'''",      
  "                Flash                  " 
};
#define AI_FG COLOR_YELLOW
#define AI_BG COLOR_BLACK
static char* ILLUSTRATOR[]={
  ",:::+++++++++++;:::'++++++'::++++++':::",  
  ",:::+++++++++++:::::++++++::::+++++':::",  
  ",:::+++++++++++:::::++++++;::'+++++':::",   
  ",:::++++++++++;::'::'++++++++++++++':::",   
  ",:::++++++++++:::+:::++++++++++++++':::",   
  ",:::++++++++++::;+:::+++++:::'+++++':::",   
  ",:::+++++++++;::++;::'++++:::'+++++':::",   
  ",:::+++++++++:::+++:::++++:::'+++++':::",   
  ",:::+++++++++:::+++:::++++:::'+++++':::",   
  ",:::++++++++;::++++:::'+++:::'+++++':::",   
  ",:::++++++++:::::::::::+++:::'+++++':::",   
  ",:::++++++++:::::::::::+++:::'+++++':::",   
  ",:::+++++++':::::::::::'++:::'+++++':::",   
  ",:::+++++++:::++++++;:::++:::'+++++':::",   
  ",:::+++++++:::+++++++:::++:::'+++++':::",   
  ",:::++++++':::+++++++:::'+:::'+++++':::",   
  ",:::++++++:::'+++++++::::+:::'+++++':::",   
  ",:::++++++;;;+++++++++;;;+;;;'+++++':::",   
  ",:::+++++++++++++++++++++++++++++++':::",   
  "                 Illustrator           " 
};
#define ID_FG COLOR_BLACK
#define ID_BG COLOR_RED
static char* INDESIGN[]={
  ",::,+++++++:::+++++++++++:::'++++++;:::",  
  ",::,+++++++,::+++++++++++:::'++++++;:::",  
  ",::,+++++++,::+++++++++++:::'++++++;:::",  
  ",::,+++++++,::+++++++++++:::'++++++;:::",  
  ",::,+++++++,::+++++++++++:::'++++++;:::",  
  ",::,+++++++,::+++++::::,':::'++++++;:::",  
  ",::,+++++++,::++++::::::::::'++++++;:::",  
  ",::,+++++++,::+++,::,'+'::::'++++++;:::",  
  ",::,+++++++,::++':::+++++:::'++++++;:::",  
  ",::,+++++++,::++::::+++++,::'++++++;:::",  
  ",::,+++++++,::++,::'+++++:::'++++++;:::",  
  ",::,+++++++,::++,::++++++:::'++++++;:::",  
  ",::,+++++++,::++,::'+++++:::'++++++;:::",  
  ",::,+++++++,::++::::+++++,::'++++++;:::",  
  ",::,+++++++,::+++:::'+++::::'++++++;:::",  
  ",::,+++++++,::+++::::,:,::::'++++++;:::",  
  ",::,+++++++,::++++,::::::+::'++++++;:::",  
  ",::,+++++++;;;+++++':,:'++;;'++++++;:::",  
  ",::,+++++++++++++++++++++++++++++++;:::",  
  "              InDesign                 "
};
#define PS_FG COLOR_BLUE
#define PS_BG COLOR_BLACK
static char* PHOTOSHOP[]={
  "....++++++++''''+++++++++++++++++++:...",  
  "....+++++,........;++++++++++++++++:...",   
  "....+++++,.........,+++++++++++++++:...",   
  "....+++++,..;+++:...'++++++++++++++:...",   
  "....+++++,..;++++:...++++++++++++++:...",   
  "....+++++,..;+++++...+++;,.,;++++++:...",   
  "....+++++,..;+++++...++......:+++++:...",   
  "....+++++,..;++++:...+....:,.++++++:...",   
  "....+++++,..;+++;...'+...++++++++++:...",   
  "....+++++,..........+'...++++++++++:...",   
  "....+++++,........:+++....:++++++++:...",   
  "....+++++,..,,,:'+++++'.....,++++++:...",  
  "....+++++,..;+++++++++++,....,+++++:...",   
  "....+++++,..;+++++++++++++:...+++++:...",   
  "....+++++,..;++++++++++++++...+++++:...",   
  "....+++++,..;+++++++++:++++...+++++:...",   
  "....+++++,..;++++++++;.......:+++++:...",   
  "....+++++,..;++++++++:......;++++++:...",   
  "....+++++++++++++++++++++'+++++++++:...",   
  "             PhotoShop                 " 
};
#define PR_FG  COLOR_YELLOW
#define PR_BG  COLOR_GREEN
static char* PREMIERE[]={
  "`...++++++,......,+++++++++++++++++:...",  
  "`...++++++.........,+++++++++++++++:...",  
  "`...++++++...:;;,...,++++++++++++++:...",  
  "`...++++++...++++'...++++++++++++++:...",  
  "`...++++++...+++++,..'+++++++++++++:...",  
  "`...++++++...+++++,..'+..;+..,+++++:...",  
  "`...++++++...+++++...++..;...,+++++:...",  
  "`...++++++...++++'...++..,..,,+++++:...",  
  "`...++++++...;;;,...:++...,++++++++:...",  
  "`...++++++.........:+++...+++++++++:...",  
  "`...++++++.......:+++++...+++++++++:...",  
  "`...++++++...++++++++++...+++++++++:...",  
  "`...++++++...++++++++++...+++++++++:...",  
  "`...++++++...++++++++++...+++++++++:...",  
  "`...++++++...++++++++++...+++++++++:...",  
  "`...++++++...++++++++++...+++++++++:...",  
  "`...++++++...++++++++++...+++++++++:...",  
  "`...+++++++++++++++++++++++++++++++:...", 
  "`...+++++++++++++++++++++++++++++++:...",  
  "                 Premiere              "
};