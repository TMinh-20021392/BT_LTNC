#include<iostream>
using namespace std;



int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n+1-i;j++){
			cout<<' ';
		}
		for(int k=0;k<i;k++){
			cout<<"* ";
		}
		cout<<"\n ";
	}
	return 0;
}
