#include<iostream>
using namespace std;
//Note: There is NO tut29b.cpp

/********************Parameterized Constructor**********************/

class Complex{
    int a, b;

    public:
    /*
        1)Creating a Constructor
        2)Constructor is a special member function with the same name as of the class.
        3)It is used to initialize the objects of its class
        4)It is automatically invoked whenever an object is created
    */
        Complex(int, int); //Constructor Declaration
              
        void setNum(int x, int y){
            a = x;
            b = y;
        }

        void printNum(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }

};

//This is a "Parameterized" constructor as it takes Parameters
Complex:: Complex(int x = 10, int y = 20){ 
    a = x;
    b = y;
    cout<<"Parameterized Constructor Invoked!"<<endl;
}

int main(){
    Complex c1;         //Implicit call To Constructor
    Complex c2(5, 7);   //Explicit call To Constructor
    /*
    Practically speaking, whenever you use the parenthesis syntax () to create an object you explicitly call a 
    constructor, otherwise it's an implicit constructor call (so to say, being done behind the scenes by the compiler)
    */
    c1.printNum();
    c2.printNum();

    /*
        1)The below line is a bit complicated (and somewhat stupid). Here, first a parameterized constructor is explicitly called to make a temporary 
        object of "Complex" class (the RHS part of = ) and this temporary object is then copied to "c3" by an implicit call to "copy constructor" of 
        class "Complex". This "copy constructor" is supplied by the compiler as we did not make one. (see "tut34_CopyConstructor.cpp" for copy constructors).

        2)This method of initializing the object is unnecessary and rather it should have been like this :
                " Complex c3(8, 3); "
    */
    Complex c3 = Complex(8, 3);
    c3.printNum();
    
    return 0;
}

/* 
Characteristics of Constructors
 1)It should be declared in the public section of the class
 2)They are automatically invoked whenever the object is created
 3)They cannot return values and do not have return types
 4)It can have default arguments
 5)We cannot refer to their address

*/



// /********************Default Constructor**********************/
// #include<iostream>
// using namespace std;

// class Complex{
//     int a, b;

//     public:
//     /*
//         1)Creating a Constructor
//         2)Constructor is a special member function with the same name as of the class.
//         3)It is used to initialize the objects of its class
//         4)It is automatically invoked whenever an object is created
//     */
//         Complex(void); //Constructor Declaration
              
//         void setNum(int x, int y){
//             a = x;
//             b = y;
//         }

//         void printNum(void){
//             cout<<a<<" + "<<b<<"i"<<endl;
//         }

// };

// //This is a "Default" constructor as it takes No Parameters
// Complex:: Complex(void){ 
//     a = 10;
//     b = 20;
//     cout<<"Default Constructor Invoked!"<<endl;
// }

// int main(){
//     Complex c1;
//     Complex c2;
//     c1.printNum();
//     c2.printNum();
//     return 0;
// }
