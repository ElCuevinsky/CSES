#include <bits/stdc++.h>
using namespace std;
int main(){
	int num=1, maximaxi=1;
	string adn;
	cin>>adn;
	for(int i=0;i<adn.length();i++){
		if(adn[i]==adn[i-1]){
			num++;
			maximaxi=max(num,maximaxi);
		}
			else{
				num=1;
			}
	}
	cout<<maximaxi;
return 0;
}