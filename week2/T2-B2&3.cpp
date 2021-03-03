#include<iostream>
using namespace std;
//chua biet so lan lap lai nen ko dung vong for
int main()
{
	int n;
	cin>>n;
	while(n>=3){
		n/=3;
	}
	cout<<n;
	return 0;
}
