#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(void){
            cout<<"var_base :"<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        int var_derived;
        void display(void){
            cout<<"var_derived :"<<var_derived<<endl;
            cout<<"var_base :"<<var_base<<endl;
        }
};

int main(){
    BaseClass* baseclass_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    baseclass_pointer = &obj_derived;  //Pointing base class pointer to object of derived class

    baseclass_pointer->var_base = 34;
    // baseclass_pointer->var_derived = 56; //Will throw error 

    //Late Binding: Even though pointer points to object of derived class but it is the pointer of base class 
    //object and hence display() of base class will run
    baseclass_pointer->display();

    DerivedClass* derivedclass_pointer;
    derivedclass_pointer = &obj_derived;
    derivedclass_pointer->var_base = 1000;
    derivedclass_pointer->var_derived = 300;
    derivedclass_pointer->display(); //here the binding (of "display()") is with display() of DerivedClass

    /*
    Note:
    1) The above bindings (with "baseclass_pointer->display();" & " derivedclass_pointer->display();")
       are both examples of late binding.
    2)Even though a human looking at the code can easily tell which display() is run when still the binding (assignment of "function names" to actual "function addresses" which are to be run )
    by the compiler is done at the run time.

    */

    return 0;
}