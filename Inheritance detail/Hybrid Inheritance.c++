//Hybrid Inheritance- B & C inherit from A --> Hierarchical inheritance
//                    C inherit from B & D  --> Multiple inheritance
#include<iostream>
using namespace std;

class A {

   public:
   void func1() {
	    cout << "Inside function 1" << '\n';
   }
};

class D {
	public:
	void func4() {
		 cout << "Inside function 4" << '\n';
	}
};

//B inharit from A
class B: public A {
	public:
	void func2() {
		 cout << "Inside fuction 2 " << '\n';
	}
	
};

//C inharit from A and D
class C: public A, public D {
	public:
	void func3() {
		 cout << "Inside fuction 3 " << '\n';
	}

};


int main() {

	A obj1;
	obj1.func1();

	D obj4;
	obj4.func4();

	B obj2;
	obj2.func1(); // B class call A
	obj2.func2();

	C obj3;
	obj3.func1();  // C class call A
	obj3.func3();
	obj3.func4();  //c class call D
	
}
