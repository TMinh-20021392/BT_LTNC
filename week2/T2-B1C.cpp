#include<iostream>
using namespace std;

bool check(int n){
	if(n<2) return false;
	for(int i=2;i<n;i++){
		if(n%i==0) return true;
		return false;
	}
}

int main()
{
	int n;
	cin>>n;
	if(check(n)==1) cout<<"yes";
	else cout<<"no";
	return 0;
}
