/*
***************************************Virtual Functions***********************************************
Our Objective:
    1) In " tut55_PointerToDerivedClass.cpp "; we saw that a pointer of BaseClass type but which points to the 
    object of DerivedClass will run the " display() " function of BaseClass even though it points to the object 
    of DerivedClass.
    
    2) Now, we want that same situation but we want the pointer to run the " display() " function of DerivedClass

    3)This we will achieve by "Virtual functions"
*/

#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base = 1;

        //virtual function : this "virtual" keyword i added below tells the compiler that if a pointer of BaseClass points to the object of DerivedClass tries to run the 
        //" dispay() " function then run the " display() " of that DerivedCLass to whose object the pointer is pointing to rather than the " display() " of BaseClass. 
        virtual void display(void){
            cout<<"var_base :"<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        int var_derived = 2;
        void display(void){
            cout<<"var_derived :"<<var_derived<<endl;
            cout<<"var_base :"<<var_base<<endl;
        }
};

int main(){
    BaseClass* baseclass_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    baseclass_pointer = &obj_derived;

    baseclass_pointer -> display();

    return 0;
}