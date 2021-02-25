#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,i,j,k;
    double sum,m,re,r[100];

    for(j=0;;j++){
        double s[1000];
        cin >> n;
        if(n==0) break;
        sum=0;
        re=0;
        for(i=0;i<n;i++){
            cin >> s[i];
            sum+=s[i];
        }
        m = sum/n;
        for(i=0;i<n;i++){
            re += (m-s[i])*(m-s[i]);
        }
        r[j]=sqrt(re/n);
    }
    for(k=0;k<j;k++){
        printf("%.8lf\n",r[k]);
    }
    return 0;
}