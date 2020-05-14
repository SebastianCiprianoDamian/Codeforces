#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int n=600851475143;
	int i=2;
	while(n>1){
		while(i<sqrt(600851475143)){
			if(n%i==0){
				n=n/i;
				cout<<i<<endl;
			}
			i++;
		}
	}
	
	return 0;
}
