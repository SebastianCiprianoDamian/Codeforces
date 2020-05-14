#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int n,m,men,k=0,nm,sum=0;
	cin>>n>>m;
	if(n<m){
		men=n;
		k=m-n;
	}
	else{
		men=m;
	}
	for(int i=1; i<=sqrt(men)+1 ;i++){
		cout<<n-(n/i)*i<<" ";
		sum+=(n/i)*i;
	}
	
	sum=(n*men-sum+k*n)%(1000000007);
	
	cout<<sum<<endl;
	
	
	return 0;
}
