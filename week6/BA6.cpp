#include<iostream>
using namespace std;
void f(int n){
	int x[n],i=0;
	if(i==n){
		cout<<0;
		return;
	}
	cout<<x[i]<<' ';
	i++;
	f(n);
	
}
int main(){
	int n;
	cin>>n;
	f(n);
	return 0;
}
