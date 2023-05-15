/*
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) 
*/

#include<iostream>
#include <stack>
using namespace std;

int main(){
  stack<int> st;
 
 //mum, 50 40 30 20 10
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);//top

  int num;
  cin >> num;
  st.push(num);
  
  st.pop();
  st.pop();
  st.pop();

//until stack will empty , it will print from top
  while(!st.empty()) {
    cout<< st.top() <<" ";
    st.pop(); //calling the pop function;
  }

}

//output(after pop from top) - 30 20 10 

//######################################################################################  emplace ###########################################################################################################
emplace	- Construct and insert element (public member function)

// stack::emplace
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
#include <string>         // std::string, std::getline(string)
using namespace std;

int main ()
{
  stack<string> mystack;

  mystack.emplace ("First sentence");
  mystack.emplace ("Second sentence");

  cout << "mystack contains:\n";
  while (!mystack.empty())
  {
    cout << mystack.top() << '\n';
    mystack.pop();
  }

  return 0;
}

/*output-
mystack contains:
Second sentence
First sentence
*/

//##################################################################################################  swap #######################################################################################################
// stack::swap
#include <iostream>       // std::cout
#include <stack>          // std::stack
using namespace std;

int main ()
{
  stack<int> foo,bar;
  foo.push (10); foo.push(20); foo.push(30);
  bar.push (111); bar.push(222);

  foo.swap(bar);

  cout << "size of foo: " << foo.size() << '\n';
  cout << "size of bar: " << bar.size() << '\n';

  return 0;
}
/*
size of foo: 2
size of bar: 3
*/
