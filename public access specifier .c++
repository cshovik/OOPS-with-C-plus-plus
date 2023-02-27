//public - A public program is acceseble anywhere outside the class but within a program. Ex here radus is in public thatswhy it is acceseble in 
//int main fuction which is outside the class  
#include <iostream>
#include<cmath>
using namespace std;

class circle{
  public:
  double radius; //public data member

  double compute_area(){
    return 3.12*radius*radius;
  }
};

int main(){
  circle c;
  c.radius = 5.4;
  
  cout<<"radius "<< c.radius<<'\n';
  cout<<"area of circle "<<c.compute_area();
  return  0;
}
