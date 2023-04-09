/*Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
It means without virtual fuction base class is displayed but if we want to show the derived class then we have to use virtual function
Virtual function must be overriding in derived class
*/

#include<iostream>
using namespace std;

class base {
public:
    //virtual function
    virtual void print() {
		cout << "print base class"<< '\n';
	}
    
	//non virtual function
	void show() {
        cout << "show base class"<< '\n';
	}  
	  
};

class derived: public base {
public:

 //virtual keyword already used in base class , so no need to use
 //it will automatically become virtual

    void print()// override the function
	 {
		cout << "print derived class"<< '\n';
	}

	void show()//override the function 
	{
        cout << "show derived class"<< '\n';
	}  
};

int main() {
	base *bptr;
	derived d;
	bptr = &d;
    
	// Virtual function, binded at runtime(display derived class)
	bptr ->print();

	// Non-virtual function, binded at compile time(display base class)
	bptr ->show();

	return 0;
}


/* output-
print derived class
show base class
*/

/*Explanation: Runtime polymorphism is achieved only through a pointer (or reference) of base class type. Also, a base class pointer can point to the objects of
base class as well as to the objects of derived class. In above code, base class pointer ‘bptr’ contains the address of object ‘d’ of derived class.
Late binding (Runtime) is done in accordance with the content of pointer (i.e. location pointed to by pointer) and Early binding (Compile time) is done 
according to the type of pointer, since print() function is declared with virtual keyword so it will be bound at runtime (output is print derived class as
pointer is pointing to object of derived class) and show() is non-virtual so it will be bound during compile time (output is show base class as pointer is of
base type).
NOTE: If we have created a virtual function in the base class and it is being overridden in the derived class then we don’t need virtual keyword in the derived 
class, functions are automatically considered as virtual functions in the derived class.
*/

//#######################################################################  Identified the case which is late binding & early binding ##############################

// late binding -runtime 
//early binding- compile time
//Overriding- When the base class and derived class have member functions with exactly the same name, same return-type, and same arguments list, then it is 
//said to be function overriding.


// CPP program to illustrate
// working of Virtual Functions
#include<iostream>
using namespace std;
  
class base {
public:
    void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    virtual void fun_3() { cout << "base-3\n"; }
    virtual void fun_4() { cout << "base-4\n"; }
};
  
class derived : public base {
public:
    void fun_1() { cout << "derived-1\n"; }
    void fun_2() { cout << "derived-2\n"; }
    void fun_4(int x) { cout << "derived-4\n"; }
};
  
int main()
{
    base *p;
    derived obj1;
    p = &obj1;
  
    // Early binding because fun1() is non-virtual
    // in base
    p->fun_1();
  
    // Late binding (RTP)
    p->fun_2();
  
    // Late binding (RTP)
    p->fun_3();
  
    // Late binding (RTP)
    p->fun_4(); //since parameter is diff in base and derived class so func4 is not overriding so base class will show virtual func will not work in this case
  
    // Early binding but this function call is
    // illegal (produces error) because pointer
    // is of base type and function is of
    // derived class
    // p->fun_4(5);
    
    return 0;
}

/*output-
base-1
derived-2
base-3
base-4
*/

/*Similar concept of Late and Early Binding is used as in above example. For fun_1() function call, base class version of function is called, fun_2() is overridden
in derived class so derived class version is called, fun_3() is not overridden in derived class and is virtual function so base class version is called, similarly 
fun_4() is not overridden so base class version is called.

NOTE: fun_4(int) in derived class is different from virtual function fun_4() in base class as prototypes of both the functions are different
*/
