#include<iostream>
using namespace std;

class complex{
    int a, b;
    friend complex setNumBySum(complex c1, complex c2); //Here, "complex" is the return type of setNumBySum(...)


    public:

        //Mentioning the friend function in "public" will also Work
        // friend complex setNumBySum(complex c1, complex c2); 

        void setNum(int x, int y){
            a = x;
            b = y;
        }

        void printNum(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

/* 1)This function is a "Friend" of complex class.
   2)Being a "Friend" means it can access private data of objects of complex class.
   3)But, it is NOT a "member function" of complex class. 
     *this means "c2.setNumBySum(...)" is NOT valid (c2 being an object of complex class)
*/
complex setNumBySum(complex c1, complex c2){
    complex c3;
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;

    return c3;
}

int main(){
    complex o1, o2, o3;

    o1.setNum(1,2);
    o1.printNum();

    o2.setNum(4,5);
    o2.printNum();
    
    o3 = setNumBySum(o1, o2);
    o3.printNum();
}

/* Properties of friend functions:
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/