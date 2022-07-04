#include<bits/stdc++.h>
using namespace std;

void fun(int a[], int n, int pos, int val){
	for(int i=n-1; i>=pos-1; i--){
		a[i+1]=a[i];
	}
	a[pos-1]=val;
	
	for(int i=0; i<n+1; i++){
		cout<<a[i]<<" ";
	}
}



int main(){
	int a[15] {2, 3, 4, 5, 7 ,9};
	int n= 6;
	int pos, val;
	cin>>pos>>val;
	fun(a, n, pos, val);
	return 0;
}
