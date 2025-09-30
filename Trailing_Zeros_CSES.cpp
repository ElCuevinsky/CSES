#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,ans=0;cin>>n;
    
    for(int i=5;n/i>0;i*=5){
        ans+=n/i;
    }
    cout<<ans;
}
int main(){
    solve();
    return 0;
}