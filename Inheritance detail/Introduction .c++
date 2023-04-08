//Inheritance

//############################################################ Base Class public & Sub Class Public & acceseble: Public #############################################

//It is acceseble in anywhere

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


//########################################################## Base Class Public & Sub Class PRotected acceseble: Protected #########################################
// We can access through protected, means it is only acceseble in child class only not in outside

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

class Male: protected Human {

	public:
	string color;

	void sleep() {
		cout << "Male sleeping" << endl;
	}

	int getHeight() {
		return this ->height;
	}
};



int main() {

	Male m1;
	//cout<< m1.height() <<'\n';      not accesble
	cout<< m1.getHeight() <<'\n';    // acceseble bexause it is declared in derived class Male
}


//#################################################################### Base class: Public Sub Class:Private acceseble: Private ################################

// It is acceseble Privately means within class but neither in subclass nor in outside

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

class Male: private Human {

	public:
	string color;

	void sleep() {
		cout << "Male sleeping" << endl;
	}

	int getHeight() {
		return this ->height;
	}
};



int main() {

	Male m1;
	//cout<< m1.height() <<'\n';      not accesble
	cout<< m1.getHeight() <<'\n';     //accesble because getHeight declared in Private class  Male
}

//###################################################### Base Class: Protected Child Class: public & acceseble: Protected ##########################################

// it can be access throug protected mode

#include<iostream>
using namespace std;

class Human {

	protected:
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

	int getHeight() {
		return this ->height;
	}
};



int main() {

	Male m1;
	cout<< m1.getHeight() <<'\n';
}
