#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	
	int n;
	cin>>n;
	int val;
	for(int i=0; i<n; i++){
		cin>>val;
		v.push_back(val);
	}
	
	unordered_map<int, int> mp;
	
	for(auto i: v){
		mp[i]=0;
	}
	
	for(auto i: mp){
		cout<<i.first<<" "<<i.second<<"\n";
	}
	return 0;
}
