#include<iostream>
using namespace std;

//forward declaration
class Y;

class X{
    int data;
    friend int sumXY(X o1, Y o2);

    public:
        void setData(int x){
            data = x;
        }

};

class Y{
    int value;
    friend int sumXY(X o1, Y o2);
        
    public:
        void setValue(int x){
            value = x;
        }

};

int sumXY(X o1, Y o2){
    cout<<"Sum is:"<<(o1.data + o2.value)<<endl;
}

int main(){
    X a1;
    Y b1;
    a1.setData(4);
    b1.setValue(5);
    sumXY(a1, b1);
    return 0;
}