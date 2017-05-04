#include<iostream>
#include<cmath>
using namespace std;

class Point{
  double x,y;
  public:
    Point(){
      this->x = 0;
      this->y = 0;
    }

    Point(double x, double y){
      this->x = x;
      this->y = y;
    }
    
    friend ostream& operator<<(ostream& out, Point P){
      out << "(" << P.x << "," << P.y << ")";
      return out;
    }
  
    double getDist(){
      return sqrt(x*x+y*y);
    }
};


