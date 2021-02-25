#include <iostream>
using namespace std;

int main(){
    int a[10000], i,j,x;
    for(i=0;i<10000;i++){
        cin >> a[i];
        if (a[i]==0) break;
    }
    for(j=0;j<i;j++)
      cout <<"Case "<<j+1<<": "<<a[j]<<'\n';

    return 0;
}