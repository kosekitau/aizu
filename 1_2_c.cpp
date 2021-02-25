#include <iostream>
using namespace std;
int main(){
    int a[3], i,j,t;
    cin >>a[0]>>a[1]>>a[2];
    for(i=0;i<2;i++){
        for(j=1;j<3;j++){
            if(a[i]>a[j]){
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }        
    }
    cout <<a[0]<<' '<<a[1]<<' '<<a[2]<<'\n';
    return 0;
}