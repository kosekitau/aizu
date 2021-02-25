#include <iostream>
#include <cstdio>

int main(){
    int n,tmp;
    int min=1000000;
    int max=-1000000;
    long long sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d", &tmp);
        sum+=tmp;
        if(min > tmp) min=tmp;
        if(max < tmp) max=tmp;
    }
    std::cout <<min<<' '<<max<<' '<<sum<<'\n';
    return 0;
}