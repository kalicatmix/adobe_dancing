/*
parse option
 */
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define USAGES "Usage: adobe_dance [option]\n \
options:  all of options \n \
help              show help \n \
color control:    default disable color \n \
   -with-color      show with color  \n \
   -without-color   show without color \n \
show:             show what \n \
   show element     to see elements you can use [show all] \n"

#define ELEMENT_SIZE 7
#define ADOBE_ELEMENTS "all of elements:\n\
 ae  AfterEffects \n\
 ad  Audition \n\
 fl  Flash \n\
 ai  Illustrator \n\
 id  InDesign \n\
 ps  Photoshop \n\
 pr  Premiere\n"

extern char *elems[];
#ifndef ADOBE_DANCING
#define ADOBE_DANCING 1.0
enum OPTIONS{
   DISABLE_COLOR,
   ENABLE_COLOR,
   HELP,
   SHOW
};
enum ELEMENTS{
   AfterEffects = 0,
   Audition = 1,
   Flash = 2,
   Illustrator = 3,
   InDesign = 4,
   PhotoShop = 5,
   Premiere = 6
};
#endif
void show_usage();
int parse_option(char *arg);
void parse_options(int arg, char *args[], int options[]);
int parse_element(char *arg);