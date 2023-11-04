#include <iostream>
#include <cmath>
using namespace std;

class Simplecalc{
   public:
      void add(float, float);
      void subtract(float, float);
      void multiply(float, float);
      void divide(float, float);
};


void Simplecalc :: add(float x, float y){
   cout<<"Addition:"<<x+y<<endl;
}

void Simplecalc :: subtract(float x, float y){
   cout<<"Subtraction:"<<x-y<<endl;
} 

void Simplecalc :: multiply(float x, float y){
   cout<<"Multiplication:"<<x*y<<endl;
} 

void Simplecalc :: divide(float x, float y){
   cout<<"Division :"<<x/y<<endl;
} 


class Scicalc{
   public:
      void sine(float);
      void absolute(float);
      void log_10(float);
      void power(float, float);
};

void Scicalc :: sine(float x){
   cout<<"sin() :"<<sin(x)<<endl; 
}

void Scicalc :: absolute(float x){
   cout<<"absolute() :"<<abs(x)<<endl; 
}

void Scicalc :: log_10(float x){
   cout<<"log_10() :"<<log10(x)<<endl; 
}

void Scicalc :: power(float x, float y){
   cout<<"power() :"<<pow(x,y)<<endl; 
}

//Multiple Inheritance 
class Hybridcalc: public Simplecalc, public Scicalc {};

int main(){
Simplecalc calc1;
calc1.add(1,2);
calc1.subtract(1,2);
calc1.multiply(1,2);
calc1.divide(1,2);

Scicalc scicalc1;
scicalc1.absolute(-3.2);
scicalc1.log_10(1);
scicalc1.power(2.0, 3.0);
scicalc1.sine(3.14/2);

Hybridcalc hybridcalc1;
hybridcalc1.add(1,2);
hybridcalc1.subtract(1,2);
hybridcalc1.multiply(1,2);
hybridcalc1.divide(1,2);

hybridcalc1.absolute(-3.2);
hybridcalc1.log_10(1);
hybridcalc1.power(2.0, 3.0);
hybridcalc1.sine(3.14/2);

return 0;
}