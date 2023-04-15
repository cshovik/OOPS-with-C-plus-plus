//template with multiple parameter
#include<iostream>
using namespace std;

//class template
template <class T1, class T2> 
class myclass{
    public:
      T1 data1;  // t1,t2 = int , char any variable
      T2 data2;
      //constructor
      myclass(T1 a, T2 b){
        data1 = a;
        data2 = b;
      }

      void display(){
        cout<<this->data1<<'\n'<<this->data2;
      }

};

int main()
{
    myclass<char, float> obj('C',1.2);
    obj.display();


    return 0;
}

//###################################################################################################################################################
//ex-2
#include<iostream>
using namespace std;

template<class T, class u>
void sub(T x, u y)
{
   cout<<" sub "<< x-y<<'\n';
}
int main()
{
  
    sub<int, float>(10,20.2);

    return 0;
}
