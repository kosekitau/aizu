#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n,cards[4][13]={0},s;
    char e, ee[4]={'S','H','C','D'};
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        cin >> e >> s;
        if(e=='S')
            cards[0][s-1] = 1;
        else if(e=='H')
            cards[1][s-1] = 1;
        else if(e=='C')
            cards[2][s-1] = 1;
        else
            cards[3][s-1] = 1;
    }
    
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            if(cards[i][j]==0)
                cout <<ee[i]<<' '<<j+1<<endl;
        }
    }
    return 0;
}