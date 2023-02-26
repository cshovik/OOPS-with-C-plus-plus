#include <bits/stdc++.h>
#include <iostream>
#include<cmath>
using std::string;

//everything in c++ is private by default
//access modifier - public- property method can be accessed from everywhere
//protected-  the property or method can be accessed within the class and by classes derived from that class.
//private- the property method can be accesed within the class 
//object - name- the variable name we give it
//         Member data - the data that describe the object
//          Member Functions- bhaviour aspect of the object 

//class-  A class is a user-defined type that describes what a certain type of object will look like. A class description consists of a declaration and a definition. Usually these pieces are split into separate files.

//An object is a single instance of a class. You can create many objects from the same class type. here create 2 object employee1 and employee2 from the class employee

//Attributes -Any variable that is bound in a class is a class attribute
//Method- Any function defined within a class is a method

class Employee {
public: //access modifier/access specifier
    //class attributes
    string name; //members of this class is is its attribute and behaviour
    string company;
    int age;

    void Indtroduceyourself(){ //method
      std::cout<< "Name " <<name <<'\n';
      std::cout<< "company " << company << '\n';
      std::cout<< "Age " << age << '\n';
    }
};

int main(){
    
    Employee employee1; //creating an object(employee1)
    employee1.name = "Shovik"; 
    employee1.company = "YT.CodeBeauty"; //reference the class
    employee1.age = 25;
    employee1.Indtroduceyourself();
    //employee1.Indtroduceyourself();  it will introduce 2 times

    Employee employee2; //creating an object(employee2)
    emmployee2.name = "John";
    employee2.company = "dj company";
    employee2.age = 30;
    employee2.Indtroduceyourself();
  

}
