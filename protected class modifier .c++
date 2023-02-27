//protected: A protected member variable or 
//function is very similar to a private member but it provided one additional benefiet that they can be accesed in child class where are called derived class
#include <iostream>
#include<cmath>
using namespace std;

class parent
{
  protected:
     int radius;
};

class child: public parent
{
  public:
  void calculate_area(int r){
    radius = r;
  } 
  void display(){
    cout<<"radius "<<radius<<'\n';
    cout<< "area "<< 3.14*radius*radius <<'\n';
  }
};
int main(){
    child c;
    c.calculate_area(3.55);
    c.display();
    return 0;
}
/*
radius is 6.5
area is 94.985
*/
