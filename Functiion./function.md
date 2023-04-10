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


############################################################### Virtual Function #################################################################################

A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function. 

1. Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
2. They are mainly used to achieve Runtime polymorphism
3. Functions are declared with a virtual keyword in base class.
4. The resolving of function call is done at runtime.
5. Rules for Virtual Functions

1. Virtual functions cannot be static.
2. A virtual function can be a friend function of another class.
3. Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
4. The prototype of virtual functions should be the same in the base as well as derived class.
5. They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual 6. function), in that case, the base class version of the function is used.
6. A class may have virtual destructor but it cannot have a virtual constructor.
 
Limitations of Virtual Functions:
1. Slower: The function call takes slightly longer due to the virtual mechanism and makes it more difficult for the compiler to optimize because it does not know exactly which function is going to be called at compile time.
2. Difficult to Debug: In a complex system, virtual functions can make it a little more difficult to figure out where a function is being called from.Compile time (early binding) VS runtime (late binding) behavior of Virtual Functions


###################################################################### Virual function & abstract class ###########################################################
Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation. Such a class is called abstract class.
For example, let Shape be a base class. We cannot provide implementation of function draw() in Shape, but we know every derived class must have implementation of draw(). Similarly an Animal class doesn’t have implementation of move() (assuming that all animals move), but all animals must know how to move. We cannot create objects of abstract classes.
A pure virtual function (or abstract function) in C++ is a virtual function for which we can have implementation, But we must override that function in the derived class.

 pure virtual function force derived class to override unless it will show runtime error but in virtual function it doesn't force to override, on that case 
if we override ,it will execute in runtime( display derived ) & if we not it will execute in compiletime(display base)  
