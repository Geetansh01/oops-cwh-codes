#include<iostream>
using namespace std;


//Syntax for assigning default parameters for templates in c++ (compare with default parameters in functions)
template <class T1 = int, class T2 = float, class T3 = char>
class Geetansh{
    T1 a;
    T2 b;
    T3 c;

    public:
        Geetansh(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(void){
            cout<<"a is :"<<a<<endl;
            cout<<"b is :"<<b<<endl;
            cout<<"c is :"<<c<<endl;
        }

};
int main(){
    Geetansh <> g1(1, 2.4, 's');  //" <> " is needed because templates have been used. Using " <> " means default parameters will be taken.
    g1.display();

    Geetansh <float, char, char> g2(2.3, 'd', 's');
    g2.display();
    
    return 0;
}