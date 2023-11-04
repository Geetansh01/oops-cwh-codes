#include<iostream>
using namespace std;

// /******************************Value of a and b not swapped ***************************/
// void swap(int x, int y){
//     int temp=x;
//     x=y;
//     y=temp;
// }

// int main(){
//     int a=2, b=3;
//     cout<<"Value of a is:"<<a<<"Value of b is:"<<b<<endl;
//     swap(a,b);
//     cout<<"Value of a is:"<<a<<"Value of b is:"<<b<<endl;
//     return 0;
// }

// /*********************What to do to actually swap a and b?*************************/

// void PointerSwap(int *x, int *y){
//     //Swapping by address using pointers
//     //This Function Calls By reference(i.e address) in memory and hence works
//     int temp= *x;
//     *x= *y;
//     *y= temp;
// }

// void ReferenceVarSwap(int &x, int &y){
//     //This Function swaps using reference variables (see tut7.cpp)
//     int temp= x;  //this temp is local to this function
//     x=y;
//     y= temp;
// }

// int main(){
//     int a=2, b=3;
//     cout<<"Value of a is:"<<a<<"Value of b is:"<<b<<endl;
//     PointerSwap(&a,&b);
//     cout<<"Value of a is:"<<a<<"Value of b is:"<<b<<endl;
//     ReferenceVarSwap(a,b);
//     cout<<"Value of a is:"<<a<<"Value of b is:"<<b<<endl;
//     return 0;
// }

/***********************A method to change value of a variable using functions***************************/
int & changeVar(int &x){
    //so x is now a "reference variable". Hence "reference variable" must be the return type of the function  changeVar
    return x;
}

int main(){
    int a = 3;
    cout<<"a is:"<<a<<endl;

    changeVar(a)=123;    //this changes value of a to 123
    cout<<"a is:"<<a<<endl; 

    return 0;
}