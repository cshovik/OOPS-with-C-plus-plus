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
