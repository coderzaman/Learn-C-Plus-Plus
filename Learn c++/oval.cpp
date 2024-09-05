#include "oval.h"
#include<string_view>

Oval::Oval(double x, double y, string_view descrption):s_x(x),s_y(y),Shape(descrption){
  
}

Oval:: ~Oval(){
    
}
