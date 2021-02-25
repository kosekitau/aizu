#include <iostream>
using namespace std;

int main(){
    int h[300], w[300];
    int i,j,k,l;
    for(i=0;i<300;i++){
        cin >>h[i]>>w[i];
        if((h[i]==0) && (h[i]==0))
          break;
    }
    for(j=0;j<i;j++){
        for(k=0;k<h[j];k++){
            for(l=0;l<w[j];l++){
                cout <<'#';
            }
            cout<<'\n';
        }
        cout<<'\n';
    }
    return 0;
}