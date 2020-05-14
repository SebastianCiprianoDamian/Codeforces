#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int n,pot=0;
	cin>>n;

	for(int i=1; i<=n ; i++){
		pot+=pow(2,i);
	}
	cout<<pot<<endl;
	
	return 0;
}
