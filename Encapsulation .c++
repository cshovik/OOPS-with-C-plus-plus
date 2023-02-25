#include <bits/stdc++.h>
#include <iostream>
#include<cmath>
using std::string;


class Employee {
private://if we don't write it it also ,in default it is considered as private
    string Name; 
    string Company;   //This is encapsulated means we cannot access it outside this class.
    int Age;
public: 
   
    void setName(string name){
      Name = name;//setter
    }
    //getter
    string getName(){
      return Name;        //we cannot access Name bcz it is hidden in private, so we can access name through method getName bcz getName method is in public
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
       Name = name;                                  //construction
       Company = company;
       Age = age;
    }
};

int main(){
    
  
    Employee employee1 = Employee("Shovik", "Tt-Codestudio",25); //Sending the parameter to Employee constructor
    employee1.Indtroduceyourself();
 

    Employee employee2 = Employee("John","dj company",30); //Sending the parameter to Employee constructor
    employee2.Indtroduceyourself();
    
    //used .setAge to access age hidden in private
    employee1.setAge(39); //if we input less than 18 , then it is ivalid , so it shows previous declared age which is 25
    //this .setAge(39) is written to input new age , if it is nit written then previous declared age will display
    std::cout<<employee1.getName()<< " is "<<employee1.getAge() << " years old"<<'\n';
  

}
/*output-
  Name Shovik
  company Tt-Codestudio
  Age 25
  Name John
  company dj company
  Age 30
  Shovik is 39 years old*/




//############################################################################################################################################################




// without using constructor

#include <bits/stdc++.h>
#include <iostream>
#include<cmath>
using std::string;


class Employee {
private://if we don't write it it also ,in default it is considered as private
    string Name; 
    string Company;   //This is encapsulated means we cannot access it outside this class.
    int Age;
public: 
   
    void setName(string name){
      Name = name;//setter
    }
    //getter
    string getName(){
      return Name;        //we cannot access Name bcz it is hidden in private, so we can access name through method getName bcz getName method is in public
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

};

int main(){
    
   Employee employee1;

    
    employee1.setName("Shantu");
    employee1.setCompany("Walmart");
    //used .setAge to access age hidden in private
    employee1.setAge(39);  
    std::cout<<employee1.getName()<< " is "<<employee1.getAge() << " years old "<<"and worked in "<<employee1.getCompany()<<'\n';
  

}

//output - Shantu is 39 years old and worked in Walmart
