#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connecting our file with gout stream
    ofstream gout("sample60.txt");

    // creating a name string variable
    string name = "Geetansh Bhardwaj" ; //Only "Geetansh" will be written to the file. "Bhardwaj" will not be written to the file
    // bcz it is after a space " ".

    // writing a string to the file
    gout<<"Your Name is : " + name<<endl;
    gout<<"Your Name is : "<<name<<endl;

    // disconnecting our file
    gout.close();


    ifstream gin("sample60.txt");
    string content;
    getline(gin , content);
    gin.close();

    cout<<"Contents of sample60.txt : "<<content<<endl;
    // gin>>content;
    // cout<<"contents of sample60.txt : "<<content<<endl;
    return 0;
}

