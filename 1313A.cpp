#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b,c;
	cin>>n;
	
	while(n--){
		int cont=0,mx=0;
		cin>>a>>b>>c;
		if(a!=0){
			cont++;
			a--;
		}
		if(b!=0){
			cont++;
			b--;
		}
		if(c!=0){
			cont++;
			c--;
		}
		mx=max(a,b);
		mx=max(mx,c);

		
		if(mx==a){
			if(a!=0 && c!=0){
				cont++;
				a--;
				c--;
			}
			if(a!=0 && b!=0){
				cont++;
				a--;
				b--;
			}
			if(c!=0 && b!=0){
				cont++;
				c--;
				b--;
			}		
		}
		else{
			if(mx==b){
				if(a!=0 && b!=0){
					cont++;
					a--;
					b--;
				}				
				if(c!=0 && b!=0){
					cont++;
					c--;
					b--;
				}
				if(a!=0 && c!=0){
					cont++;
					a--;
					c--;
				}
		 	}
		 	else{
				if(a!=0 && c!=0){
					cont++;
					a--;
					c--;
				}
				if(c!=0 && b!=0){
					cont++;
					c--;
					b--;	
				}
				if(a!=0 && b!=0){
					cont++;
					a--;
					b--;
				}
			 }
		}

		if(a!=0 && b!=0 && c!=0){
			cont++;
			a--;
			b--;
			c--;
		}
		cout<<cont<<endl;
	}
	
	
	return 0;
}
