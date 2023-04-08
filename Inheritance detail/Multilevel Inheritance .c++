//Multilevel Inheritance- B is inherit from A , C is inherit from B 

#include<iostream>
using namespace std;

class Animal {

	public:
	int age;
	int weight;


   public:
   void speak() {
	    cout << "Speaking" << '\n';
   }
};

// Dog class inherit from Animal Class
class Dog: public Animal {
   
};

// GermanShepher class inherit from Dog class
class GermanShepher: public Dog {

};

int main() {

	GermanShepher g;
	g.speak();

    return 0;
}
