/*********************Arrays Of Objects*********************/
#include<iostream>
using namespace std;

class Employee{
    int ID;
    int salary;

    public:
        void setData(void){
            salary = 123;
            cout<<"Enter Employee ID:";
            cin>>ID;
        }

        void getData(void){
            cout<<"ID of Employee is:"<<ID<<endl;
        }
};

int main(){
    // Employee Geetansh, Soham, Chaitanya, Ram; //Too Lengthy

    Employee Google[4]; //Array of objects of class Employee
    for(int i = 0; i < 4; i++){
        Google[i].setData();
        Google[i].getData();
    }

}

