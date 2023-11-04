#include <iostream>
using namespace std;

/*Loops in C++:
There are three types of loops in C++:
    1. For loop
    2. While Loop
    3. do-While Loop
*/

int main(){

    // ****************for loop**************
    //Syntax:
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }
    
    // for(int i=1; i<40; i++ ){
    //     cout<<i<<endl;
    // }



    // ****************While loop**************
    //Syntax:
    //while (condition){
    //     loop body
    // }

    // int i = 1;
    // while (i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // ****************do while loop**************
    //Syntax:
    //do{
    //     loop body
    // } while (condition);

    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while (i<=40);


    //************HomeWork Question*************
    /*Program to write table of 6 with loops*/
    //for loop
    for(int i=1; i<=10; i++ ){
        cout<<i*6<<endl;
    }

    int a=1;
    while(a<=10){
        cout<<a*6<<endl;
        a++;
    }

    int p=1;
    do{
        cout<<p*6<<endl;
        p++;
    }while(p<=10);

    return 0;

}