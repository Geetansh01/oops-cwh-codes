#include<iostream>
using namespace std;

/*Forward Declaration
    1)Why we did this? ==> Bcz class "Complex" is used in calculator below.
    2)Compiler starts reading from top and it will not find a Complex class when it will reach definition of Calculator class.
      So, the compiler will throw error.
    3)So, "Forward Declaration" assures the compiler that it will find class Complex ahead
*/
class Complex;  //Forward Declaration

class calculator{
    public:
        int sumRealPartOfComplex(Complex, Complex);
        int sumCompPartOfComplex(Complex , Complex);
};

class Complex{
    int a;
    int b;

    /*1)This is different from use of "friend" in "tut26_FriendlyFunctions.cpp".
      2)There, we made an external function the friend of a class.
      3)Here, we are making the function "sumRealPartOfComplex(...)" which is itself a function of
       class "calculator", the friend of another class "Complex".
      4)NOTICE how it is getting tiresome to set "individually" each function from "calculator" as a friend.
        Solution? ==> Set the entire class "calculator" as a friend of "complex" class (Done in tut27b_FriendClasses.cpp)
    */
    friend int calculator:: sumRealPartOfComplex(Complex, Complex);
    friend int calculator:: sumCompPartOfComplex(Complex, Complex);

    public:
        void setNum(int x, int y){
            a = x;
            b = y;
        }

        void printNum(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

int calculator:: sumRealPartOfComplex(Complex c1, Complex c2){
    return (c1.a + c2.a);
}

int calculator:: sumCompPartOfComplex(Complex c1, Complex c2){
    return (c1.b + c2.b);
}

int main(){
    Complex o1, o2;
    o1.setNum(1, 2);
    o2.setNum(3, 4);

    calculator calc;
    int result;
    result = calc.sumRealPartOfComplex(o1, o2);
    cout<<"The sum of real parts of o1 and o2 is: "<<result<<endl;

    result = calc.sumCompPartOfComplex(o1, o2);
    cout<<"The sum of Complex parts of o1 and o2 is: "<<result<<endl;
    return 0;
}

