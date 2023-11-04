#include<iostream>
using namespace std;

class complex{
    int a;
    int b; // a + ib form

    public:
        void setComplexNumber(int x, int y){
            a = x;
            b = y;
        }

        void displayComplexNumber(void){
            cout<<"Complex Number:"<<a<<" + "<<b<<"i"<<endl;
        }

        //Function taking Objects c1 & c2 as outputs
        void setComplexNumberBySum(complex c1, complex c2){
            a = c1.a + c2.a;
            b = c1.b + c2.b;
        }

};

class complex2{
    public:
        int a;
        int b;
        void displayComplexNumber(void){
        cout<<"Complex Number:"<<a<<" + "<<b<<"i"<<endl;
        }
};

//A function that returns an object
complex2 setComplexNumberAndThenReturn(void){
    complex2 m1;
    m1.a = 3;
    m1.b = 5;

    return m1;
}

int main(){
//using class complex to illustrate function taking Object
    complex o1, o2, o3;
    o1.setComplexNumber(3,4);
    o1.displayComplexNumber();

    o2.setComplexNumber(1,2);
    o2.displayComplexNumber();

    o3.setComplexNumberBySum(o1, o2);
    o3.displayComplexNumber();

//Now using class complex2 to illustrate function returning Object
    complex2 o4;
    o4 = setComplexNumberAndThenReturn();
    o4.displayComplexNumber();
    
    return 0;
}