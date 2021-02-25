#include <iostream>
using namespace std;

int main(){
    int a[3000],b[3000], i,j;
    char op[3000];

    for(i=0;i<3000;i++){
        cin >> a[i]>>op[i]>>b[i];
        if(op[i] == '?')
          break;
    }

    for(j=0;j<i;j++){
        if(op[j]=='+')
          cout << a[j]+b[j]<<endl;
        if(op[j]=='-')
          cout << a[j]-b[j]<<endl;
        if(op[j]=='*')
          cout << a[j]*b[j]<<endl;
        if(op[j]=='/')
          cout << a[j]/b[j]<<endl;
    }
    return 0;
}