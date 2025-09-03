#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,input;
    cin>>n;
    set<long long>num;
    for (int i=0;i<n-1;i++) {
        cin>>input;
        num.insert(input);
    }
    for (int i=1;i<=n;i++) {
        if (num.find(i)==num.end()) {
            cout<<i<<endl;
            break;
        }
    }
 
    return 0;
}