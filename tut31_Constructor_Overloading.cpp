#include<iostream>
using namespace std;

/**********************Constructor Overloading*************/
//Just Like Function Overloading in C++

class Complex{
    int a, b;

    public:
        //Default Constructor
        //(1)
        Complex(void){
            a = 0;
            b = 0;
        }

        //Parameterized Constructors
        //(2)
        Complex(int x, int y){
            a = x;
            b = y;
        }

        //(3)
        Complex(int x){
            a = x;
            b = 0;
        }

        void printNum(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }

};

int main(){
    Complex c1(1, 3);
    c1.printNum();

    Complex c2(3);
    c2.printNum();

    Complex c3;
    c3.printNum();
    return 0;
}