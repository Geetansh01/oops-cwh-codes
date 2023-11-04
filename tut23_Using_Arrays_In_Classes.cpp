#include <iostream>
using namespace std;

class shop{
    int itemID[100];
    int itemPrice[100];

    public:
        int counter;
        void init_counter(void) {counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter Item Id:"<<endl;
    cin>>itemID[counter];
    cout<<"Enter Item Price:"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop :: displayPrice(void){
    cout<<"ItemID"<<'\t'<<"Price"<<endl;
    for(int i = 0; i < counter; i++){
        cout<<itemID[i]<<'\t'<<itemPrice[i]<<endl;
    }
}

int main(){
    shop UnikBazzar;
    UnikBazzar.init_counter();
    UnikBazzar.setPrice();
    UnikBazzar.setPrice();
    UnikBazzar.setPrice();
    UnikBazzar.displayPrice();

    return 0;
}