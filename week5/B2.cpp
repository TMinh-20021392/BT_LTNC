#include<iostream>
using namespace std;
long gt(long n){
	cout<<"x ="<<n<<" at "<<&n<<"\n";
	if(n==0) return 1;
	return n*gt(n-1);
}
int main(){
	long n=12;
	cout<<gt(n);
	return 0;
}
//dia chi giam dan, frame stack=n
