#include<iostream>
using namespace std;
int c=14;
int main(){
    // ************************Scope Resolution Operator********************
    // int a,b;
    // cout<<"Enter value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter value of b:"<<endl;
    // cin>>b;
    // int c=a+b;
    // cout<<"a+b ="<<c<<endl;
    // cout<<"Global c is:"<<::c; // :: is scope resolution operator

    // ************************float, Double datatypes********************
    // float d=34.4f;
    // long double e= 34.4l;
    // cout<<"The size of 34.4 is:"<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is:"<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is:"<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is:"<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is:"<<sizeof(34.4L)<<endl;

    // // ********************Reference Variable************************
    // int x=3;
    // int &y=x; //& is ampersent refernce operator
    // cout<<"Value of x is:"<<x<<endl;
    // cout<<"VALUE OF y is:"<<y<<endl;
    
    //************************Type Casting********************
    int a=2;
    float b=12.13;
    cout<<"The value of a is:"<<(float)a<<endl;
    cout<<"The value of a is:"<<float(a)<<endl;

    cout<<"The value of b is:"<<(int)b<<endl;
    cout<<"The value of b is:"<<int(b)<<endl;

    cout<<"The value of a is:"<<a<<endl;  
    cout<<"The value of b is:"<<b<<endl;

   return 0;
}