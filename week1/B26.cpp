#include<iostream>
#include<algorithm>
using namespace std;



int main()
{
	int n,sum=0,max=0,min=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	double tb=sum/n;
	int b=sizeof(a)/sizeof(a[0]);
	sort(a,a+b);
	max=a[n-1];
	min=a[0];
	cout<<"Mean: "<<tb<<"\n";
	cout<<"Max: "<<max<<"\n";
	cout<<"Min: "<<min<<"\n";
	return 0;
}
