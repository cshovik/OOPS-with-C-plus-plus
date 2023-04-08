//Inheritance
#include<iostream>
using namespace std;

class Human {

	public:
	int height;
	int weight;
	int age;

	public:
	int getAge() {
		return this->age;
	}
	void setWeight(int w) {
		this -> weight = w;
	}

};

class Male: public Human {

	public:
	string color;

	void sleep() {
		cout << "Male sleeping" << endl;
	}
};



int main() {

	Male object1;
	cout<< object1.age<< '\n';
	cout<< object1.weight<<'\n';  //height, weight, age inherited from class human
	cout<< object1.height << '\n';
	
	cout<<object1.color << endl; // color atribute is already initialized in male class

    object1.setWeight(84);// we assign the value 
	cout << object1.weight << endl;
	object1.sleep();

	return 0;

}
