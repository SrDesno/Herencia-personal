#include "Circle.h"
#include <iostream>

Circle::Circle(int _X, int _Y, float _R):Shape(_X, _Y){
  R=_R;
}

void Circle::setR(float _R){
  R=_R;
}

float Circle::getR(){
  return R;
}

Circle::~Circle(){
  
}