#include<iostream>
#include<fstream>

/*
These are some useful classes for working with files in C++:
1)fstreambase
2)ifstream --> derived from fstreambase
3)ofstream --> derived from fstreambase


In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1)Using the constructor
2)Using the member function open() of the class

*/

using namespace std;

int main(){
    string st = "Geetansh. This text will be written to the destination file." ;
    string st2;

    //Opening file using constructor and writing to it
    ofstream out("sample60.txt"); //write operation. "out" is an object of class "ofstream" made using constructor of "ofstream" class
    out << st ;

    //Opening file using constructor and reading it
    ifstream in("sample60b.txt"); //read operation. "in" is an object of class "ifstream" made using constructor of "ifstream" class
    // in>>st2;
    getline(in, st2);
    getline(in, st2);
    getline(in, st2);
    cout<<st2;


    return 0;
}