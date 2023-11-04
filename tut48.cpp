#include<iostream>
using namespace std;

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1{
    int data1;

    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 constructor called"<<endl;
        }

        void printData(void){
            cout<<"data1: "<<data1<<endl;
        }

};

class Base2{
    int data2;

    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 constructor called"<<endl;
        }

        void printData(void){
            cout<<"data2: "<<data2<<endl;
        }

};

class Derived: public Base1, public Base2{
    int derived1, derived2;

    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived constructor called"<<endl;
        }

        //Derived's printData() will override Base1 and Base2's printData()
        void printData(void){
            cout<<"derived1: "<<derived1<<endl;
            cout<<"derived2: "<<derived2<<endl;
        }
};

int main(){
    Derived Geetansh(1,2,3,4);
    Geetansh.printData();
}