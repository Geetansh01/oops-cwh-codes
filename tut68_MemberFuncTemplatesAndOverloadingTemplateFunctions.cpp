#include<iostream>
using namespace std;

/*****************************Example : if you want to define a member function outside the class while templates have been used to make that class.***********************************/
// template<class T>
// class Geetansh{
//     T data;

//     public:
//         Geetansh(T x){
//             data = x;
//         }
        
//         void display();

// };

// /*
//     1)I could have defined "display()" inside "Geetansh" as well. 
//     2)The purpose here is to show the syntax if you want to define a 
//     member function outside the class while templates have been used to make that class.
// */
// template <class T>
// void Geetansh<T>::display (){
//     cout<<"data : "<<data<<endl;
// }

// int main(){
//     Geetansh<float> G1(5.99);
//     G1.display();

// }

/***********************************Functions : Overloading + Templates*************************/
/*
    1)Now we will see what happens if we have a function that is both overloaded and Templatised.
*/

//this is "original func1() "
void func1(int x){
    cout<<"I am original func1"<<endl;
}

/*
    Now we will again define " func1() " but with templates. So this means 2 things:
     1) func1() is overloaded as we defined it two times differently.
     2) func1() is "templatised" as in we used templates to define it the second time.
*/
template <class T>
void func1(T x){
    cout<<"I am templatised + overloaded func1"<<endl;
}

int main(){
    func1(2.5); //Definitely "templatised func1() " will run as 2.5 is a "float".

    func1(3); //Which "func1()" will run now? 
              //Ans : "original func1() " will run as that is an exact match bcz 3 is an int.
              //So, exact match takes priority over templatised function.

}