#include "Shape.h"
#include <iostream>


Shape::Shape(int _X, int _Y){
  X=_X;
  Y=_Y;
}

Shape::Shape(){
  
}

Shape::~Shape(){
  
}

std::string Shape::draw(){
  return "Soy una figura";
}

void Shape::setX(int _X){
  X=_X;
}

int Shape::getX(){
  return X;
}

void Shape::setY(int _Y){
  Y=_Y;
}

int Shape::getY(){
  return Y;
}