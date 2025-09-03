#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,t1,t2;
    map<int,int>hrs;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>t1>>t2;
        hrs[t1]++;
        hrs[t2]--;
    }
    
    int actuales=0, max=0;
    for (const auto &u:hrs){
        actuales+=u.second;
        if (actuales>max){
            max=actuales;
        }
    }
    cout<<max<<endl;
    return 0;
}