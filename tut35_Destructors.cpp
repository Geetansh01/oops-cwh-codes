#include <iostream>
using namespace std;

int count = 0;

class Number{
  public:
    Number(){
        count++;
        cout<<"Constructor Called!!! for object"<<count<<endl;
    }
    
    /*
        1)This is a Destructor.
        2)A destructor does NOT take an argument and Does NOT return a value.
    */
    ~Number(){
        cout<<"Destructor called!!! for object"<<count<<endl;
        count--;
    }
};

int main() {
    cout<<"Entering Main()"<<endl;
    Number n1;
    {
        cout<<"Entering Block1"<<endl;
        Number n2, n3;
        cout<<"Exeting Block1"<<endl;
    }
    cout<<"Entering Main()"<<endl;
    cout<<"Exeting Main()"<<endl;
    return 0;
}