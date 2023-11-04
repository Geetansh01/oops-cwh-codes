#include <iostream>
using namespace std;

/*
1)"this" is a keyword which is a pointer which points to the object that is being 
    created (i.e the object that invokes the member function)
*/


// /*************************************Implementation No 1 of "this" ************************************************/
// class A{
//     int a; //Let's call this "*a"

//     public:
//         void setdata(int a){
//             // a = a; //----> Wrong! Here "a" is the local a and not the "*a" above as LOCAL VARIABLES TAKE PRIORITY ABOVE GLOBAL ONES
//             this->a = a;
//         }

//         void getdata(void){
//             cout<<"Value of a:"<<a<<endl;
//         }
// };

// int main(){
//     A obj1;
//     obj1.setdata(4);
//     obj1.getdata();

//     return 0;
// }


// /*************************************Implementation No 2 of "this" ************************************************/
// class A{
//     int a; //Let's call this "*a"

//     public:
        //"setdata()" is returning a pointer here
//         A* setdata(int a){
//             // a = a; //----> Wrong! Here "a" is the local a and not the "*a" above as LOCAL VARIABLES TAKE PRIORITY ABOVE GLOBAL ONES
//             this->a = a;
//             return (this);
//         }

//         void getdata(void){
//             cout<<"Value of a:"<<a<<endl;
//         }
// };

// int main(){
//     A obj1;
//     obj1.setdata(4);
//     obj1.getdata();

//     return 0;
// }


/*************************************Implementation No 3 of "this" ************************************************/
class A{
    int a; //Let's call this "*a"

    public:
    //"setdata()" is returning an object here (more specifically , a reference variable to an object of class "A")
        A& setdata(int a){
            // a = a; //----> Wrong! Here "a" is the local a and not the "*a" above as LOCAL VARIABLES TAKE PRIORITY ABOVE GLOBAL ONES
            this->a = a;
            return (*this);
        }

        void getdata(void){
            cout<<"Value of a:"<<a<<endl;
        }
};

int main(){
    A obj1;

    //"obj1.setdata()" ---> this is "obj1" as "setdata()" is returning an object

    obj1.setdata(4).getdata(); //so this is same as "obj1.getdata()" after running "obj1.setdata(4)"

    return 0;
}