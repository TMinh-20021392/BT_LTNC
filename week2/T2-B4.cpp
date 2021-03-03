#include<iostream>
using namespace std;

void in(int a,int b,int c){
	if(a<10) cout<<'0';
	if(b<10) cout<<a<<'-'<<'0'<<b;
	else cout<<a<<'-'<<b;
	cout<<'-'<<c;
	cout<<"\n";
}


int main()
{
	int a,b,c,k;
	char x;
	cin>>a>>x>>b>>x>>c;
	while(cin>>k){
		if(k==0) break;
		else{
			in(a,b,c);
		}
	}
	return 0;
}
