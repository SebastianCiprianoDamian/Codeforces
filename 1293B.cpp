#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	float sum=0.0f;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		
		sum+= 1.0f/i;
		
	}
	
	cout<<fixed<<setprecision(12)<<sum<<endl;
	
	return 0;
}
