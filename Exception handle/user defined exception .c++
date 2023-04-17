//######################################################################## using class #############################################################################
#include <iostream>
using namespace std;
 
class demo {
};
 
int main()
{
    try {
        throw demo();
    }
 
    catch (demo d) {
        cout << "Caught exception of demo class \n";
    }
}

//output- Caught exception of demo class

//#################################################################  using 2 class ###################################################################################
#include <iostream>
using namespace std;
 
class demo1 {
};
 
class demo2 {
};
 
int main()
{
    for (int i = 1; i <= 2; i++) {
        try {
            if (i == 1)
                throw demo1();
 
            else if (i == 2)
                throw demo2();
        }
 
        catch (demo1 d1) {
            cout << "Caught exception of demo1 class \n";
        }
 
        catch (demo2 d2) {
            cout << "Caught exception of demo2 class \n";
        }
    }
}

/*output-
Caught exception of demo1 class
Caught exception of demo2 class
*/

//#########################################################################  using inheritance ###############################################################


#include <iostream>
using namespace std;
 
class demo1 {
};
 
class demo2 : public demo1 {
};
 
int main()
{
    for (int i = 1; i <= 2; i++) {
        try {
            if (i == 1)
                throw demo1();
 
            else if (i == 2)
                throw demo2();
        }
 
        catch (demo1 d1) {
            cout << "Caught exception of demo1 class \n";
        }
        catch (demo2 d2) {
            cout << "Caught exception of demo2 class \n";
        }
    }
}

/*output-
Caught exception of demo1 class
Caught exception of demo1 class
*/

//############################################################################## using constructor #############################################################


#include <iostream>
using namespace std;
 
class demo {
    int num;
 
public:
    demo(int x)
    {
        try {
 
            if (x == 0)
                // catch block would be called
                throw "Zero not allowed ";
 
            num = x;
            show();
        }
 
        catch (const char* exp) {
            cout << "Exception caught \n ";
            cout << exp << endl;
        }
    }
 
    void show()
    {
        cout << "Num = " << num << endl;
    }
};
 
int main()
{
 
    // constructor will be called
    demo(0);
    cout << "Again creating object \n";
    demo(1);
}

/*output-
Exception caught
 Zero not allowed
Again creating object
Num = 1
*/
