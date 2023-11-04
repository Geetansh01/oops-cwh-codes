#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How r U?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kaise Ho app?"<<endl;
        }
};

class Derived: public Base1, public Base2 {
    public:
        /*
        Resolving Ambiguity 1 : greet() from class Base1 {and NOT greet() from class Base2} will be called when greet() is
        used in class Derived
        */
        void greet(){
            Base1::greet();
        }
};


class B{
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};

class D: public B{
    public:
        //Ambiguity 2  Resolution: D's own say() will override Base class B's inherited say()
        void say(){
            cout<<"Hello Marvel Cinematic Universe"<<endl;
        }
};

int main(){
    // //Ambiguity 1
    // Base1 o1;
    // o1.greet();

    // Base2 o2;
    // o2.greet();

    // Derived d1;
    // d1.greet();
    // return 0;

    

    //Ambiguity 2
    B b1;
    b1.say();

    D d2;
    d2.say();
}