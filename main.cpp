#include <iostream>
#include "Circle.h"


int main()
{
    Shape figura1(10,20);

    figura1.draw();
    std::cout<<figura1.draw()<<"con Coordenada X en: " <<figura1.getX()<<"con Coordenada Y en: "<<figura1.getY();
    std::cout<<std::endl;

    Circle c1(10,20,5.0);

    std::cout<<c1.draw()<<"con Coordenada X en: " <<c1.getX()<<"con Coordenada Y en: "<<c1.getY();
    std::cout<<std::endl;

    return 0;
}