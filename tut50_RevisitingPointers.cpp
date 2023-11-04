#include<iostream>
using namespace std;

int main(){
    //Revisiting Pointers
    int a = 4;
    int* ptr = &a;
    cout<<"Value of a :"<<*(ptr)<<endl;


    //keyword "new" : to dynamically allocate memory at runtime
    //"new" is also an operator
    int* ptr2 = new int(3);
    float* ptr3 = new float(989.34);
    cout<<"Value at address stored in ptr2 :"<<*(ptr2)<<endl;
    cout<<"Value at address stored in ptr3 :"<<*(ptr3)<<endl;

    int* arr = new int[3];
    arr[0] = 10;
    arr[1] = 110;
    arr[2] = 120;
    cout<<"Value at arr[0]:"<<*(arr)<<endl;
    cout<<"Value at arr[0]:"<<arr[0]<<endl;
    cout<<"Value at arr[1]:"<<*(arr + 1)<<endl;
    cout<<"Value at arr[2]:"<<*(arr + 2)<<endl;

    /*
    "delete" operator / keyword

    1)"delete" is an operator that is used to destroy array and non-array(pointer)
    objects which are created by "new" (i.e which are dynamically allocated)
    2)So, it frees the memory(in heap) allocated by "new" and hence the memory is now free
    to store other values
    */
    delete[] arr;
    delete ptr2;
    cout<<"Now there is no guarantee *(ptr2) = 3, same goes for array \"arr\"  "<<endl;
    cout<<"Value at address stored in ptr2 :"<<*(ptr2)<<endl;
    cout<<"Value at arr[0]:"<<arr[0]<<endl;
    cout<<"Value at arr[1]:"<<*(arr + 1)<<endl;
    cout<<"Value at arr[2]:"<<*(arr + 2)<<endl;

    return 0;
}