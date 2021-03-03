#include<iostream>
using namespace std;
int main(){
	char a[]="abcd";
	string s="abcd";
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<"\n"<<s;
	return 0;
}
