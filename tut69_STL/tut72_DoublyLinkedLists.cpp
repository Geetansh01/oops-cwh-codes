#include<iostream>
#include<list>

using namespace std;

/*********************************Making Bidirectional Linked List************************/
/*
    1)The list we will be making using STL will be "bidirectional linked list" OR "Doubly linked list".
*/

void display(list<int> & listt){  //naming parameter as " listt " to avoid naming conflict with " list "
    list<int> :: iterator iter;
    iter = listt.begin();
    for(iter = listt.begin(); iter != listt.end(); iter++){
        cout<<"Element : "<<*(iter)<<endl;
    }

    //OR Use the Below for Loop:
    // for(int i = 0; i < listt.size(); i++ ){
    //     cout<<"Element : "<<*(iter)<<endl;
    //     iter++;
    // }
    cout<<"-------------------------"<<endl;
}

int main(){
    list<int> list1; //Makes a list of 0 Length
    list<int> list2(7); //Makes a Empty List of size 7
    list2.push_back(1);
    list2.push_back(2);
    list2.push_back(3);
    list2.push_back(4);
    list2.push_back(5);
    list2.push_back(6);
    list2.push_back(7);
    list<int> list3;
    list3.push_back(100);
    list3.push_back(30);
    list3.push_back(7);

    //Making Iterator 
    list<int> :: iterator  iter;
    iter = list2.begin();
    //OR ---> list<int> :: iterator  iter = list2.begin();

    /*
        1)WRONG ---> " *(iter + 1) ", as it is a dobly linked list so Random Access like *(iter + 5) to go to 5th
          element is not allowed.
        2)You can only go step by step. So only *(iter++) or similar instructions allowed
    */
    cout<<"1st Element Of List : "<<*(iter)<<endl; 
    //Output will be : 1st Element Of List : 0
    //This is because push_back() adds elemnts to the end of list, so the list has total 14 elements and looks like: 0 0 0 0 0 0 0 1 2 3 4 5 6 7

    display(list2);

    list2.pop_back(); //pops element from the last (back) of the list

    display(list2);

    list2.pop_front(); //pops element from the front(start) of the list

    display(list2);

    list2.remove(2); //removes all occurrences of "2" frfom the list

    display(list2);

    list3.sort();
    display(list3);

    list2.merge(list3); //merges list3 at the end of list2
    display(list2);

    list2.reverse();
    display(list2);

    return 0;
}