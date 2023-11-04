#include <iostream>
using namespace std;

int Global=1;

void sum(){
    cout<<Global;
}

int main(){
/*  int a=4;
    int b=5;   */
    cout<<"\"Global\" In sum is";
    sum();
    cout<<"Initially Global is "<<Global<<"\n";
    Global = 100; //Changed already declared variable "Gloabl" from 1 to 100 IN THE LOCAL SCOPE (i.e inside the function main() only)
    int a=4, b = 9;
    float adha = 1.5;
    char name= 'A',Name='G' ;
    cout<<"Now value of variable \"Global\" is "<<Global<<"\n"; //Now 100 will be printed instead of 1
/* WRONG WAYS:
1) char name= 'Geetansh' [Bcz only 1 character allowed.]
2) char name= "G" [Bcz double quotes ("") are wrong for char datatype.]*/
    cout<<"This is tutorial 4. Here the value of a is "<<a<<". And the value of b is "<<b<<"\n";
    cout<< adha <<"\n"<<name<<Name;
    return 0;
}

