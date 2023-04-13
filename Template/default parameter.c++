//template with default parameter
#include<iostream>
using namespace std;

//default parameter - we can not call other parameter in int main other that float,char,int
template <class T1=int, class T2=float, class T3=char> 
class myclass{
    public:
      T1 data1; 
      T2 data2;
      T3 data3;
      //constructor
      myclass(T1 x, T2 y, T3 z){
        data1 = x;
        data2 = y;
        data3 = z;
      }

      void display(){
        cout<<"This value of a is "<<data1<<'\n';
        cout<<"This value of b is "<<data2<<'\n';
        cout<<"This value of c is "<<data3<<'\n';
      }

};

int main()
{
    myclass<> obj(4,1.2,'c');
    obj.display();
    cout<<'\n';

    myclass<float,char,char> obj2(4.1,'c','d');
    obj2.display();


    return 0;
}

/*The value of a is 4
The value of b is 1.2
The value of c is c

The value of a is 4.1
The value of b is c
The value of c is d
*/
