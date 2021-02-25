#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,deg,c;
    double rad,s;
    double PI = acos(-1);

    cin>>a>>b>>deg;
    rad = deg*PI/180;
    s = a*b*sin(rad)/2;
    printf("%.8lf\n", s);

    printf("%.8lf\n", a+b+sqrt(a*a+b*b -2*a*b*cos(rad)));

    printf("%.8lf\n", 2*s/a);
    return 0;
}