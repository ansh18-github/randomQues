#include<bits/stdc++.h>
using namespace std;

 void fun(int a[], int n, vector<int> &v){
	sort(a, a+n);
	set<int> s;
	for(int i=1; i<n; i++){
		if(a[i]==a[i-1]){
			s.insert(a[i]);
		}
	}
	
	for(auto i=s.begin(); i!=s.end(); i++){
		v.push_back(*i);
	}
	s.clear();
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
