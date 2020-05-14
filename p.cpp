#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int n,dat,cont=0,x=1;
	vector<long long int> v;
	cin>>n;
	for(int i=0; i<n-1; i++){
		cin>>dat;
		v.push_back(dat);
	}
	
	for(int i=0; i<n-1 ;i++){
		if(v[i]<v[i+1]){
			x++;
		}
		
		else{
			if(v[i]<v[i+2] && i+2<n){
				v[i+1]=0;
				x++;
			}
			else{
				cont=max(cont,x);
				x=1;
			}
		}

	}
	if(cont!=0)
	cout<<cont<<endl;
	else
	cout<<x<<endl;

		
	return 0;
}
