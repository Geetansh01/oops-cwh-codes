#include<iostream>
using namespace std;

//****************Break And Continue *******************
int main(){
    for (int i = 1 ; i < 40; i++){
        if (i==2){
            break;
        }
        cout<<i<<endl;
    }

    cout<<"//////////////\n";

    for (int p = 1; p < 21; p++){
        if (p==2){
            continue;
        }
        cout<<p<<endl;
    }
    
    
    return 0;
}