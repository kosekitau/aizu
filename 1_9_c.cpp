#include <iostream>
using namespace std;
int main(){
    int n,i,j,t=0,h=0;
    string r[2][1000];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> r[0][i] >> r[1][i];
    }
    for(i=0;i<n;i++){
        if(r[0][i] > r[1][i]) t+=3;
        else if(r[0][i] < r[1][i]) h+=3;
        else{
            t+=1;
            h+=1;
        }
    }
    cout << t << ' '<< h<<endl;
    return 0;
}