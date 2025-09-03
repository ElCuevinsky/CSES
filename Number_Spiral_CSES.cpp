#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long y,x;
        cin>>y>>x;
        long long k=max(y,x);
        if(k%2==1){
            if(y<=x){
                cout<<k*k-(y-1)<<'\n';
            }
            else{
                cout<<(k-1)*(k-1)+x<<'\n';
            }
        }
        else{
            if(y<=x){
                cout<<(k-1)*(k-1)+y<<'\n';
            } 
            else{
                cout<<k*k-(x-1)<<'\n';
            }
        }
    }

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}