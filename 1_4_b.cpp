#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double r;
    cin >> r;
    cout << fixed << setprecision(6);
    cout << r*r*M_PI << ' ' << 2*r*M_PI << '\n';
    return 0;
}