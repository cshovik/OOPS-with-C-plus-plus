
//############################################################### Member function of another class #################################################################

// C++ program to create a member function of another class
// as a friend function
#include <iostream>
using namespace std;
 
class base; // forward definition needed
// another class in which function is declared
class anotherClass {
public:
    void memberFunction(base& obj);
};
 
// base class for which friend is declared
class base {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
    }
 
    // friend function declaration
    friend void anotherClass::memberFunction(base&);
};
 
// friend function definition
void anotherClass::memberFunction(base& obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}
 
// driver code
int main()
{
    base object1;
    anotherClass object2;
    object2.memberFunction(object1);
 
    return 0;
}

//##################################################### frind function used in multile cases #####################################################################

// C++ Program to demonstrate
// how friend functions work as
// a bridge between the classes
#include <iostream>
using namespace std;
 
// Forward declaration
class ABC;
 
class XYZ {
    int x;
 
public:
    void set_data(int a)
    {
      x = a;
    }
 
    friend void max(XYZ, ABC);
};
 
class ABC {
    int y;
 
public:
    void set_data(int a)
    {
      y = a;
    }
 
    friend void max(XYZ, ABC);
};
 
void max(XYZ t1, ABC t2)
{
    if (t1.x > t2.y)
        cout << t1.x;
    else
        cout << t2.y;
}
 
// Driver code
int main()
{
    ABC _abc;
    XYZ _xyz;
    _xyz.set_data(20);
    _abc.set_data(35);
 
    // calling friend function
    max(_xyz, _abc);
    return 0;
}

//############################################################## friend class #####################################################################################
// functioning of a friend class
#include <iostream>
using namespace std;
 
class GFG {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    GFG()
    {
        private_variable = 10;
        protected_variable = 99;
    }
 
    // friend class declaration
    friend class F;
};
 
// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
class F {
public:
    void display(GFG& t)
    {
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable;
    }
};
 
// Driver code
int main()
{
    GFG g;
    F fri;
    fri.display(g);
    return 0;
}
