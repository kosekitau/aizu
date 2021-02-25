#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,d;
    cin >> a>>b>>c>>d;
    printf("%3.6lf" ,sqrt( (a-c)*(a-c)+(b-d)*(b-d) ));
    return 0;
}