#include<bits/stdc++.h>
using namespace std;

string dec2bin(int n){
	int rem; 
	int ans=0;
	int i=1;
	
	while(n!=0){
		rem=n%2;
		ans= ans+ rem*i;
		i=i*10;
		n=n/2;
	}
	return to_string(ans);
}


string oct2bin(int n){
	int rem;
	string ans="";
	int i=1;
	
	while(n!=0){
		rem= n%10;
		ans += dec2bin(rem); 
		n=n/10;
	}
	return ans;
}



int main(){
	int n=276;
	cout<<oct2bin(n); 
	
	return 0;
}
