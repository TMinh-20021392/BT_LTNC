#include<iostream>
using namespace std;

//int a[];
//int a[2] = {1, 2, 3, 4};
int main(){
	
	int a[8] = {1, 2, 3, 4};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++) cout<<a[i]<<' ';
	
	cout<<"\n";
	
	int b[ ] = {1, 2, 3, 4};
	int t=sizeof(b)/sizeof(b[0]);
	for(int i=0;i<t;i++) cout<<b[i]<<' ';
	
	return 0;
}
