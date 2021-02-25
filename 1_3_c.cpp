#include <iostream>
using namespace std;

int main(){
    int x[3000], y[3000],i,j;
    for(i=0;i<3000;i++){
        cin >> x[i] >> y[i];
        if( (x[i]==0)&&(y[i==0]) ) break;
    }
    for(j=0;j<i;j++){
        if(x[j] < y[j])
          cout << x[j] << ' ' << y[j] << '\n';
        else
          cout << y[j] << ' ' << x[j] << '\n';  
    }
    return 0;
}