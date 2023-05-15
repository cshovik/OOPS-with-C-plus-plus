//#################################################################################################################### begin() end() #############################################################################################################################
#include<iostream>
#include<array>
using namespace std;

int main()
{
  array<int,5> ar= {2, 16, 76, 76,12};

  cout<< "my array contains :";
  //array<int,5> :: iterator it or auto it
  for(array<int,5> :: iterator it = ar.begin(); it!= ar.end(); ++it){
    cout<< ' '<< *it;
   
  }
   cout<<'\n';
   return 0;
}

// output- 2 16 76 76 12

//#################################################################################################################### at() get() operator[] ###########################################################################################################################
1. at() :- This function is used to access the elements of array. 
2. get() :- This function is also used to access the elements of array. This function is not the member of array class but overloaded function from class tuple. 
3. operator[] :- This is similar to C-style arrays. This method is also used to access array elements.


// C++ code to demonstrate working of array,
// at() and get()
#include<iostream>
#include<array> // for array, at()
#include<tuple> // for get()
using namespace std;
int main()
{
    // Initializing the array elements
    array<int,6> ar = {1, 2, 3, 4, 5, 6};
 
    // Printing array elements using at()
    cout << "The array elements are (using at()) : ";
    for ( int i=0; i<6; i++)
    cout << ar.at(i) << " ";
    cout << endl;
 
    // Printing array elements using get()
    cout << "The array elements are (using get()) : ";
    cout << get<0>(ar) << " " << get<1>(ar) << " ";
    cout << get<2>(ar) << " " << get<3>(ar) << " ";
    cout << get<4>(ar) << " " << get<5>(ar) << " ";
    cout << endl;
 
    // Printing array elements using operator[]
    cout << "The array elements are (using operator[]) : ";
    for ( int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
 
    return 0;
 
}

/*The array elements are (using at()) : 1 2 3 4 5 6 
The array elements are (using get()) : 1 2 3 4 5 6 
The array elements are (using operator[]) : 1 2 3 4 5 6 */

##################################################################################################################################### front() back() #######################################################################################################
4. front() :- This returns reference to  the first element of array. 
5. back() :- This returns reference to the last element of array.


// C++ code to demonstrate working of
// front() and back()
#include<iostream>
#include<array> // including header file to use stl array and there function
using namespace std;
int main()
{
    // Initializing the array elements
    array<int,6> ar = {1, 2, 3, 4, 5, 6};
 
    // Printing first element of array
    cout << "First element of array is : ";
    int &a=ar.front();
    cout <<a<< endl;
 
    // Printing last element of array
    cout << "Last element of array is : ";
    int &b=ar.back();
    cout << b << endl;
      
    //change first and last element of array using these references
    a=10; //now 1 change to 10
    b=60; //now 6 change to 60
     
    //lets print array now
    cout<<"array after updating first and last element \n";
    /*for (auto x: ar)
    {
      cout<<x<<" ";
    }  or */
    for(auto it =ar.begin(); it!= ar.end(); ++it){
    cout<<' '<<*it;
  }
    
    cout<<endl;
     
 
    return 0;
 
}
/*output-
First element of array is : 1
Last element of array is : 6
array after updating first and last element 
10 2 3 4 5 60 
*/
//####################################################################################################################################### size() max size() #########################################################################################################
6. size() :- It returns the number of elements in array. This is a property that C-style arrays lack. 
7. max_size() :- It returns the maximum number of elements array can hold i.e, the size with which array is declared. The size() and max_size() return the same value.


// C++ code to demonstrate working of
// size() and max_size()
#include<iostream>
#include<array> // for size() and max_size()
using namespace std;
int main()
{
    // Initializing the array elements
    array<int,6> ar = {1, 2, 3, 4, 5, 6};
 
    // Printing number of array elements
    cout << "The number of array elements is : ";
    cout << ar.size() << endl;
 
    // Printing maximum elements array can hold
    cout << "Maximum elements array can hold is : ";
    cout << ar.max_size() << endl;
 
    return 0;
 
}
/*putput-
The number of array elements is : 6
Maximum elements array can hold is : 6
*/

//######################################################################################################################################## swap() #############################################################################################################
8. swap() :- The swap() swaps all elements of one array with other.

// C++ code to demonstrate working of swap()
#include<iostream>
#include<array> // for swap() and array
using namespace std;
int main()
{
 
    // Initializing 1st array
    array<int,6> ar = {1, 2, 3, 4, 5, 6};
 
    // Initializing 2nd array
    array<int,6> ar1 = {7, 8, 9, 10, 11, 12};
 
    // Printing 1st and 2nd array before swapping
    cout << "The first array elements before swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
    cout << "The second array elements before swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar1[i] << " ";
    cout << endl;
 
    // Swapping ar1 values with ar
    ar.swap(ar1);
 
    // Printing 1st and 2nd array after swapping
    cout << "The first array elements after swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
    cout << "The second array elements after swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar1[i] << " ";
    cout << endl;
 
    return 0;
 
}

/*output-
The first array elements before swapping are : 1 2 3 4 5 6 
The second array elements before swapping are : 7 8 9 10 11 12 
The first array elements after swapping are : 7 8 9 10 11 12 
The second array elements after swapping are : 1 2 3 4 5 6 
*/

//########################################################################################################################################## fill() empty() ########################################################################################################
 9. empty() :- This function returns true when the array size is zero else returns false. 
10. fill() :- This function is used to fill the entire array with a particular value.


// C++ code to demonstrate working of empty()
// and fill()
#include<iostream>
#include<array> // for fill() and empty()
using namespace std;
int main()
{
 
    // Declaring 1st array
    array<int,6> ar;
 
    // Declaring 2nd array
    array<int,0> ar1;
 
    // Checking size of array if it is empty
    ar1.empty()? cout << "Array empty":
        cout << "Array not empty";
    cout << endl;
 
    // Filling array with 0
    ar.fill(0);
 
    // Displaying array after filling
    cout << "Array after filling operation is : ";
    for ( int i=0; i<6; i++)
        cout << ar[i] << " ";
 
    return 0;
 
}

/*output-
Array empty
Array after filling operation is : 0 0 0 0 0 0 */
