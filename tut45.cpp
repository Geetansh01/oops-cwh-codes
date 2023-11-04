#include<iostream>
using namespace std;

class Student{
    protected:
    int roll;

    public:
        void setRoll(int a){
            roll = a;
        }
        void printRoll(){
            cout<<"Roll No is:"<<roll<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics, chemistry;

    public:
        void setMarks(float m, float p, float c){
            maths = m;
            physics = p;
            chemistry = c;
        }
        void printMarks(void){
            cout<<"Maths marks:"<<maths<<endl
                <<"Physics marks:"<<physics<<endl
                <<"Chemistry marks:"<<chemistry<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;

    public:
        void setScore(float s){
            score = s;
        }

        void printScore(){
            cout<<"Sports Score is:"<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;

    public:
        void setResult(){
            total = score + maths + physics + chemistry;
        }

        void printResult(void){
            setResult(); //calling printResult() automatically calls setResult()
            printRoll();
            printMarks();
            printScore();
            cout<<"Total :"<<total<<endl;
        }
};


int main(){
    Result Geetansh;
    Geetansh.setRoll(005);
    Geetansh.setMarks(100, 94, 95);
    Geetansh.setScore(75);

    // Geetansh.setResult();
    
    Geetansh.printResult();
}
