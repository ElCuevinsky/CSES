#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,sum;cin>>n;
    sum=(n*(n+1))/2;
    if(sum%2!=0){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    sum/=2;
    vector<int> a,b;
    //tomamos los numeros mas grandes posibles
    for(int i=n;i>=1;i--){
        if(sum-i>=0){
            a.push_back(i);
            sum-=i;
        }
        else{
            b.push_back(i);
        }
    }
    cout<<a.size()<<"\n";
    for(auto x:a)cout<<x<<" ";
    cout<<"\n"<<b.size()<<"\n";
    for(auto x:b)cout<<x<<" ";
    cout<<"\n";


}

int main(){
    solve();
}