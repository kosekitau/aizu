#include <iostream>
using namespace std;

int include3(int x, int i){
    for ( ;x;x=x/10){
        if(x%10==3){
            cout << ' ' << i;
            break;
        }
    }
    return x;
}

int main(){
    int n,i,x;
    cin >> n;
    for(i=1;i<=n;i++){
        x=i;
        if ( x % 3 == 0 )
            cout << " " << i;
        else
            x = include3(x,i);
    }
    cout <<endl;
    return 0;
}