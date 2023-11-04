/*****************************************************Implementaton B : Virtual Functions***********************************/
#include<iostream>
using namespace std;

class Emp{
    public:
        virtual void raise_sal(void){
            cout<<"Emp raise_sal"<<endl;
        }

        void promote(void){
            cout<<"Emp promote"<<endl;
        }
};

class Engineer : public Emp{
    public:
        virtual void raise_sal(void){
            cout<<"Engineer raise_sal"<<endl;
        }
};

class Manager : public Emp{
};

int main(){
    Emp* ptr;
    Emp* ptr2 ;
    Engineer Geetansh;
    Manager Kuldeep;

    ptr = &Geetansh;
    ptr2 = &Kuldeep;

    ptr->raise_sal();
    ptr2->raise_sal();
    return 0;
}