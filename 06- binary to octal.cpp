#include<bits/stdc++.h>
using namespace std;

int bin2dec(int n){
	int rem; 
	int ans=0;
	int i=0;
	
	while(n!=0){
		rem=n%10;
		ans= ans+ rem*pow(2,i);
		++i;
		n=n/10;
	}
	cout<<"ans2: "<<ans<<"\n";
	return ans;
}



int bin2oct(int n){
	int rem;
	int ans=0;
	int i=1;
	
	while(n!=0){
		rem= n%1000;
		ans += bin2dec(rem)*i; 
		n=n/1000;
		i=i*10;
	}
	cout<<"ans1: "<<ans<<"\n";
	return ans;
}



int main(){
	int n=11011001; //11011001
	cout<<bin2oct(n); 
	
	return 0;
}
