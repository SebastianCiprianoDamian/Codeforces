#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long int n;
	cin>>n;
	
	while(n--){
		
		vector<int> v;
		int dat;
		int m, sum=0;
		cin>>m;
		
		while(m--){
	
			cin>>dat;
			if(dat<=2048){
				
				v.push_back(-dat);	
				
			}
			
		}
		
		sort(v.begin(),v.end());
		
		for(int i=0; i< v.size(); i++){
			
			if(-v[i]<=2048){
				
				if(sum<2048)
				sum+=-v[i];
				
			}
			
		}
		
		if(sum == 2048){
					
			cout<<"YES"<<endl;
				
		}
		else{
			
			cout<<"NO"<<endl;	
			
		}

		v.erase(v.begin(),v.end());	
	}
	return 0;
}
