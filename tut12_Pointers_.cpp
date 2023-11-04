#include<iostream>
using namespace std;

int main(){
    //What is a pointer----> Data Type which holds the adress of other data types
    int a=3;
    int *b = &a;

    // & ----> (Address of) operator
    cout<<"Address of a in memory is:"<<b<<endl;
    cout<<"Address of a in memory is:"<<&a<<endl;

    //* ----> (Value at) operator (called Dereference operator)
    cout<<"Value stored at pointer b is:"<<*b<<endl;

    //Pointer to pointer
    int **c = &b;

    cout<<"The address of b is:"<<c<<endl;
    cout<<"The address of b is:"<<&b<<endl;
    cout<<"The value_at(address stored in pointer c) is:"<<*c<<endl;
    cout<<"The value_at(value_at(address stored in c)) is:"<<**c<<endl;

    return 0;
}