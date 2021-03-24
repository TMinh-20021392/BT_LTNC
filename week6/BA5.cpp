#include<iostream>
using namespace std;
long F(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return F(n-1) + F(n-2);
 	/*
	f[0] = 0; 
	f[1] = 1; 
	for (i = 2; i <= n; i++) 
	{ 
		f[i] = f[i-1] + f[i-2]; 
	}
	return f(n);*/
}
int main(){
	int n;
	cin>>n;
	cout<<F(n);
	return 0;
}

