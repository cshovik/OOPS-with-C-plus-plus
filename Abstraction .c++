#include <bits/stdc++.h>
#include <iostream>
#include<cmath>
using std::string;
//Objects in an OOP language provide an abstraction that hides the internal implementation details

class AbstractEmployee {
    virtual void AskforPromotion()=0;//abstract function

};


class Employee:AbstractEmployee {
private:
    string Name; 
    string Company; 
    int Age;
public: 
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

int main(){
    
  
    Employee employee1 = Employee("Shovik", "Tt-Codestudio",25); 
    Employee employee2 = Employee("John","dj company",35);

    employee1.AskforPromotion();
    employee2.AskforPromotion();

  
  

}
