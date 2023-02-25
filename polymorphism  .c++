//polymorphism describes the concept that you can access objects of different types through the same interface.
//Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.
#include <bits/stdc++.h>
#include <iostream>
#include<cmath>
using std::string;

class AbstractEmployee {
    virtual void AskforPromotion()=0;//abstract function

};


class Employee:AbstractEmployee {
private: 
   
    int Age;
protected:
    string Name;    //Now Name and Company is acceseble to other class but age not
    string Company; 
public: 
   
    void setName(string name){
      Name = name;//setter
    }
    //getter
    string getName(){
      return Name;        
    }

    void setCompany(string company){
    Company = company;
    }
    string getCompany(){
      return Company;
    }

    void setAge(int age){
         if(age >= 18)
         Age = age;
    }
    int getAge(){
      return Age;
    }
   
    void Indtroduceyourself(){
      std::cout<< "Name " <<Name <<'\n';
      std::cout<< "company " << Company << '\n';
      std::cout<< "Age " << Age << '\n';
    }

    Employee(string name,string company, int age){ 
       Name = name;
       Company = company;
       Age = age;
    }
    void AskforPromotion() {
      if(Age>30){
         std::cout<< Name<<" got promoted" <<'\n';
      }else{
        std::cout<<Name <<"  sorry no promotion for you"<<'\n';
      }


    }

    virtual void Work(){
      std::cout<<Name << " is checking email,task backlog,performing task..."<<'\n';
    }
};
 
class Teacher:public Employee {
public:
    string Subject;
    void PrepareLesson(){
        std::cout<<Name<<" is preparing"<<Subject <<" lesson" << '\n';
        std::cout<<Name<<" Studied in "<<Company<<'\n';
    }
    Teacher(string name, string company, int age, string subject):Employee(name,company,age)
    {
        Subject = subject;
    }
    void Work(){
      std::cout<<Name << " is teaching "<< Subject <<'\n';
    }
};
class Developer:public Employee {
public:
    string FavProgrammingLanguage; 
    Developer(string name, string company, int age, string favProgrammingLanguage):Employee(name,company,age)
    {
         FavProgrammingLanguage = favProgrammingLanguage;

    }
    void FixBug() {
   
      std::cout <<Name<<" Fixed bug using"<< FavProgrammingLanguage<<'\n';

    }
    void Work(){
      std::cout<<Name << " is writting "<< FavProgrammingLanguage << " code"<<'\n';
    }
    //If we comment out Developer class Void work then instead of Saldina is writing C++ code, it will show Saldina is checking email,task backlog,performing tasks...  . 
    //It means it display the function of parant(Employee) if no function assigned in child(developer)
};

int main(){
    //The most common use of polymorphism is when a parent class reference is used to refer to a child class object
  
    Developer d = Developer("Saldina","Y-Code",25," c++");
    Teacher t= Teacher("Jack","SRM IST",35,"History");

    //d.Work();
    //t.Work();
      
         //or

   //making base class Employee to derive class two objects(developer, teacher)
    Employee* e1 = &d;  // to run this ponter we have to change the function into virtual void Work function
    Employee* e2 = &t;

    e1->Work();  //-> this sign means when pointer is assigned
    e2->Work();



     /*
     output-
     Saldina is writing c++ code
     Jack is teaching History
     */  

  

}


//2nd example

// Base class
class Animal {
  public:
    void animalSound() {
      std::cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      std::cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      std::cout << "The dog says: bow wow \n";
    }
};
