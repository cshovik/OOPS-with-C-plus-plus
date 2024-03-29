#include<iostream>
using namespace std;

//class template
template <typename T> class Array {
private:
    T* ptr;
    int size;

public:
     Array( T arr[], int s);//constructor
     void print();  //function
};

template<typename T> Array<T>:: Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for(int i =0; i<size ;i++)
    ptr[i] = arr[i];
}

template <typename T> void Array<T> ::print()
{
    for (int i=0; i< size; i++)
         cout<< " " << *(ptr+i);
         cout<< '\n';
}

int main()
{
    int arr[5] = {1, 2, 3 , 4, 5};
    Array<int> a(arr,5); // a obj create & give value to parameter
    a.print();

    return 0;
}
