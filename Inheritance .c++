//Two derived class Teacher and developer is inhereted from class Employee by using (public Employee) in respective class like- class Developer:public Employee.
//which allows to access(inherit) all methods and member of employee in the respective classes, like here we access one of the method of Employee(AskforPromotion)

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
};

//Teacher- Child
//Employee- Parant  Teacher class inherit the Employee class
//To access Employee method public Employee have to use 
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
};
//developer-child class
//employee - parant class
//Askmypromotion is acceseble by inheriting public because without public it is default private which not allow to access Employee property or method
class Developer:public Employee {
public:
    string FavProgrammingLanguage; 
    Developer(string name, string company, int age, string favProgrammingLanguage):Employee(name,company,age)
    {
         FavProgrammingLanguage = favProgrammingLanguage;

    }
    void FixBug() {
      //std::cout <<getName()<<" Fixed bug using"<< FavProgrammingLanguage<<'\n';

      //we put name in protected thatswhy name is acceseble, if it will under private than we have to use getName()
      std::cout <<Name<<" Fixed bug using"<< FavProgrammingLanguage<<'\n';

    }
};

int main(){
    
  
   /*Employee employee1 = Employee("Shovik", "Tt-Codestudio",25); 
    Employee employee2 = Employee("John","dj company",35);*/
    Developer d = Developer("Saldina","Y-Code",25," c++");
    d.FixBug();
    d.AskforPromotion();
    Teacher t = Teacher("Jack","SRM IST",35," History");
    t.PrepareLesson();
    t.AskforPromotion();//due to use public employee public method is acceseble.
    

 /*output-
 Saldina Fixed bug using c++
 Saldina sorry no promotion for you
 Jack is preparing History lesson
 Jack Studied in SRM IST
 Jack got promoted
 */ 
  

}
