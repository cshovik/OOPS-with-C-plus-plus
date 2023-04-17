//Exception Handling
#include<iostream>
#include<string>
using namespace std;

class Printer{
    string  _name;
    int availablepaper;
public:
    Printer(string name, int paper) {
         _name = name;
         availablepaper = paper;
    }

    void Print(string txtDoc){
        int requirePaper = txtDoc.length()/10;  //40/10=4 - each paper can take 10 character

        //throw an exception
        if (requirePaper > availablepaper)
            throw "No paper";//this will handle by const char

        cout << "printing....." <<txtDoc<<'\n';
        availablepaper -= requirePaper;
    }

};

int main() {
    Printer myprinter("Hp Deskjet 1234", 10);
    try{
          myprinter.Print("Hello , my nameis Saldina. I am a Software Engineer.");
          myprinter.Print("Hello , my nameis Saldina. I am a Software Engineer.");
          myprinter.Print("Hello , my nameis Saldina. I am a Software Engineer.");
          myprinter.Print("Hello , my nameis Saldina. I am a Software Engineer.");
   
    }
    catch(const char * txtException) {
        cout<< "Exception: " << txtException <<'\n';  //if we thow char exception than this catch block handle it
    }

    catch(int exCode) {
        cout << "Exception: "<< exCode <<'\n';  //if we thow int exception than this catch block handle it
    }
    // we cannot write default handler at first, we have to write the specific handler(const char,int) at first(unless default handler shows error)
    // then write the default handler at last if the specific handler cannot handle then it goes to default handler 
    catch(...) {
        cout<< "Exception happened" << '\n'; // this is default handler which can handle ant type of exception but to execute it we have to commentout other handler
    }



  

   return 0;

}

//#########################################################################################################################################################
//ex-2
#include<iostream>
using namespace std;

int main(){
    int a , b;
    cin >> a>>b;
    try{
        if(b!=a)
        {
            float div = (float)a/b;
            if (div<0)
            throw 'e';
            cout<<div;
        }else{
            throw b;
        }
    }

    catch(int i){
        cout<<" Exception caught";
    }
    catch(float i){
        cout<<"Exception caught: Division by zero";
    }
    catch(char st){
        cout<<" exception cauight: division is less than 1";
    }
    catch(...){
        cout<< "other exception caught";
    }

}
