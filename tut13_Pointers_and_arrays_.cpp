#include<iostream>
using namespace std;

int main(){
    //Array example
    char a= 's';
    int marks[]={23, 45, 56, 89, 's'};

    // //Differernt way of making an array
    // int mathMarks[4];
    // mathMarks[0]=2278;
    // mathMarks[1]=22;
    // mathMarks[2]=223;
    // mathMarks[3]=184;

    // cout<<"These are math marks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;    
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    // //You can change value of array (by changing value of it's elements)
    // marks[2]=1000;
    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl; //This will give ascii value of character 's' which is 115

    // //Using for loop to access elements of mathMarks Array
    // for (int i = 0; i < 4; i++){
    //     cout<<"Value of mathMarks["<<i<<"] is:"<<mathMarks[i]<<endl;
    // }

    // //Using while loop to access elements of mathMarks Array
    // int i=0;
    // while(i<4){
    //     cout<<"Value of mathMarks["<<i<<"] is:"<<mathMarks[i]<<endl;
    //     i++;
    // }


    // //Using while loop to access elements of mathMarks Array
    // int p=0;
    // do{
    //     cout<<"Value of mathMarks["<<p<<"] is:"<<mathMarks[p]<<endl;
    //     p++;
    // } while(p<4);

    //Pointers And Arrays
    int *p = marks;
    // cout<<"The value of *(p) is:"<<*(p)<<endl;
    // cout<<"The value of *(p+1) is:"<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is:"<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is:"<<*(p+3)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    

    return 0;
}