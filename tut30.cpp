#include<iostream>
#include<cmath>
using namespace std;

//If u are looing for Initial use of "parameterized" constructor, that is in "tut29a_Constructors.cpp".

class Point{
    long double x, y;
    friend long double Distance(Point, Point);

    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        
};


long double Distance(Point a, Point b){
    return (sqrt((pow((a.x - b.x), 2) + (pow((a.y - b.y), 2)))));
}

int main(){
    Point p1(0, 0);
    Point p2(8, 0);

    long double distance = Distance(p1, p2);
    cout<<distance<<endl;

    return 0;

}