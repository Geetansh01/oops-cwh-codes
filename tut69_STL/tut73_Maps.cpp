#include<iostream>
#include<map>
#include<string>

using namespace std;

//A Map is an associative array.
//It is used to store Key Value Pairs
/*Note : maps in C++ are ordered by their keys. 
(to understand, see the output of below code and compare with the order in which the values were inserted) */

int main(){
    map<string, int> marksMap;
    marksMap["Geetansh"s] = 99;
    marksMap["Tarun"] = 85;
    marksMap["Atharv"] = 70;
    marksMap["Uma"] = 2;

    marksMap.insert({{"Kozume", 169}, {"Kuroo", 187}});  //Copied from cppreference.com
                                                          //To insert key-value pairs to a map

    map<string, int> :: iterator iter;

    for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl; 
        /*
            1)Syntax to access Key-Value pairs from a Map : 
              -> (*iter) points to the 1st Key-Value pair
              -> (*iter).first gives the Key
              -> (*iter).second gives the value
        */
    }

    cout<<"Size of marksMap is :  "<<marksMap.size()<<endl;
    cout<<"MaxSize of marksMap is :  "<<marksMap.max_size()<<endl;
    cout<<"Is marksMap Empty :  "<<marksMap.empty()<<endl; //Checks if the container has no elements, i.e. whether begin() == end(). " 0 " means NO.
    return 0;
}