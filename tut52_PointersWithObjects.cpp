#include<iostream>
using namespace std;

class Shopitem{
    int id;
    float price;

    public:
        void setdata(int a, float b){
            id = a;
            price = b;
        }

        void getdata(void){
            cout<<"Id: "<<id<<endl
            <<"Price: "<<price<<endl;   
        }
};

int main(){
    int size = 3;
    Shopitem* ptr = new Shopitem[size];

    for(int i = 0; i < size; i++){
        int x;
        float y;
        cout<<"Enter Id, Price for item"<<i<<endl;

        cin>>x>>y;
        // cin.ignore(); // Ignore any leftover characters, including newline

        (ptr + i)->setdata(x,y);
    }

    for(int i = 0; i < size; i++){
        (ptr + i)->getdata();
    }

    return 0;
}