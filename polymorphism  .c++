//polymorphism describes the concept that you can access objects of different types through the same interface.
//Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us
//to perform a single action in different ways.
/*
Types
>overloading
      1) Constructor Overloading
      2) Method overloading
      3) Operator overloading
>Overriding
      1) Method overriding
*/

//overriding
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
    //t.Work();  base class Employee and deriveed in different class like developer, teacher. We can perform more fuction by deriving more classes from same base class
      
         //or

   //making base class Employee(as a ponter) to derive class two objects(developer, teacher)
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

//For example, think of a base class called Animal that has a method called animalSound(). Derived 
//classes of Animals could be Pigs, Cats, Dogs, Birds - And they also have their own implementation of an animal sound (the pig oinks, and the cat meows, etc.):

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

//############################################################### Constructor Overloading ########################################################################
//Overloaded construction essentially have same name(name of the class) and different number of arguments

#include <iostream>
#include<cmath>
using namespace std;

class construct
{
  public:
     float area;
     float volume;
     construct(){
      area = 0;
     }

     construct(int a , int b)
     {
      area = a*b;
  
     }

     construct(int a , int b , int c)
     {
      volume = a*b*c;
     }
     void display()
     {
      cout << area <<'\n';
      cout<< volume << '\n';
     }
};

int main()
{
  //object creation
  construct o;
  construct o2(2,3);
  construct o3(2,3,4);

  //calling function
  o.display();
  o2.display();
  o3.display();

  return 0;


}

//####################################################### Method overloading ###############################################################################
 // Creation of severel method with same name but differnt parameter

#include <iostream>
#include<cmath>
using namespace std;

class A
{
  public:
  //function with 1 int parameter
  void func(int x)
  {
    cout << "value of x " <<x <<'\n';
  }
  
  //fuction with same name but 1 double parameter
  void func(double x)
  {
      cout << "value of x " <<x <<'\n';
  }

  //function with same name and 2 int parameter
  void func(int x ,int y)
  {
    cout<< "value of x and y is "<< x <<y <<'\n';
  }

  int func(int x,int y,int z)
  {
    return (x+y+z);
  }
  
  
  void func1(int x)
  {
    cout<<x<<'\n';
  }
};

int main()
{
  A obj;
  //1st
  obj.func(12);
  //2nd
  obj.func(12.5334);
  //3rd
  obj.func(12,13);
  //4th
  cout<<obj.func(12,13,15) <<'\n';
  obj.func1(12);

  return 0;
}

//########################################################### uniary operator overloading #######################################################################
//when uniary operator overloaded through a member functioin , member function tke no explicit arguments , but if they are overloaded by friend function , 
//takes one arguments


#include <iostream>
#include<cmath>
using namespace std;

class number
{
  private:
    int x;
  public:
    number()
    {
      x=0;
    }
    //with parameter
    number(int n)
    {
      x = n;
    }

    void operator -()//operator overloaded function
    {
      x = -x;
    }
    void display()
    {
      cout << "x "<< x<<'\n';
    }
};
int main()
{
  number n(7);
  n.display();
  -n;
  n.display();
}

                                 //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// using scope of operator
#include <iostream>
#include<cmath>
using namespace std;

class number
{
  private:
    int x;
  public:
    number()
    {
      x=0;
    }
    //with parameter
    number(int n)
    {
      x = n;
    }
   void display();
   void operator -();
  
};
  void number::operator -()//operator overloaded function
    {
      x = -x;
    }
  void number :: display()
    {
      cout << "x "<< x<<'\n';
    }
int main()
{
  number n(7);
  n.display();
  -n;
  n.display();
}

//######################################################## Binary operator ####################################################################################


#include <iostream>
#include<cmath>
using namespace std;

class complex
{
  private:
    int real, imag;
  public:
    complex(int r=0, int i=0)
    {
      real = r;
      imag = i;
    }

    //this is automatically called when '+' is usedb with between two complex object
    //taking const thatswhy & used , if we don't take it , then we can avoid
    complex operator + (complex const &obj)
    {
      complex res;
      res.real = real + obj.real;
      res.imag = imag + obj.imag;
      return res;
    }
    void display()
    {
      cout<<real<< "+i "<< imag <<'\n';
    }
};

int main()
{
  complex c1(10,5);
  complex c2(2,4);
  complex c3 =  c1 +  c2;
  c3.display();
}
