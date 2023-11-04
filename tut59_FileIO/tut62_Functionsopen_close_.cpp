#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){
    //using open() of ofstream to open a file
    ofstream fout;
    fout.open("sample60.txt");
    fout<<"Hello\n";
    fout<<"Hi";
    fout<<"Han bhy kya chl ra hai";
    fout<<"Go on and on";
    //Good practice to close a file with close() after work finished
    fout.close();

    ifstream fin;
    fin.open("sample60.txt");
    string s1, s2, s3, str;

    // //Boring(and tedious) method to read the entire file
    // fin>>s1>>s2;
    // fin>>s3;
    // cout<<s1<<endl<<s2<<endl<<s3<<endl<<endl;

    //Giga chad method to read the entire file
    while(fin.eof() == 0){
        getline(fin, str);
        cout<<str<<endl; 
    }
    fin.close();
    return 0;
} 
