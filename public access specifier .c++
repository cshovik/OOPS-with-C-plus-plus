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

//##################################################################################################################################################################


#include <iostream>
#include<cmath>
using namespace std;

class math
{
  public: 
     int x,y,z; //public variable

  public:
     void add(){
      z = x+y;
      cout<< "sum " << z<<'\n';
     } 
     //or method-2 for sub
     void sub(){
      z= x-y;
     }
     int display(){
      return z;
     }
     //or method 3 for multi
     void multi(){
      z= x * y;
     }
     void calculmulti(){
      cout<<"multiply " <<z<<'\n';
     }
     //or method 4 for divide using parameter
     void divide(int p, int q){
      int s = p/q;
      cout<< "Divide " <<s <<'\n';

     }
   
};

int main(){
  math s;
  s.x = 2;
  s.y = 3;
  s. add();
  s.sub();
  cout<<"subtsract "<<s.display()<<'\n';
  s.multi();
  s.calculmulti();
  s.divide(6,3);
  
  return 0;

}

/*
sum 5
subtract -1
multiply 6
divide 2
*/
