#include<iostream>
using namespace std;

//*****************************Functions***************************
// int sum(int a, int b){
//     int sum = a+b;
//     return sum;
// }


// int main(){

//     int num1, num2;

//     cout<<"Enter first number:"<<endl;
//     cin>>num1;
//     cout<<"Enter second number:"<<endl;
//     cin>>num2;
//     cout<<"Sum of numbers is:"<<sum(num1,num2)<<endl;
    
    
//     return 0;
// }


//**************************Function Prototyping****************************


// int sum(int a, int b); //prototype for sum() {to undedrstand: tells compiler to look for sum() after the main()}
// // int sum(int, int);  -------> Acceptable
// // int sum(int a, b); ----------> Not Acceptable {will give error}

// int main(){

//     int num1, num2;

//     cout<<"Enter first number:"<<endl;
//     cin>>num1;
//     cout<<"Enter second number:"<<endl;
//     cin>>num2;
//      // num1 and num2 are actual parameters
//     cout<<"Sum of numbers is:"<<sum(num1,num2)<<endl;
    
    
//     return 0;
// }

// //Declaring function after main() function {it would give an error had it not been for the prototype before main()}
// int sum(int a, int b){
     // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
//     int sum = a+b;
//     return sum;
// }


//**********************More types of declaring Functions********************

// void greet(); --------------> Acceptable
void greet(void);

int main(){
    greet();
    return 0;
}

void greet(void){
    cout<<"Hello Bhai :)"<<endl;
    // NO return statement;
}