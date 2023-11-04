/*****************************************************Implementaton A : Virtual Functions***********************************/
#include<iostream>
#include <cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;

    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }

        virtual void display(){}
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

/*

Rules for virtual functions:
1)They cannot be static
2)They are accessed by object pointers
3)Virtual functions can be a friend of another class
4)A virtual function in the base class might not be used. (like the "display()" in CWH class above is not used anywhere in the code below)
5)If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class (i.e we might not have 
made a "display()" in CWHVideo class below. In that case, when "display()" of CWHVideo would be called, the "display()" of CWH would be executed).

*/