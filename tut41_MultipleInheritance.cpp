#include<iostream>
using namespace std;

/*
Syntax for Multiple Inheritance (NOT Multi-level Inheritance)
[Below syntax is for for 3 base classes, similarly u can have any number of base classes]
class <Derived-class-name> : <visibility-mode> <Base-class1>, <visibility-mode> <Base-class2>, <visibility-mode> <Base-class3>  
{
    Class body of derived class
};
*/  

class Base1{
    protected:
        int base1int;
    
    public:
        void setbase1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    
    public:
        void setbase2int(int a){
            base2int = a;
        }
};

class Base3{
    protected:
        int base3int;
    
    public:
        void setbase3int(int a){
            base3int = a;
        }
};

class Derived : public Base1, public Base2, public Base3{
public:
    void show(){
        cout<<"Base1int:"<<base1int<<endl
            <<"Base2int:"<<base2int<<endl
            <<"Base3int:"<<base3int<<endl
            <<"Sum is :"<<base1int + base2int + base3int<<endl;
    }
};

/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected
Member functions:
    set_baselint() --> public 
    set_base2int() --> public 
    show() --> public

*/

int main(){
    Derived d1;
    d1.setbase1int(12);
    d1.setbase2int(13);
    d1.setbase3int(12);
    d1.show();
    return 0;
}