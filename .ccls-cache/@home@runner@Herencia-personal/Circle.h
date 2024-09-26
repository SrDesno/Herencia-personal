#include "Shape.h"

class Circle:public Shape{
  private:
    float R;
  public:
    Circle(int, int, float);
    Circle();
    ~Circle();
    void setR(float);
    float getR();
};
