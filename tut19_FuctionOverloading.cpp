#include<iostream>
using namespace std;

//Function Overloading

int volume(int l, int b, int h){
    return l*b*h;
}

float volume(int r, int h){
    return 3.14*r*r*h;
}

float volume(int r){
    return (4/3)*3.14*r*r*r;
}


int main(){
    cout<<"Volume of Cuboid:"<<volume(3,4,5)<<endl;
    cout<<"Volume of Cylinder:"<<volume(3,2)<<endl;
    cout<<"Volume of Sphere:"<<volume(3)<<endl;
    return 0;
}