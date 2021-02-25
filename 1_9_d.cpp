#include <iostream>
#include <string>
#include<algorithm>
using  namespace std;

int main(){
    string s,m,r;
    int q,a,b;

    cin >> s;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> m;
        cin>>a>>b;
        if(m=="replace"){
            cin>>r;
            s=s.replace(a,r.size(),r);
        }
        else if(m=="reverse"){
            string ss = s.substr(a, b-a+1);
            reverse(ss.begin(), ss.end());
            s = s.substr(0,a) + ss + s.substr(b+1,s.size()-b);
        }
        else cout << s.substr(a,b-a+1)<<endl;   
    }
    return 0;
}