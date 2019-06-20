#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "options.h"
#include "adobe_dancing.h"
int main(int arg, char *args[])
{
  int options[2];
  parse_options(arg, args, options);
  dispatch_adobe_dancing(options);
}