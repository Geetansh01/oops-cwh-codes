#include<iostream>
using namespace std;

/*
CLASS TEMPLATES WITH MULTIPLE (COMMA SEPARATED) PARAMETERS (ONE, TWO OR MORE THAN TWO)

template <class T1, class T2...(COMMA SEPARATED)>
class {..NameOFClass..}{
    //body
};

*/

//T1, T2 can also be a generic data type like a class while implementing.
template <class T1, class T2>
class Myclass{
    T1 data1;
    T2 data2;

    public:
        Myclass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void printData(){
            cout<<"Data1 :"<<data1<<endl;
            cout<<"Data2 :"<<data2<<endl;
        }
};

int main(){
    Myclass<int, char> obj(100, 'G');
    obj.printData();

    Myclass<string, float> obj1("Hi Guyzz", 12.22);
    obj1.printData();

}