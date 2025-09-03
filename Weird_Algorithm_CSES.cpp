#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll n){
	cout<<n<<" ";
	if(n==1)return ;
	if(n%2==0){
		solve(n/2);
	}
	if(n%2!=0){
		solve((n*3)+1);
	}
}
int main(){
	ll n;
	cin>>n;
	solve(n);
}