#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    double x[100],y[100];

    cin >> n;
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<n;i++) cin>>y[i];

    double s[4]={0};
    for(int i=0;i<n;i++)
        s[0]+=fabs(x[i] - y[i]);

    for(int i=0;i<n;i++)
        s[1]+=pow(fabs(x[i] - y[i]), 2);
    s[1]=sqrt(s[1]);

    for(int i=0;i<n;i++)
        s[2]+=pow(fabs(x[i] - y[i]), 3);
    s[2]=pow(s[2], (double)1/3);
    
    double m=0;
    for(int i=0;i<n;i++)
        if(fabs(x[i] - y[i])>m) m=fabs(x[i] - y[i]);
    s[3]=m;

    for(int i=0;i<4;i++) printf("%.8lf\n",s[i]);


    return 0;
}