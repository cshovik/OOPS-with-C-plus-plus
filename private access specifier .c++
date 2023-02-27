//private- A private member variable of function cannot be accesed or even viewed from outside the class.only the class and friend fuctions can 
//access private member 
#include <iostream>
#include<cmath>
using namespace std;

class circle{
  private:
    double radius;
  public:
      void compute_area(double r){
         radius = r;
      
        double area = 3.14*radius*radius;

        cout<< "radius is " <<radius<<'\n';
        cout<<"area is " << area <<'\n';
  }
};

int main(){
  circle c;
  c.compute_area(5.5);
  return 0;
}

/*
radius is 6.5
area is 94.985
*/
