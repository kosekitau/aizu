#include <iostream>
using namespace std;

int main(){
    int f=0;
    string s,p;
    cin >> s;
    cin >> p;
    s+=s;
    
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==p[0]){
            for(int j=0;s[i+j]==p[j];j++){
                if(p[j+1]=='\0') f=1;
            }
        }
    }
    if(f) cout <<"Yes"<<endl;
    else cout <<"No"<<endl;

    return 0;
}