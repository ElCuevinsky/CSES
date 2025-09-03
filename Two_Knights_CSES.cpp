#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int k=1;k<=n;k++){
        long long total=(long long)k*k*(k*k-1)/2;
        long long atk=4*(k-1)*(k-2);
        cout<<total-atk<<endl;
    }
}

int main(){
    solve();
}