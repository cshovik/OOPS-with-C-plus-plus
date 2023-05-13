// vector is dynamic array , in array we hav to define the size, but in vector not.if size of vector reached its max capicity, it will increaze its capacity(double its previous size)
//then inserting the previous data 
// vector initioal size 4
#include<iostream>
#include<vector>
using namespace std;

int main() {
    //vector<int> *vp = new vector<int>{}; - dynamic allocation(we can manualy delete it)
    vector<int> v; // static allocatiion - it automatically delete
    v.push_back(10);  // push back helps to create size if size reach to its ends
    v.push_back(20);
    v.push_back(30);

    v[1] = 100; // change the value , only one time we have to write pushback 
    
    v[3] =1002; // it will not count  vector size is 4 & due to not use pushback it will not create space
    v[4] =1234; // it will not count  vector size is 4 & due to not use pushback it will not create space

    v.push_back(23);
    v.push_back(234);
    
    // square bracket only use for get and update & not insert

    cout<< v[0] << '\n'; // output- 10
    cout<< v[1] << '\n';// output- 100
    cout<< v[2] << '\n';// output- 30 
    cout<< v[3] << '\n';// output- 23-wrong output due to not use pushback its boundary upto 3
    cout<< v[4] << '\n';// output- wrong output
    cout<< v[5] << '\n';// output- wrong output
    cout<< v[6] << '\n';// output- wrong output

    cout<< "size: " << v.size() << '\n';

    cout << v.at(2) <<'\n';  //size: 5
    cout << v.at(6) <<'\n';  // give wrong size will show out of range
                            // so at will give error if it is out of range 
      
}

//###################################################################################################################################################################################################################
#include<iostream>
#include<vector>
using namespace std;

int main() {
    //vector<int> *vp = new vector<int>{}; - dynamic allocation(we can manualy delete it)
    vector<int> v; // static allocatiion - it automatically delete
    v.push_back(10);  // push back helps to create size if size reach to its ends
    v.push_back(20);
    v.push_back(30);

    v[1] = 100; // change the value , only one time we have to write pushback 
    
   // v[3] =1002; // it will not count  vector size is 4 & due to not use pushback it will not create space
  //  v[4] =1234; // it will not count  vector size is 4 & due to not use pushback it will not create space

    v.push_back(23);
    v.push_back(234);

    v.pop_back();  //to delete last element 234 will delete
    
    // square bracket only use for get and update & not insert
    for (int i =0; i< v.size(); i++){
        cout<< v[i]<<'\n';
    }
   
}
/*
output- 10
100
30
23
*/

//############################################################################## to know size capacity ##############################################################################################################

#include<iostream>
#include<vector>
using namespace std;

int main() {
    
    vector<int> v; // static allocatiion - it automatically delete

    for(int i=0; i<100;i++) {
        cout<< "capacity"<< v.capacity()<<'\n';
        cout<<"size" << v.size() << '\n';
        v.push_back(i+1);
    }
    v.push_back(10);  // push back helps to create size if size reach to its ends
    v.push_back(20);
    v.push_back(30);
  

    v.push_back(23);
    v.push_back(234);

    v.pop_back();  //to delete last element 234 will delete
    
}

/*
cap- 0
size 0
cap- 1
size-1
cap- 2
size-2
cap- 4( increase cpacity twice)
size-3
cap-4
size-4
cap-8 (when size reached max cap, capcity increased twice)
size-5
....
size-8
cap-16
size 9..16
*/
