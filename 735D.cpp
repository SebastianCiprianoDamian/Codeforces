#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int n,m;
	int cont=0;
	cin>>n;
	long long int array[n-1];

	for(int i=2;i<=n;i++){
		array[i]=i;
	}
	
	for(int j=0; j<n-1; j++){
		if(array[j]!=0){
			cont=j+array[j];
			while(cont<n){
				cont+=array[j];
			}
		}
	}
	for(int k=0; k<n-1; k++){
		cout<<array[k]<<" "<<k<<endl;
	}
	
	
	return 0;
}
