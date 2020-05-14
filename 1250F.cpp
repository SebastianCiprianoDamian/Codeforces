#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int n,p=10000000000;
	cin>>n;
	for(int i=2;i<sqrt(n)+1;i++){
		if(n%i==0){
			if(2*(n/i)+2*i)
				p=2*(n/i)+2*i;
		}
	}
	if(sqrt(n)-int(sqrt(n))!=0){
		if(2*n+2<=p)
			cout<<2*n+2<<endl;
		else
			cout<<p<<endl;
	}
	else{
		if(4*sqrt(n)<=p)
			cout<<4*sqrt(n)<<endl;
		else
			cout<<p<<endl;
	}
	
	return 0;
}
