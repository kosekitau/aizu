#include <iostream>
using namespace std;

int main(){
    int n,m,s;
    cin >> n >> m;
    int a[n][m], b[m][1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    }
    for(int j=0;j<m;j++)
        cin >> b[j][0];

    for(int i=0;i<n;i++){
        s=0;
        for(int j=0;j<m;j++)
            s+=a[i][j]*b[j][0];
        cout<<s<<endl;
    }   
    return 0;
}