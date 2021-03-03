#include<iostream>
using namespace std;
bool chek(int a[],int n){
	int i,j,f=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				return true;
				break;
			}
		}
	}
	if(f==1) return true;
	return false;
}
int main(){
	int n,i,j;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(chek(a,n)==true) cout<<"yes";
	else cout<<"no";
	return 0;
}
