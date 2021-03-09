#include<iostream>
using namespace std;
void sx(int a[],int n){ 
    for (int i = 0; i < n-1; i++)
		for (int j = n-1; j >i; j--)
			if (a[j] < a[j-1])
				swap(a[j], a[j-1]);
}
int main(){
	int n;
	cin>>n;
	int a[n],b[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n+1;i++){
		cin>>b[i];
	}
	sx(a,n);
	sx(b,n+1);
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			cout<<b[i];
			break;
		}
		if(i==n-1){
			cout<<b[n];
			break;
		}
	}
	return 0;
}
