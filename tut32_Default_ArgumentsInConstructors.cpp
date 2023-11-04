#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;

    public:
    //Here, b has default value of '0'. Note That Default arguments come to right of non-default 
    //ones.
        Simple(int a, int b = 0){
            data1 = a;
            data2 = b;
        }

        void PrintData(void){
            cout<<data1<<endl<<data2<<endl;
        }
};

int main(){
    Simple s1(1, 9);
    s1.PrintData();

    Simple s2(3);
    s2.PrintData();
    return 0;
}