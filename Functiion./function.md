################################################################ Inline function #####################################################################################

Inline function- it is like normal function just use inline before function
In inline function- compiler replace the function call with the function definition code and compile the entire code. This process is called expansion. 

Syntax:

inline return-type function-name(parameters)
{
    // function code
}  

Inline not used in this case:
1) If a function contains a loop. (for, while and do-while) 
2) If a function contains static variables. 
3) If a function is recursive. 
4) If a function return type is other than void, and the return statement doesn’t exist in a function body. 
5) If a function contains a switch or goto statement. 


################################################################### friend function ##################################################################################

A friend class can access private and protected members of other classes in which it is declared as a friend. It is sometimes useful to allow a particular class to access private and protected members of other classes. For example, a LinkedList class may be allowed to access private members of Node.

Properties:
1. A friend function is a non-member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class. By declaring a function as a friend, all the access permissions are given to the function.
2. The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition or call.
3. since it is nit in the scope of class, it cannot be called from the object of that classs ex- c1.sumcomplex()== invalid
4. can be invoked without the help of any object
5. usually contains the objects as arguments as parameter
6. A friend function can be declared in any section of the class i.e. public or private or protected.
7. It cannot access the member directly by their names and need object_name.number_name to accesss any member.

Advantages of Friend Functions
1. A friend function is able to access members without the need of inheriting the class.
2. The friend function acts as a bridge between two classes by accessing their private data.
3. It can be used to increase the versatility of overloaded operators.
4. It can be declared either in the public or private or protected part of the class.

Disadvantages of Friend Functions
1. Friend functions have access to private members of a class from outside the class which violates the law of data hiding.
2. Friend functions cannot do any run-time polymorphism in their members.
