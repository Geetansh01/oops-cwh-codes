#include<iostream>
#include<functional> //header file to be included if u want to use " Function Objects "
#include<algorithm> //for some cool pre-cooked stuff YUMMMM
using namespace std;

//Function Object : A function wrapped in a class so that it is available for use like an object (rather than like a function)

int main(){
    //Task : Given an array we need to sort it
    int arr[] = {1, 2, 3, 21, 2, 12, 54 ,1 ,134 ,121, 12, 77};
    sort(arr, arr+5); //From " #include<algorithm> ". This will sort arr from 1st to 5th element
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}