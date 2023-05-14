//#########################################################################################################  begin() end() ####################################################################################################
//begin() – Returns an iterator pointing to the first element in the vector
//end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector

//iterator almost work like a pointer
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> v;
  for (int i=1; i<=5; i++) 
  {
    v.push_back(i);
  }
  cout << "myvector contains:";
  //for (vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it) or
  for (auto it = v.begin() ; it != v.end(); ++it)
    cout << ' ' << *it;
     cout << '\n';
  
  return 0;
}
//output- myvector contains: 1 2 3 4 5


//????????????????????????????????????????????????????????????????????????????????????????????????????? every concept ##############################################################################################
/*
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

vector<int>::iterator it = myvector.begin() ; or auto it = v.begin() ;
*/


// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    vector<int> g1;
 
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
 
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
 
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";
 
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
 
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";
 
    return 0;
}

/*
output-
Output of begin and end: 1 2 3 4 5 
Output of cbegin and cend: 1 2 3 4 5 
Output of rbegin and rend: 5 4 3 2 1 
Output of crbegin and crend : 5 4 3 2 1
*/
