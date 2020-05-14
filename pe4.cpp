#include<bits/stdc++.h>

using namespace std;

int main(){
	string a="0",b="1";
	
	long long int n=999*999;
	int cont=0;
	while(a!=b){
	    n-=999;
	    cont++;
	    a=to_string(n);
	    b=to_string(n);
	    reverse(b.begin(),b.end());
	}
	cout<<cont<<endl;
	cout<<a<<endl;
	
	return 0;
}


