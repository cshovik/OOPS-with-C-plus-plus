//private- A private member variable of function cannot be accesed or even viewed from outside the class.only the class and friend fuctions can 
//access private member 
#include <iostream>
#include<cmath>
using namespace std;

class circle{
  private:
    double radius;
  public:
      void compute_area(double r)// using parameter
      {
         radius = r;
      
        double area = 3.14*radius*radius;

        cout<< "radius is " <<radius<<'\n';
        cout<<"area is " << area <<'\n';
  }
};

int main(){
  circle c;  //object create
  c.compute_area(5.5);
  return 0;
}

/*
radius is 6.5
area is 94.985
*/

//##################################################################################################################################################################

#include <iostream>
#include<cmath>
using namespace std;

class sum{
private:
   int x,y,z;
public:
   void input(){
    cout<<"Enter the value of x,y";
    cin>>x>>y;
   }
   void add(){
    z=x+y;
   }
   void display(){
    cout<<"sum"<<z<<'\n';
   }

};
int main(){
  sum s;
  s.input();
  s.add();
  s.display();
  return 0;
}
