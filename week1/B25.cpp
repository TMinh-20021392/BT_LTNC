#include<iostream>
#include<algorithm>
using namespace std;



int main()
{
	int a[5];
	for(int i=0;i<5;i++) cin>>a[i];
	int n = sizeof(a) / sizeof(a[0]);
	sort(a, a + n);
	cout<<a[2];
	return 0;
}
