#include<iostream>
using namespace std;
//b va c
int main()
{
	int c=0,m=2,n=2,p=2;
	
	for(int i=1;i<=100;i++){
		if(i%2==0)	
			cout<<i<<' ';
	}
	cout<<"\n";
	
	for(int i=2;i<=100;i+=2){
		cout<<i<<' ';
	}
	cout<<"\n";
	
	while(m<=100){
		cout<<m<<' ';
		m+=2;
	}
	cout<<"\n";
	
	do{
		cout<<n<<' ';
		n+=2;
	} while(n<=100);
	cout<<"\n";
	
	while(c!=50){
		cout<<p<<' ';
		p+=2;
		c++;
	}
	return 0;
}
