#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/


class Test{
    int a; 
    int b;

    public:
        // //Constructor Method 1 : Normal initialization of a, b
        // Test(int i, int j)
        // {
        //     // a = i;
        //     // b = a + j;

        //     //b = j;
        //     //a = i + b;

        //     cout<<"Test Constructor called"<<endl;
        //     cout<<"a:"<<a<<endl;
        //     cout<<"b:"<<b<<endl;
        // };

        //Constructor Method 2 : Initialization list
        //Test(int i, int j) : a(i), b(j + a) //---> Works Fine
        // Test(int i, int j) : b(i), a(j + b)   //---> Shit Happens because a will be initialised 1st (as a is declared 1st then b above)
        Test(int i, int j) : b(j), a(i+ b)   //---> Shit Happens because a will be initialised 1st (as a is declared 1st then b above)
        {
            cout<<"Test Constructor called"<<endl;
            cout<<"a:"<<a<<endl;
            cout<<"b:"<<b<<endl;
        };
};

int main(){
    Test t1(4, 6);

    return 0;
}