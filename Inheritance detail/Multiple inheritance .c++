//Multiple Inheritance

#include<iostream>
using namespace std;

class Animal {

	public:
	int age;
	int weight;


   public:
   void bark() {
	    cout << "Barking" << '\n';
   }
};

class Human {
	public:
	string color;

	public:
	void speak() {
		cout << "speaking " << '\n';
	}
};

//Multiple Inheritence- Hybrid Class inherited from Animal and Human Class
class Hybrid: public Animal, public Human {

};


int main() {

	Hybrid obj1;
	obj1.speak();
	obj1.bark();

    return 0;
}
