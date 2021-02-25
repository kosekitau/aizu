#include <iostream>
using namespace std;
int main(){
    string t,r="",rr[10];
    int i,j,m,p;
    
    for(i=0;;i++){
        cin >> t;
        if(t=="-") break;
        cin >> m;
        for(j=0;j<m;j++){
            cin >> p;
            t=t.substr(p,t.size()-p) + t.substr(0,p);
        }
        rr[i]=t;
    }
    for(i=0;rr[i]!="\0";i++)
        cout << rr[i]<<endl;
    
    return 0;
}