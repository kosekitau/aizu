#include <iostream>
using namespace std;

int main(){
    char c;
    while(1){
        scanf("%c",&c);
        if('a'<=c && c<='z')            
            c-=32;
        else if('A'<=c && c<='Z')
            c+=32;
        cout <<c;
        if(c=='\n') break;
    }
    return 0;     
}