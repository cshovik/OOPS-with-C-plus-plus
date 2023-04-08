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
