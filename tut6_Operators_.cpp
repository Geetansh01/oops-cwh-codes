//There are two types of header files:
//1) System header files: It comes with compiler
#include<iostream>
//2)User defined header files: Written by programmer
//#include "this.h" -->This will give error if "this.h" is not present in the current directory

using namespace std;

int main(){
    int a=4,b=5;
    //Arithmetic Operators in C++
    cout<<"Value of a+b is:"<<a+b<<endl;
    cout<<"Value of a-b is:"<<a-b<<endl;
    cout<<"Value of a*b is:"<<a*b<<endl;
    cout<<"Value of a/b is:"<<a/b<<endl;
    cout<<"Value of a%b is:"<<a%b<<endl;
    cout<<"Value of a++ is:"<<a++<<endl;
    cout<<"Value of a-- is:"<<a--<<endl;
    cout<<"Value of ++a is:"<<++a<<endl;
    cout<<"Value of --a is:"<<--a<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl; 

    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;
    return 0;
}
