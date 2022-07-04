#include<bits/stdc++.h>
using namespace std;

 void fun(int a[], int n, vector<int> &v){
	sort(a, a+n);
	map<int, int>mp;
	for(int i=0; i<n; i++){
		if(mp.find(a[i])==mp.end()){
			mp[a[i]]=1;
		}else{
			mp[a[i]]++;
		}
	}
	for(auto i=mp.begin(); i!=mp.end(); i++){
		if(i->second==1){
			v.push_back(i->first);
		}
	}
	mp.clear();
}


int main(){
	int a[] {2, 5, 3, 5, 6, 7, 6, 2};
	int n=sizeof(a)/sizeof(int);
	vector<int>v;
	fun(a, n, v);
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
