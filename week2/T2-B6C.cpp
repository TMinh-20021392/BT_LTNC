#include<iostream>
using namespace std;


int main()
{
	int n,c=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=i;j<n+i;j++){
			if(j<=n){
				cout<<j<<' ';
			}
			else{
				c++;
				cout<<c<<' ';
			}
		}
		c=0;
		cout<<"\n";
	}
	return 0;
}

