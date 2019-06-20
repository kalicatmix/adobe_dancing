#include "adobe_dancing.h"
void dispatch_adobe_dancing(int options[]){
 switch (options[0])
 {
 case 1:
     dancing_with_color(options[1]);
     break;
 
 case 0:
     dancing_without_color(options[1]);
     break;
 }
}

void dancing_with_color(int element){
   play(element,1);
}

void dancing_without_color(int element){
   play(element,0);
}