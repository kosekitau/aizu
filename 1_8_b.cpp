#include <iostream>
using namespace std;

int main(){
    char number[1000][4],n[4];
    int i,j,s;
    for(i=0;;i++){
        scanf("%s",number[i]);
        if(*number[i]=='0') break;
    }
    
    for(j=0;j<i;j++){
        s=0;
        for(int k=0;number[j][k]!='\0';k++){
            cout << *number[j];
            s+= number[j][k]-'0';
        }
        //cout << s<< endl;
    }
    return 0;
}