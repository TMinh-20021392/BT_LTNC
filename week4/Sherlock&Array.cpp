#include<iostream>
using namespace std;

int main(){
	int n,a,left=0,right=0,j;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		int b[a];
		
		for(j=0;j<a;j++){
			cin>>b[j];
		}
		if(a==1) cout<<"YES"<<"\n";
		
		for(j=1;j<a;j++){
			right+=b[j];
		}
		for(j=0;j<a-1;j++){
			if(left==right){
				cout<<"YES"<<"\n";
				break;
			}
			left+=b[j];
			right-=b[j+1];
			
		}
		if(j==a-1 && a!=1){
				cout<<"NO"<<"\n";
		}
	}
	
	
	return 0;
}
