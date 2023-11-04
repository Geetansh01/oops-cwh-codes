#include <iostream>
using namespace std;

// //****************Struct*******************

// // struct employee{
// //     /* data */
// //     int id;
// //     char favchar;
// //     float salary;

// // };


// //Using "typedef" to alias struct
// typedef struct employee{
//     /* data */
//     int id;
//     char favchar;
//     float salary;

// } ep;


// int main(){
//     //struct employee harry; 
//     ep harry; //"ep" used as alias for structure employee
//     harry.id = 1;
//     harry.favchar = 'c';
//     harry.salary = 50000;

//     cout<<harry.id<<endl;
//     cout<<harry.favchar<<endl;
//     cout<<harry.salary<<endl;
//     return 0;
// }



//  //************************Union*******************
//  union money{
//     int rice;
//     char car;
//     float dollar;
//  };


 
//  int main(){
//     union money m1;
//     m1.rice = 12;
//     m1.dollar = 13.55;
//     cout<<m1.rice<<endl;   
//     return 0;
//  }


//********************Enumerations*********************
enum meal{ breakfast, lunch, dinner};

int main(){
    meal m1;
    m1 = breakfast;
    meal m2 = lunch;
    meal m3 = dinner;

    cout<<breakfast<<endl;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    cout<<(m1==0)<<endl;
    
    return 0;
}