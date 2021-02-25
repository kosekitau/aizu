#include <iostream>
using namespace std;

string k(string t){
    for(int i=0;t[i]!='\0';i++){
        if('A'<=t[i] && t[i]<='Z') t[i]+=32;
    }
    return t;
}

int g(string w, string t){
    if(w==k(t)) return 1;
    return 0;
}

int main(){
    int s=0;
    string w,t;
    cin >> w;
    while(1){
        cin >> t;
        if(t=="END_OF_TEXT") break;
        s+=g(w,t);
    }
    cout <<s<<endl;
    return 0;
}