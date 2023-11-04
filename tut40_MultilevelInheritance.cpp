#include<iostream>
using namespace std;

class Student{
    protected:
        int rollno;
    public:
        void set_rollno(int);
        void get_rollno(void);
};

void Student :: set_rollno(int r){
    rollno = r;
}

void Student :: get_rollno(){
    cout<<"The roll no is:"<<rollno<<endl;
}

class Exams: public Student{
    protected:
        float maths;
        float physics;

    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exams :: set_marks(float m, float p){
    maths = m;
    physics = p;
} 

void Exams :: get_marks(){
    cout<<"Marks in maths:"<<maths<<endl
        <<"Marks in Physics:"<<physics<<endl;
}

class Result: public Exams{
    float percentage;

    public:
        void display_percentage(void){
            get_rollno();
            get_marks();
            cout<<"Overall % is : "<<(maths  + physics)/2<<"%"<<endl;
        }
};
/*
Note:
    1)We are inheriting B from A and C from B [i.e A---->B---->C]
    3)A is the base class for B and B is the base class for C
    2)A---->B---->C is called the inheritance path
*/
int main(){
    Student Geetansh;
    Geetansh.set_rollno(12);
    Geetansh.get_rollno();

    Result Hemish;
    Hemish.set_rollno(30);
    Hemish.set_marks(90, 95.8);
    Hemish.display_percentage();

 
    return 0;
}