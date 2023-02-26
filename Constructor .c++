#include <bits/stdc++.h>
#include <iostream>
#include<cmath>
using std::string;

//constructor - 1) a constructor have no return type;
//              2) a constructor have same name of class. this class name is employee so constructor is also employee.
//              3) usuall all time constructor must be public , at higer level there has some  exception cases.

//Default constructor- if we didnt mention  employee1.Name = " " employee1.Company=" " employee1.Age=
//then also it shows its default constructor
//output- Name-
//        Compant-
//        age- 85350 some random number




class Employee {
public: 
    string Name; //default constructor    
    string Company; //default constructor   
    int Age;// default constructor

    void Indtroduceyourself(){
      std::cout<< "Name " <<Name <<'\n';
      std::cout<< "company " << Company << '\n';
      std::cout<< "Age " << Age << '\n';
    }
    //constructor
     //construction of the object here
    Employee(string name,string company, int age){ //receive the parameterfrom int main
       Name = name; //when we construct ourself we will loose the default constructor now new cionstryctor- name, age,company
       Company = company;
       Age = age;
    }
};

int main(){
    
  
    Employee employee1 = Employee("Shovik", "Tt-Codestudio",25); //Sending the parameter to Employee constructor
    employee1.Indtroduceyourself();
 

    Employee employee2 = Employee("John","dj company",30); //Sending the parameter to Employee constructor
    employee2.Indtroduceyourself();
  

}



// Type -copy constructor

#include <iostream>
#include<cmath>
using namespace std;

class Samplecopyconstructor
{
  private:
  int x, y;  //data member

  public:
  //constructor
  Samplecopyconstructor(int x1, int y1){
    x = x1;
    y = y1;       
  }
  
  //copy constructor
   Samplecopyconstructor(const Samplecopyconstructor &sam){
    x = sam.x;
    y= sam.y;

   }

   //method
   void display(){
    cout << x << " "<<y<<'\n';
   }


};

//main function
int main(){
  Samplecopyconstructor obj1(10,15); //normal constructor
  Samplecopyconstructor obj2 = obj1;  //copy constructor
  Samplecopyconstructor obj3(obj1);   // method 2- copy constructor
  
  cout<<"Normal Constructor :";
  obj1.display();
  cout<<"Copy constructor :";
  obj2.display();
  cout<<"Copy constructor :";
  obj3.display();


  return 0;


}

/*
output:
Normal Constructor :10 15
Copy constructor :10 15
Copy constructor :10 15
*/

// M-2 

//:: - By using scope of resolution:: we can construct and create method outside the class.

#include <iostream>
#include<cmath>
using namespace std;

class student {
  int rollno;
  string name;
  double fee;

public:
   student(int, string, double );
   //copy constructor
   student(student &t)
   {
       rollno = t.rollno;
       name = t.name;
       fee = t.fee;
     
   } 
   void display();

};

//constructor
student::student(int r,string n, double f)
{
  rollno = r;
  name = n;
  fee = f;
}
void student::display()
{
  cout << '\n' <<rollno << "\t"<< name<< "\t"<<fee;
}

int main(){
  student s1(12, "Shovik" , 500); //normal constructor
  student s2(s1);  //copy constructor
  s1.display();
  s2.display();
  return 0;

  
}

/*output
12    Shovik 500
12    Shovik 500
*/
