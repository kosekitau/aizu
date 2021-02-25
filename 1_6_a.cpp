#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n,a[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=i-1;j>=0;j--){
        cout << a[j];
        if(j==0) break;
        cout << ' ';
    }
    cout << endl;
    return 0;
}