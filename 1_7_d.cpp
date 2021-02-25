#include <iostream>
using namespace std;

int main(){
    int n,m,l;
    cin >>n>>m>>l;
    long long a[100][100], b[100][100],c[100][100]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin >>b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int k=0;k<l;k++){
            for(int j=0;j<m;j++){
                c[i][k] += a[i][j]*b[j][k];
            }
            cout <<c[i][k];
            if(k!=l-1) cout << ' ';
        }
        cout<<endl;
    }
    return 0;
}