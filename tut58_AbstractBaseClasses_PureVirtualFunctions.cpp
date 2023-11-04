/*****************************************************Pure Virtual Functions and Abstract Base classes***********************************/
//The code in this file has been copied (and modified) from file " tut57A_ExVirtualFunction1.cpp "
#include<iostream>
#include <cstring>
using namespace std;

/*
Abstract Base Classes:
1)A class made for the SOLE PURPOSE of being the base class for other derived classes (i.e no object of this abstract base class will be 
used in the code)
2)For a class to be called an abstract base class, it MUST HAVE AT LEAST 1 PURE VIRTUAL FUNCTION
*/

class CWH{
    protected:
        string title;
        float rating;

    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }

        /*
        Pure Virtual Funtion:
        1)Those Virtual functions which are made for being (necessarily) overridden in derived classes
        2)Syntax: remove {} and equate to 0
            " virtual void display(){} " ------> " virtual void display() = 0; "
        */
        virtual void display() = 0;  // do-nothing function ----> pure virtual function
};

class CWHVideo : public CWH{
    float video_length;

    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r){
            video_length = vl;
        }
        void display(void){
            cout<<"Video Title:"<<title<<endl;
            cout<<"Video Rating:"<<rating<<endl;
            cout<<"Video Length:"<<video_length<<endl;
        }
};

class CWHText : public CWH{
    int word_count;

    public:
        CWHText(string s, float r, int wc) : CWH(s, r){
            word_count = wc;
        }
        void display(void){
            cout<<"Text Title:"<<title<<endl;
            cout<<"Text Rating:"<<rating<<endl;
            cout<<"Text Length:"<<word_count<<endl;
        }
};

int main(){
    string title ;
    float vlen , rating ;
    int wcount;

    //for CWH Video
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.99;
    CWHVideo djvideo(title, rating, vlen);


    //for CWH Text
    title = "Django Text";
    rating = 4.88;
    wcount = 100;
    CWHText djtext(title, rating, wcount);

    CWH* ptr[2];
    ptr[0] = &djvideo;
    ptr[1] = &djtext;

    ptr[0]->display();
    ptr[1]->display();



    
    return 0;
}
