#include <iostream>
using namespace std;

int main(){
    int r, c,i,j,s,g;
    cin >> r >> c;
    int h[101][101]={0};

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> h[i][j];
        }
    }

    for(i=0;i<r+1;i++){
        for(j=0;j<c;j++){
            cout << h[i][j]<< ' ';
            h[i][c]+=h[i][j];
            h[r][j]+=h[i][j];
        }
        cout << h[i][c] <<endl;
    }
    return 0;
}