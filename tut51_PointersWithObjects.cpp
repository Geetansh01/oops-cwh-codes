#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;

    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }

        void getData(void){
            cout<<a<<" + i"<<b<<endl;
        }
};

int main(){
    Complex c1;
    c1.setData(12,3);
    c1.getData();

    Complex* ptr = new Complex;
    (*ptr).setData(1,2);   // " *ptr.setData(1,2); " ---> Gives error as precedence of "." ka kuch locha hai. So "()" around "*ptr" . 
    (*ptr).getData(); 

    //Arrow operator "->"
    Complex c3;
    Complex* ptr2 = &c3;
    ptr2->setData(3,5); //same as " (*ptr2).setData(3,5) "
    ptr2->getData();

    //Array using pointers
    Complex* ptr3 = new Complex[2];

    ptr->setData(9,1);
    ptr->getData();

    (ptr+1)->setData(2,3);
    (ptr+1)->getData();
    
    
return 0;
}