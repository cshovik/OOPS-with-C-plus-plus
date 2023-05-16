//syntax- input_iterator std::find(input_iterator first, input_iterator last, const T& value);

#include<iostream>   //std::cout
#include<algorithm>  //std:: find
#include<vector>     //std:: vector
using namespace std;

int main() {
  // using std::find with array and pointer:

  int myints[] ={10, 20 , 30, 40};
  int *p;

  p= find(myints, myints+4, 30);

  if(p!= myints+4)
    cout<< "Elements found in myints: " << *p <<'\n';
  else
    cout<< "Elements not found in myints: "<<'\n';


// using std::find with vector and iterator:
vector<int> myvector (myints, myints+4);
vector<int>:: iterator it;

it= find(myvector.begin(), myvector.end(), 30);
if(it != myvector.end())
  cout<<"Element found in myvector: "<< *it<<'\n';
else
  cout <<"Elementnot  found in myvector: \n";

  return 0;
}

/*
Element found in myints: 30
Element found in myvector: 30
*/
