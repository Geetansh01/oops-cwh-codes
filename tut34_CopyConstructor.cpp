#include<iostream>
using namespace std;

/*****************Explicit making of "Copy Constructor" by programmer************************/
class Number{

    int a;

    public:
        //default Constructor 
        Number(){ 
            a = 0;
        }

        Number(int x){
            a = x;
        }

        /*1)This is "Copy Constructor"
          2)It will copy one object to another (Note that a constructor is used only at the time of making an object)
          3)If a copy constructor for a class is not made explicitly by the programmer, the COMPILER SUPPLIES ITS OWN 
            "COPY CONSTRUCTOR". This is demonstrated by class "NUMBER2" below....
        */
        Number (Number& num){
            cout<<"Copy constructor Invoked!!!!"<<endl;
            a = num.a;
        }

        void show(){
            cout<<"No is:"<<a<<endl;
        }
};

/*****************Explicitly NOT making of "Copy Constructor" by programmer************************/
class Number2{
    int a;
    public:
        //default Constructor 
        Number2(){ 
            a = 0;
        }

        Number2(int x){
            a = x;
        }

        //Note the absence of "Copy Constructor"

        void show(){
            cout<<"No is:"<<a<<endl;
        }
};

int main(){
    Number n1, n2, n3(45);
    n1.show();
    n2.show();
    n3.show();

    Number n4(n3); //copy constructor invoked
    n4.show();

    Number n5;
    n5 = n3; 
    /*
    1)Copy constructor not invoked. Constructor is used while making an object but n5 was already made by "default constructor".
    2)This is Simple assignment
    */
    n5.show();

    Number n8 = n3; //copy constructor invoked (bcz n8 is being initialised here only...)
    n8.show();

    Number2 n6(37);
    Number2 n7(n6); //Compiler's "Copy Constructor" Invoked!!!
    n7.show();

    return 0;
}