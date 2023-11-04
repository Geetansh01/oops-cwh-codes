/*******************************Protected Mode***************************************/
#include<iostream>
using namespace std;

class Base{
    protected:
        int a;

    private:
        int b;
};

/*
	                Public Derivation      	Private Derivation    	Protected Derivation
Private members       Not Inherited          Not Inherited          Not Inherited              
Protected members      Protected               Private                Protected                    
Public members         Public	               Private                Protected    
*/

class Derived : protected Base{

};


int main(){
    Base b;
    Derived d;
    // cout<<b.a<<endl; //Will not work as "a" is protected in class Base.
    // cout<<d.a<<endl; //Will not work as "a" is protected in class Derived.
    return 0;
}