#include <iostream>
using namespace std;

int main(){
    int i,j,k,s,l;
    int n[1000],x[1000];
    for(l=0;;l++){
        cin >> n[l] >> x[l];
        if(n[l]==0 && x[l]==0) break;
    }
    for(int c=0;c<l;c++){
        s=0;
        for(i=1;i<=n[c];i++){
            for(j=i+1;j<=n[c];j++){
                for(k=j+1;k<=n[c];k++)
                    if(i+j+k == x[c]) s+=1;
            }
        }
        cout << s << endl;
    }
    return 0;
}