#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;

    public:
        int d,e;
        void SetData(int x, int y, int z); //Declaration Only
        void GetData(){
            cout<<"Value of a is:"<<a<<endl;
            cout<<"Value of b is:"<<b<<endl;
            cout<<"Value of c is:"<<c<<endl;
            cout<<"Value of d is:"<<d<<endl;
            cout<<"Value of e is:"<<e<<endl;
        }
};

//Defining a member function outside the class
void Employee :: SetData(int x, int y, int z){
            a = x;
            b = y;
            c = z;
        }

int main(){
    Employee Geetansh;
    // Geetansh.a = 200; //This line will give ERROR (as a is private)
    Geetansh.d = 100;
    Geetansh.e = 200;
    Geetansh.SetData(1,2,3);
    Geetansh.GetData();
    return 0;
}