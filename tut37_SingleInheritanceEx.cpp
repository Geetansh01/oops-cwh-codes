#include<iostream>
using namespace std;

//Base Class
class Employee{
    public:
        int Id;
        float salary;
        //Default Constructor
        Employee(){}
        
        //Parameterized Constructor
        Employee(int id){
            Id = id;
            salary  = 34.0;
        }
};

/*
Derived class syntax:
class {{Derived-class-name}} : {{Visibility-mode}} {{Base-class-name}}{
    data members...
    member functions...
    etc
}; 

Note:
1)Default Visibility Mode: private (i.e when not specified)
2)public Visibility Mode: Public members of the base class become Public members of the derived class.
3)private Visibility Mode: Public members of the base class become private members of the derived class.
4)Private members are NEVER inherited (ofcourse, from base class to derived class)

TIP: Visibiity Mode should be "public" for most of the uses.
*/

//Making the derived class "Programmer" from base class "Employee"

class Programmer : public Employee {       
    int LanguageCode;           //Say LanguageCode is 9 for Python

    public:
        //Default Constructor
        Programmer(){}

        //Parameterized Constructor
        Programmer(int id){
            Id = id; //Here "Id" is from Base Class "Employee"
            LanguageCode = 9;
        }


        void showData(){
            cout<<"Id is:"<<Id<<endl;
        }
};



int main(){
    Employee Geetansh(1), harry(2);
    cout<<Geetansh.salary<<endl;
    cout<<harry.salary<<endl;

    Programmer Hemish;
    Hemish.showData(); //Output will be Garbage Value (Reason : Default constructor of "Employee" does not assign any particular value of "Id")

    Programmer Tanish(12);
    Tanish.showData(); //Outut will NOT be garbage (Reason : See Deafult constructor of "Programmer")

    return 0;
}