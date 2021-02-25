#include <iostream>
using namespace std;

int main(){
    int m,f,r,i,j;
    char re[50];
    for(i=0;;i++){
        cin >> m>>f>>r;
        if(m+f+r==-3) break;
        if(m+f>79) re[i] = 'A';
        else if(m*f<0) re[i] = 'F';
        else if(m+f>64 && 80>m+f) re[i] = 'B';
        else if(m+f>49 && 65>m+f) re[i] = 'C';
        else if(r>49) re[i] = 'C';
        else if(m+f>29 && 50>m+f) re[i] = 'D';
        else re[i] = 'F';
    }
    for(j=0;j<i;j++)
        cout << re[j]<<endl;
    return 0;
}