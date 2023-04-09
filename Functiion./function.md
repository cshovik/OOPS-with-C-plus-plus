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
1. Not in the scope of class
2. since it is nit in the scope of class, it cannot be called from the object of that classs ex- c1.sumcomplex()== invalid
3. can be invoked without the help of any object
4. usually contains the objects as arguments as parameter
5. can be declared inside public or private section of the class
6. It cannot access the member directly by their names and need object_name.number_name to accesss any member.
