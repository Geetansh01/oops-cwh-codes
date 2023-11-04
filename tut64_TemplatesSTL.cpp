/**********************************************Templates in c++************************************/
#include <iostream>
using namespace std;

// class Vector{
//     public:

//     int * arr;
//     int size;

//     Vector(int s){
//         size = s;
//         arr = new int[size];
//     }

//     int dotproduct(Vector &v){
//         int dot = 0;
//         for(int i = 0; i<size; i++){
//             // Also correct : dot += v.arr[i] * arr[i];
//             dot += v.arr[i] * this->arr[i];

//         }
//         return dot;
//     }

// };

// int main(){
//     Vector v1(3);
//     *(v1.arr + 0) = 2;
//     //OR v1.arr[0] = 2;   
//     //WRONG ------> v1.(*(arr + 0)) = 2;

//     v1.arr[1] = 3;
//     v1.arr[2] = 4;

//     Vector v2(3);
//     v2.arr[0] = 3; 
//     v2.arr[1] = 2;
//     v2.arr[2] = 1;

//     cout<<v1.dotproduct(v2)<<endl; //Ans should be = 2(3) + 3(2) + 4(1) = 16


    /*
    Now say we wanted to this BUT with "float" instead of "int" numbers.
    So, instead of Rewriting a whole vector class with "float * arr", we will use templates.
    */

template <class T>
class Vector{
    public:

    T * arr;
    int size;

    Vector(int s){
        size = s;
        arr = new T[size];
    }

    T dotproduct(Vector &v){
        T dot = 0;
        for(int i = 0; i<size; i++){
            // Also correct : dot += v.arr[i] * arr[i];
            dot += v.arr[i] * this->arr[i];

        }
        return dot;
    }

};

int main(){
    Vector <float> v1(3);
    v1.arr[0] = 2.1; 
    v1.arr[1] = 3.2;
    v1.arr[2] = 4.2;

    Vector <float> v2(3);
    v2.arr[0] = 3.1; 
    v2.arr[1] = 2.0;
    v2.arr[2] = 1.8;

    cout<<v1.dotproduct(v2)<<endl;

    return 0;
}