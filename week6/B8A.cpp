#include<iostream>
#include<cmath>
using namespace std;
void f(int a[],int n){
	int p=pow(2,n);
	for(int c=1;c<=p;c++){
		int sub[n];
		for(int j=1;j<=n;j++){
			if(c&(1<<j)) {
				sub[j]=a[j];
				cout<<sub[j]<<' ';
			}
		}
		cout<<"\n";
	}
	
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	f(a,n);
	return 0;
}
