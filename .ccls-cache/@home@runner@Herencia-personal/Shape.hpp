class Shape{
  private:
    int X,Y;
  public:
    Shape(int, int);
    Shape();
    std::string draw();
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    ~Shape();
}