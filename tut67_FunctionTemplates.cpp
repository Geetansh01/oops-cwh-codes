#include<iostream>
using namespace std;

// float funcAvg(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcAvg2(float a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// //This is tiresome to make too many functions for similar task (ignoring overloading feature).
// //So, we will use Function Templates.

// int main(){
//     float a;
//     a = funcAvg(5, 2);
//     cout<<"Avg is:"<<a<<endl;
//     printf("Average is %f",a); //You can use c in c++ like this !!!!
//     cout<<endl;

//     a = funcAvg2(2.4, 5);
//     cout<<"Avg is:"<<a<<endl;
//     return 0;
// }

//Using Function Templates 

template <class T1, class T2>
float funcAvg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

//Note: swap(...) is already an inbuilt function so u can't use that name (will result in error)
template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
    cout<<"Swapped"<<endl;
}


int main(){
    float a;
    a = funcAvg(5, 2);
    cout<<"Avg is:"<<a<<endl;

    a = funcAvg(2.4, 5);
    cout<<"Avg is:"<<a<<endl;

    int x = 2;
    int y = 3;
    cout<<" x: "<<x<<" y: "<<y<<endl;
    swapp(x, y);
    cout<<" x: "<<x<<" y: "<<y<<endl;

    return 0;
}