
#include <iostream>
#include <string>
using namespace std;

/*********************WITH Nesting of member functions***************************/

class binary{
    string s; //this is private by default
    void chk_bin(); //Also private by default


    public:
        void read();
        void ones_compliment();
        void display();
};

void binary :: read(){
    cout<<"Enter a binary Number:"<<endl;
    cin>>s;
}

void binary :: chk_bin(){
    for (int i = 0; i < s.length(); i++){
        if ((s.at(i) != '0') && (s.at(i) != '1')){
            cout<<"Not a Binary Number"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(){

    chk_bin(); /* <------- NESTING OF MEMBER FUNCTION
    1)This is Nesting of member function. 
    2)Here, chk_bin() will execute automatically when ones_compliment() is executed.
    3) Also note that we do not have to use the dot notation {i.e <ObjectName> . chk_bin()} while nesting member functions.
    */
   
    for (int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
    else{
        s.at(i) = '0';
    }
    }
}

void binary :: display(){
    cout<<endl;
    cout<<"Your Binary nmber is:"<<endl;
    for(int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
}

int main(){
    binary b; //b is an object of class binary
    b.read();
    b.display();
    // b.chk_bin();
    b.ones_compliment();
    b.display();
}




// /*********************WITHOUT Nesting of member functions***************************/

// class binary{
//     string s; //this is private by default

//     public:
//         void read();
//         void chk_bin();
//         void ones_compliment();
//         void display();
// };

// void binary :: read(){
//     cout<<"Enter a binary Number:"<<endl;
//     cin>>s;
// }

// void binary :: chk_bin(){
//     for (int i = 0; i < s.length(); i++){
//         if ((s.at(i) != '0') && (s.at(i) != '1')){
//             cout<<"Not a Binary Number"<<endl;
//             exit(0);
//         }
//     }
// }

// void binary :: ones_compliment(){
//     for (int i = 0; i < s.length(); i++){
//         if(s.at(i) == '0'){
//             s.at(i) = '1';
//         }
//     else{
//         s.at(i) = '0';
//     }
//     }
// }

// void binary :: display(){
//     cout<<endl;
//     cout<<"Your Binary nmber is:"<<endl;
//     for(int i = 0; i < s.length(); i++){
//         cout<<s.at(i);
//     }
// }

// int main(){
//     binary b; //b is an object of class binary
//     b.read();
//     b.display();
//     b.chk_bin();
//     b.ones_compliment();
//     b.display();
// }