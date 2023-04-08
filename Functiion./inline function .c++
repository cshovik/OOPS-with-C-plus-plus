//Inline function- it is like normal function just use inline before function
//In inline function- compiler replace the function call with the function definition code and compile the entire code. This process is called expansion. 
// we can write inline in class also Ex: inline void get();--> but it is not best code to be considered 
// so We define the function in class then use inline outside the class 

#include<iostream>
using namespace std;

class operation {
	int a , b, add, sub;
	float div;
	

public:
   void get();
   void sum();
   void diff();
};

//to define the function outside the operator scope operator used
inline void operation ::get() {
	cout<< "Enter first value:";
	cin >> a;                 
	cout << "Enter second value:";
	cin >> b;
}

inline void operation ::sum() {
	add= a+b;
	 cout << "Addition of two numbers: " << a + b << "\n";       //function define
}

inline void operation ::diff()
{
    sub = a - b;
    cout << "Difference of two numbers: " << a - b << "\n";
}

int main() {
	operation s;
	s.get();
	s.sum();   //function call
	s.diff();

	return 0;
}
