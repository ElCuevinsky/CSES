#include <bits/stdc++.h>
using namespace std;
long long expbin(int n, int m){
//a%m * b%m
    long long ans=1;
    while(n!=0){
        ans=(ans*2)%m;
        n--;
    }
    return ans;
}
void solve(){
    int n;cin>>n;
    long long ans=0,m=1e9+7;
    ans=expbin(n,m);
    cout<<ans;
    
}
int main(){
    solve();
    return 0;
}