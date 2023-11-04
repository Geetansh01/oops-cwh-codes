#include<iostream>
using namespace std;

class Employee{
    private:
        int ID;
        static int count;

    public:
        void setData(void){
            cout<<"Enter employee ID:";
            cin>>ID;
            count++;
        }
        void getData(void){
            cout<<"Employee Id:"<<ID<<endl;
            cout<<"Employee No:"<<count<<endl;
        }

        //Static Member Function
        static void getCount(void){
            // cout<<ID<<endl; //<----- This gives ERROR (ID not static data member)
            cout<<"The Value of Count is:"<<count<<endl;
        }
};

int Employee:: count = 100; 
/* 1)Default value 0 (for static storage class)
   2) " int Employee:: count; "  <---- For default value 0, use this.
*/


int main(){
    Employee Geetansh, Harry;

    Geetansh.setData();
    Geetansh.getData();
    Employee::getCount(); // <-------- To use static Member function of class Employee

    Harry.setData();
    Harry.getData();
    Employee::getCount();

    return 0;
}