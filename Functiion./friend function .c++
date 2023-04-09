// Friend Function-
/*
1. Not in the scope of class
2. since it is nit in the scope of class, it cannot be called from the object of that classs ex- c1.sumcomplex()== invalid
3. can be invoked without the help of any object
4. usually contains the objects as arguments as parameter
5. can be declared inside public or private section of the class
6. It cannot access the member directly by their names and need object_name.number_name to accesss any member.
*/
#include<iostream>
using namespace std;

class complex {
	// a,b is under private
	int a,b;

	//friend complex sumcomplex(complex o1, complex o2);   we can declare it in private part also 

	public:
	void setnumber(int n1, int n2) {
		a = n1;
		b = n2;
	}
  
	friend complex sumcomplex(complex o1, complex o2); //declaration of friend function
  
	void printnumber() {
		cout<< "your number is "<<a<<" +"<< b<<"i"<<'\n';
	}

};

//a friend function which return type is complex
complex sumcomplex(complex o1, complex o2) {
	complex o3;
	o3.setnumber((o1.a + o2.a), (o1.b + o2.b));

	return o3; 
}

int main() {
	complex c1,c2,sum;
	c1.setnumber(1, 4);
	c2.setnumber(5 ,8);
	c1.printnumber();
	c2.printnumber();

    sum= sumcomplex(c1,c2);
	sum.printnumber();


	return 0;
}
/*
output-
Your number is 1+4i
Your number is 5+8i
Your number is 6+12i
*/
