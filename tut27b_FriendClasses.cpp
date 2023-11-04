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

    /*1)Here we made the entire class "calculator" a friend of class "complex"
      2)So, all functions of calculator can access private data of Complex.
    */
   friend class calculator;

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

