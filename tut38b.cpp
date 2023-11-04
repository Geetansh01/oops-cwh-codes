#include<iostream>
using namespace std;

class Base{
    int data1; //private so not inheritable by derived class

    public:
        int data2;
        void setdata();
        int getData1();
        int getData2();
};

void Base:: setdata(void){
    data1 = 10;
    data2 = 20;
}

int Base:: getData1(void){
    return data1;
}

int Base:: getData2(void){
    return data2;
}

//Visibility Mode: "private"
//See "tut38a.cpp" for public
class Derived : private Base{
    int data3;

    public:
        void process();
        void display();
};

void Derived:: process(){
    setdata();
    data3 = data2 * getData1();
}

void Derived:: display(){
    cout<<"Data1 :"<<getData1()<<endl;
    cout<<"Data1 :"<<data2<<endl;
    cout<<"Data1 :"<<data3<<endl;
}

int main(){
    Derived der;
    der.process();
    der.display();

    return 0;
}