#include<iostream>
using namespace std;


// /***************************Inline Functions*************/
// inline int product(int x, int y){
//     return x*y;
// }


// int main(){
//     int a,b;
//     cout<<"Enter value of a and b:";
//     cin>>a>>b;
//     cout<<"Product of a and b is:"<<product(a,b)<<endl;
//     return 0;
// }   

/**************************Static Variables**************/

// int product(int x, int y){
//     static int c = 0; //"c" is now a static variable means the function will not forget the value of c upon successive executions.
//     int p= (x*y) + c;
//     c=c+1; //Due to this line, the value of "c" keeps on incrementing as the function gets called again and again. 
//     return p;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"Value is:"<<product(a,b)<<endl;
//     cout<<"Value is:"<<product(a,b)<<endl;
//     cout<<"Value is:"<<product(a,b)<<endl;
//     cout<<"Value is:"<<product(a,b)<<endl;
//     cout<<"Value is:"<<product(a,b)<<endl;
//     cout<<"Value is:"<<product(a,b)<<endl;
//     cout<<"Value is:"<<product(a,b)<<endl;
//     cout<<"Value is:"<<product(a,b)<<endl;
//     return 0;
// }


/*******************************Default and Unndefault Arguments of Functions************************/
float MoneyReceived(int x, float y = 1.04){
    return (x*y);
}

int main(){
    int money;
    cin>>money;
    cout<<"If you have "<<money<<"Rs in your bank account, you will get"<<MoneyReceived(money)<<endl;
    cout<<"VIP: If you have "<<money<<"Rs in your bank account, you will get"<<MoneyReceived(money, 1.1)<<endl;

    return 0;
}