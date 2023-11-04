#include<iostream>
using namespace std;

//Forward Declaration
class B;

class A{
    int data; 
    friend void Swap(A* ptr1, B* ptr2);  //" A* ptr1 " is a pointer to the objects of class "A"
    friend void Swappp(A& x, B& y);

    public:
        void setData(int x){
            data = x;
        }
        void displayData(void){
            cout<<"Class A:"<<data<<endl;
        }
};

class B{
    int data;
    friend void Swap(A* ptr1, B* ptr2);
    friend void Swappp(A& x, B& y);

    public:
        void setData(int x){
            data = x;
        }
        void displayData(void){
            cout<<"Class B:"<<data<<endl;
        }
};

void Swap(A* ptr1, B* ptr2){
    int temp;
    temp = ptr1 -> data; //Notation similar to pointer to structure in "C" Language
    ptr1 -> data = ptr2 -> data;
    ptr2 -> data = temp;

    cout<<"Data Swapped"<<endl;
}

//Swappping using Reference Variable
void Swappp(A& x, B& y){
    int temp;
    temp = x.data; //Notation similar to pointer to structure in "C" Language
    x.data = y.data;
    y.data = temp;

    cout<<"Data Swapped"<<endl;
}


int main(){
    A object1;
    B object2;

    object1.setData(6);
    object1.displayData();
    
    object2.setData(16);
    object2.displayData();

    Swap(&(object1), &(object2));
    object1.displayData();
    object2.displayData();

    Swappp(object1, object2);
    object1.displayData();
    object2.displayData();

    
    return 0;
}