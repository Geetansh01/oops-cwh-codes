/*
1)Dynamic Initialization (of Anything) means initialising values at runtime (usually by input from user).
2)So, programmer can't tell by looking at code what will be the output or which part of the code will be run on runtime.
*/
#include<iostream>
using namespace std;

class BankDeposit{
    float PrincipalAmt;
    int yrs;
    float CompoundInterestRate;
    float ReturnValue;

    public:
        BankDeposit(void){} //If Nothing is Given As Input then this constructor will be used to make objects.
        BankDeposit(float, int, int);
        BankDeposit(float, int, float);

        float ShowReturnValue();


};

//If CompoundInterestRate is an integer like 4 (i.e 4% )
BankDeposit:: BankDeposit(float p, int y, int r){
    PrincipalAmt = p;
    yrs = y;
    CompoundInterestRate = float(r)/100; //As 4 was given but it is actually 4% i.e 4/100
    ReturnValue = PrincipalAmt;
    for(int i = 0; i < y; i++){
        ReturnValue = ReturnValue * (1 + CompoundInterestRate);
    }
}

//If CompoundInterestRate is a float like 0.04 (i.e 4% )
BankDeposit:: BankDeposit(float p, int y, float r){
    PrincipalAmt = p;
    yrs = y;
    CompoundInterestRate = r;
    ReturnValue = PrincipalAmt;
    for(int i = 0; i < y; i++){
        ReturnValue = ReturnValue * (1 + CompoundInterestRate);
    }
}

float BankDeposit:: ShowReturnValue(){
    cout<<"Principal Amt:"<<PrincipalAmt<<endl
        <<"Return Amt:"<<ReturnValue<<endl;
}


int main(){
    BankDeposit bd1, bd2, bd3; //Using " BankDeposit(void){}" Constructor to make these Objects
    float p, r;
    int t, R;
    //r -----> If CompoundInterestRate is a float like 0.04 (i.e 4% )
    //R -----> If CompoundInterestRate is an integer like 4 (i.e 4% )
    
    
    cout<<"Give Values of p, r(float), t "<<endl;
    cin>>p>>r>>t;

    /*
    Note:
    1)Writing bd1(p, t, r) -----> Gives ERROR bcz constructor is used at the time of making initially
    2)bd1 = BankDeposit(p, t, r) ----> NO ERROR 

    Explanation (chatGPT) : In the first case, when you write bd1(p, t, r), it is treated as a function call to an object of class BankDeposit. However, there is no member function named operator() defined in the class, which is what the compiler is complaining about.
    That's why it gives an error.
    On the other hand, in the second case, when you write bd1 = BankDeposit(p, t, r), it is creating a temporary object of class BankDeposit with the arguments provided, and then assigning it to the object bd1. Here, the BankDeposit constructor with arguments is called to create the temporary object, which is then assigned to bd1. 
    This works because the assignment operator operator= is defined in the class, which allows objects of BankDeposit to be assigned to each other.
    So, the reason why the first case gives an error and the second case does not is that they are different types of expressions. 
    The first case is a function call, and the second case is an object creation followed by an assignment.
    */
    bd1 = BankDeposit(p, t, r);
    bd1.ShowReturnValue();

    cout<<"Give Values of p, R(int), t "<<endl;
    cin>>p>>R>>t;
    bd2 = BankDeposit(p, t, R);
    bd2.ShowReturnValue();

    return 0;
}



