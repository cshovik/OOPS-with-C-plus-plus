// In a abstract class there must be an virtual fuction, the class that contain min one virtual functiion called abstrac class
/* pure virtual function force derived class to override unless it will show runtime error but in virtual function it doesn't force to override, on that case 
if we override ,it will execute in runtime( display derived ) & if we not it will execute in compiletime(display base)  */

//############################################################## Virtual function & abstract class ###################################################################

#include<iostream>
using namespace std;

//abstract  base class contain pure virual function print
class base {
public:
    //pure virtual function
    virtual void print() = 0;
    
};

class derived: public base {
public:
    void print(){
		cout << "print derived class"<< '\n';
	}

};

//pure virtual function force derived class to override unless it will show runtime error
class derived2: public base {
public:
    void print() {
        cout << "print derived2 class" << '\n' ;
    }
};

int main() {
	base *b = new derived();
	b->print();
	
	base *b2 = new derived2();
	b2->print();

	return 0;
}

/*
print derived class
print derived2 class
*/

//##################################################################################################################################################################

ex2


#include<iostream>
using namespace std;
  
class Base
{
   int x;
public:
    virtual void fun() = 0;
    int getX() { return x; }
};
  
// This class inherits from Base and implements fun()
class Derived: public Base
{
    int y;
public:
    void fun() { cout << "fun() called"; }
};
  
int main(void)
{
    Derived d;
    d.fun();
    return 0;
}

//output- fun() called

//################################################################################### USing constructor in virtual function ########################################

#include<iostream>
using namespace std;
  
// An abstract class with constructor
class Base
{
protected:
int x;
public:
virtual void fun() = 0;
Base(int i) {
              x = i; 
            cout<<"Constructor of base called\n";
            }
};
  
class Derived: public Base
{
    int y;
public:
    Derived(int i, int j):Base(i) { y = j; }
    void fun() { cout << "x = " << x << ", y = " << y<<'\n'; }
};
  
int main(void)
{ 
    Derived d(4, 5); 
    d.fun();
    
  //object creation using pointer of base class
    Base *ptr=new Derived(6,7);
      ptr->fun();
    return 0;
}

/*output-
Constructor of base called
x = 4, y = 5
Constructor of base called
x = 6, y = 7
*/
