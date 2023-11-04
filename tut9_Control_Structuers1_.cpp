#include<iostream>
using namespace std;
int main(){
    //****************Control Structure--If Else Ladder***************
    // int age;
    // cout<<"Wht is ur age:";
    // cin>>age;
    // if((age<18) && (age>1)){
    //      cout<<"You can not come to party";
    // }
    // else if(age==18){
    //     cout<<"You can't drink alcohol in party";
    // }
    // else if(age<1){
    //     cout<<"You are not yet born";
    // }
    // else{
    //     cout<<"You can come to party";
    // }

    //****************Control Structure--Switch Case***************
    int age;
    cout<<"Wht is ur age:";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You are 18yrs old"<<endl;
        // break;

    case 20:
        cout<<"You are 20yrs old"<<endl;
        // break;       
    
    default:
    cout<<"No special Cases";
        // break;
    }


    // return 0;
}