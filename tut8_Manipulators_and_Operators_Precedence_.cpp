#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //**************constant keyword***************
    // int a=1;
    // cout<<"Value of a was:"<<a<<endl;
    // a=5;
    // // cout<<"Value of a is:"<<a<<endl;
    // const int a=1; //Now, u can't change value of a
    // cout<<"Value of a was:"<<a<<endl;
    // //a=2; //<---- This will give error

    //*****************Manipulators in C++********************
    // int a=3,b=78,c=999;
    // cout<<"Printing with setw"<<setw(5)<<a<<endl;
    // cout<<"Printing with setw"<<setw(5)<<b<<endl;
    // cout<<"Printing with setw"<<setw(5)<<c<<endl;

    // cout<<"Printing without setw:"<<a<<endl;
    // cout<<"Printing without setw:"<<b<<endl;
    // cout<<"Printing without setw:"<<c<<endl;

    //Operator Precedence
    int a=3, b=4;
    int c=a*b+12-2+14;    //Refer to cppreference.com for tabe of operator precedence
    cout<<c;

    return 0;
}