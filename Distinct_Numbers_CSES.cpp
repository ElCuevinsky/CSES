#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int> num;
    for(int i=0;i<n;i++){
        num.insert(arr[i]);
    }
    cout<<num.size();
    return 0;
}