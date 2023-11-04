#include<iostream>
using namespace std;

/*
    1)To be able to use vectors from STL, you #include the "vector" header file.
    2)vectors are like arrays, but they can change in size (acc to no. of elements inserted).
*/ 
#include<vector>

/**********************************************************************Vector Basics******************************************************************/

void display(vector<int> &v);


int main(){
    vector<int> vec1;
    int element = 0;

    display(vec1);

    for(int i = 0; i < 4; i++){
        cout<<"Enter element to add to vector : "<<endl;
        cin>>element;
        vec1.push_back(element); 
    }
    
    //Using different functionalities of vectors (see cplusplus.com for reference or GOOGLE :) )
    display(vec1);
    vec1.pop_back();
    display(vec1);
    
    /*
        1)We will now use " Iterator " for traversing a vector. Syntax: 
                vector<int> :: iterator NameOfIterator = NameOfVectorObject.begin()    
        2)Here " begin() " returns an iterator pointing to the first element of the " VectorObject "
    */

    vector<int> :: iterator iter = vec1.begin(); 
    vec1.insert(iter, 566);     
    /*
    1)"insert()" will insert the new element before the element where the iterator is currently poiting to.
    2)here, iter is pointing to 1st element (0 index), so new element will be inserted before first element.
    */
    display(vec1);
    /*
        1)When you insert an element into the vector using an iterator, the iterator is not guaranteed to remain valid after 
        the insertion operation, especially when the vector is resized. Therefore, using "iter" after the insertion can lead to undefined behavior.
        2)To fix this, you should update the iterator "iter" after performing the insertion to keep it valid (say, using " begin() " ) 
    */
    iter = vec1.begin();
    vec1.insert(iter+1, 700);  //inserts 700 before 2nd element.
    iter = vec1.begin();
    vec1.insert(iter, 600);  //inserts 600 before 1st element.
    display(vec1);
    
    iter = vec1.begin();
    vec1.insert(iter,10, 2); //This will insert 2 ten times.
    display(vec1);

}
void display(vector<int> & vec){
    for (int i = 0; i < vec.size(); i++){
        cout<<"Element : "<<vec[i]<<endl;
    }
    cout<<"-----------------------------"<<endl;
}


/***********************************************************************Ways To create a vector********************************************/
// template <class T >
// void display(vector<T> & vec);

// int main(){
//     vector<int> vec1; //Zero Length integer vector
//     vector<char> vec2(4); //character vector of length 4
//     vec2.push_back('g');
//     display(vec2);
//     vector<char> vec3(vec2); //4-elemnt character vector from " vec2 "
//     //vec3 is a new vector that is a copy of vec2
//     display(vec3);
//     vector<int> vec4(6, 3); //6-element vector of 13s
//     display(vec4);




// }

// template <class T>
// void display(vector<T> & vec){
//     for (int i = 0; i < vec.size(); i++){
//         cout<<"Element : "<<vec.at(i)<<endl; //at(i) to access i^th element of vector
//         // cout<<"Element : "<<vec[i]<<endl; //Alter method to access i^th element just like in array
//     }
//     cout<<"-----------------------------"<<endl;
// }